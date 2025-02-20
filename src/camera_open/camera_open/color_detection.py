import cv2
import numpy as np
import pyrealsense2 as rs

# Define HSV color ranges for multiple colors (Now supports multiple HSV ranges per color)
COLOR_RANGES = {
    'Green': [((35, 100, 100), (85, 255, 255))],
    'Red': [((0, 120, 70), (10, 255, 255)), ((170, 120, 70), (180, 255, 255))],  # Two HSV ranges for red
    'Blue': [((100, 150, 100), (140, 255, 255))],
    'Yellow': [((20, 100, 100), (30, 255, 255))],
    'Purple': [((140, 50, 50), (160, 255, 255))],
    'purple_shadow': [((104, 56, 43), (147, 158, 82))],
}

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

                    # Draw a rectangle around the detected object
                    cv2.rectangle(color_image, (x, y), (x + w, y + h), (0, 255, 0), 2)

                    # Overlay the color name, distance, and HSV value
                    label = f"{color_name}: {distance:.2f} m, HSV: {hsv_value}"
                    cv2.putText(color_image, label, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)

        # Display the image
        cv2.imshow("Multi-Color Detection with Distance and HSV", color_image)

        # Exit on 'q' key press
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

finally:
    # Stop the pipeline
    pipeline.stop()
    cv2.destroyAllWindows()
