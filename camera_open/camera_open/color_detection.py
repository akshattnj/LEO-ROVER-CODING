import cv2
import numpy as np
import pyrealsense2 as rs
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

# Define HSV color ranges for multiple colors (Now supports multiple HSV ranges per color)
COLOR_RANGES = {
    'Green': [((35, 100, 100), (85, 255, 255))],
    'Red': [((0, 120, 70), (10, 255, 255)), ((170, 120, 70), (180, 255, 255))],  # Two HSV ranges for red
    'Blue': [((100, 150, 100), (140, 255, 255))],
    'Yellow': [((20, 100, 100), (30, 255, 255))],
    'purple': [((105, 119, 39), (137, 195, 112)), ((107, 51, 91), (133, 174, 204)), ((104, 51, 27), (146, 131, 121))],
}

class CoordinatePublisher(Node):
    def __init__(self):
        super().__init__('coordinate_publisher')
        self.publisher_ = self.create_publisher(String, 'object_coordinates', 10)

    def publish_coordinates(self, message):
        msg = String()
        msg.data = message
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published: {msg.data}')

# Function to list available RealSense cameras
def list_cameras():
    ctx = rs.context()
    devices = [d.get_info(rs.camera_info.serial_number) for d in ctx.devices]
    return devices

# Get available cameras
available_cameras = list_cameras()
if not available_cameras:
    print("No RealSense cameras detected.")
    exit()

# Display camera options
print("Available RealSense Cameras:")
for i, cam in enumerate(available_cameras):
    print(f"{i}: {cam}")

# User selects a camera
selected_index = int(input("Select a camera index: "))
selected_camera = available_cameras[selected_index]
print(f"Using camera: {selected_camera}")

# Initialize ROS2 node
rclpy.init()
node = CoordinatePublisher()

# Initialize RealSense pipeline
pipeline = rs.pipeline()
config = rs.config()
config.enable_device(selected_camera)

# Enable color and depth streams
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)

# Start the pipeline
pipeline.start(config)

# Create a RealSense align object to align depth frame with color frame
align_to = rs.stream.color
align = rs.align(align_to)

# Get depth sensor intrinsics (needed for 3D coordinate conversion)
profile = pipeline.get_active_profile()
depth_sensor = profile.get_device().first_depth_sensor()
depth_scale = depth_sensor.get_depth_scale()
color_intrinsics = profile.get_stream(rs.stream.color).as_video_stream_profile().get_intrinsics()

def deproject_pixel_to_point(intrinsics, pixel, depth):
    return rs.rs2_deproject_pixel_to_point(intrinsics, pixel, depth)

last_print_time = time.time()

try:
    while True:
        # Wait for frames
        frames = pipeline.wait_for_frames()

        # Align frames
        aligned_frames = align.process(frames)

        # Get aligned frames
        color_frame = aligned_frames.get_color_frame()
        depth_frame = aligned_frames.get_depth_frame()

        if not color_frame or not depth_frame:
            continue

        # Convert to numpy arrays
        color_image = np.asanyarray(color_frame.get_data())

        # Convert color image to HSV
        hsv = cv2.cvtColor(color_image, cv2.COLOR_BGR2HSV)

        detected_objects = []

        # Loop through each color range and detect objects
        for color_name, hsv_ranges in COLOR_RANGES.items():
            mask = np.zeros_like(hsv[:, :, 0], dtype=np.uint8)

            # Loop through all HSV ranges for the same color
            for lower_bound, upper_bound in hsv_ranges:
                mask += cv2.inRange(hsv, np.array(lower_bound), np.array(upper_bound))

            # Noise reduction using morphological operations
            mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, np.ones((5, 5), np.uint8))

            # Find contours for the mask
            contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

            # Process each detected contour
            for contour in contours:
                if cv2.contourArea(contour) > 500:  # Ignore small contours
                    # Get the bounding box of the object
                    x, y, w, h = cv2.boundingRect(contour)

                    # Get the center of the bounding box
                    center_x, center_y = x + w // 2, y + h // 2

                    # Get the depth value (distance) at the center of the object
                    distance = depth_frame.get_distance(center_x, center_y)

                    # Get the HSV value at the center of the object
                    hsv_value = hsv[center_y, center_x]

                    # Convert to 3D coordinates (w.r.t. camera frame)
                    camera_coordinates = deproject_pixel_to_point(color_intrinsics, [center_x, center_y], distance)
                    x_3d, y_3d, z_3d = camera_coordinates
                    detected_objects.append(f"{color_name}: 3D Coordinates = ({x_3d:.2f}, {y_3d:.2f}, {z_3d:.2f})")

                    # Draw a rectangle around the detected object
                    cv2.rectangle(color_image, (x, y), (x + w, y + h), (0, 255, 0), 2)

                    # Overlay the color name, distance, HSV value, and 3D coordinates
                    label = (f"{color_name}: {distance:.2f} m, HSV: {hsv_value}, "
                             f"3D: ({x_3d:.2f}, {y_3d:.2f}, {z_3d:.2f})")
                    cv2.putText(color_image, label, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)
        
        if time.time() - last_print_time >= 3:
            for obj in detected_objects:
                print(obj)
                node.publish_coordinates(obj)
            last_print_time = time.time()
        
        # Display the image
        cv2.imshow("Multi-Color Detection with Distance and HSV", color_image)

        # Exit on 'q' key press
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

finally:
    # Stop the pipeline
    pipeline.stop()
    rclpy.shutdown()
    cv2.destroyAllWindows()
