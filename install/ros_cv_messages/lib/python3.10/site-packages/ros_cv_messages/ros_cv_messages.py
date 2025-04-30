import cv2
import numpy as np
import pyrealsense2 as rs
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64MultiArray

# Define HSV color ranges for multiple colors
COLOR_RANGES = {
    'Green': [((35, 100, 100), (85, 255, 255))],
    'Red': [((0, 120, 70), (10, 255, 255)), ((170, 120, 70), (180, 255, 255))],
    'Blue': [((99, 238, 113), (102, 255, 153)), ((98, 207, 66), (102, 255, 113)), ((97, 208, 154), (101, 255, 209))],
    'Yellow': [((20, 100, 100), (30, 255, 255))],
    #'Purple': [((105, 119, 39), (137, 195, 112)), ((107, 51, 91), (133, 174, 204)), ((104, 51, 27), (146, 131, 121))]
}

# Function to convert BGR to HEX
def bgr_to_hex(bgr):
    return "#{:02X}{:02X}{:02X}".format(bgr[2], bgr[1], bgr[0])

class ObjectDetectionNode(Node):
    def __init__(self):
        super().__init__('object_detection_node')
        self.string_publisher = self.create_publisher(String, '/detected_objects', 10)
        self.position_publisher = self.create_publisher(Float64MultiArray, '/camera_position', 10)
        self.last_print_time = time.time()

        # Initialize RealSense pipeline  
        self.pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        self.pipeline.start(config)

        align_to = rs.stream.color
        self.align = rs.align(align_to)
        profile = self.pipeline.get_active_profile()
        depth_sensor = profile.get_device().first_depth_sensor()
        self.depth_scale = depth_sensor.get_depth_scale()
        self.color_intrinsics = profile.get_stream(rs.stream.color).as_video_stream_profile().get_intrinsics()

    def deproject_pixel_to_point(self, pixel, depth):
        return rs.rs2_deproject_pixel_to_point(self.color_intrinsics, pixel, depth)

    def detect_objects(self):
        while rclpy.ok():
            frames = self.pipeline.wait_for_frames()
            aligned_frames = self.align.process(frames)
            color_frame = aligned_frames.get_color_frame()
            depth_frame = aligned_frames.get_depth_frame()
            if not color_frame or not depth_frame:
                continue

            color_image = np.asanyarray(color_frame.get_data())
            hsv = cv2.cvtColor(color_image, cv2.COLOR_BGR2HSV)
            detected_objects = []
            positions = []  # Stores 3D positions
            color_counts = {color: 1 for color in COLOR_RANGES}  # Keeps track of object indexing

            for color_name, hsv_ranges in COLOR_RANGES.items():
                mask = np.zeros_like(hsv[:, :, 0], dtype=np.uint8)
                for lower_bound, upper_bound in hsv_ranges:
                    mask += cv2.inRange(hsv, np.array(lower_bound), np.array(upper_bound))
                mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, np.ones((5, 5), np.uint8))
                contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
                
                for contour in contours:
                    if cv2.contourArea(contour) > 500:
                        x, y, w, h = cv2.boundingRect(contour)
                        center_x, center_y = x + w // 2, y + h // 2
                        distance = depth_frame.get_distance(center_x, center_y)
                        bgr_value = color_image[center_y, center_x]
                        hex_color = bgr_to_hex(bgr_value)
                        camera_coordinates = self.deproject_pixel_to_point([center_x, center_y], distance)
                        x_3d, y_3d, z_3d = camera_coordinates
                        object_label = f"{color_name} {color_counts[color_name]}"
                        color_counts[color_name] += 1  # Increment index count for this color

                        detected_objects.append(f"{object_label}: HEX={hex_color} 3D Coordinates = ({x_3d:.3f}, {y_3d:.3f}, {z_3d:.3f})")
                        positions.append([x_3d, y_3d, z_3d])  # Store all positions

                        # Draw bounding box and overlay
                        cv2.rectangle(color_image, (x, y), (x + w, y + h), (255, 0, 255), 2)
                        overlay = color_image.copy()
                        cv2.drawContours(overlay, [contour], -1, (255, 0, 255), thickness=cv2.FILLED)

                        if color_name:
                            cv2.drawContours(color_image, [contour], -1, (0, 255, 0), thickness=2)  # Green outline for visibility

                        alpha = 0.4
                        color_image = cv2.addWeighted(overlay, alpha, color_image, 1 - alpha, 0)
                        label = f"{object_label} | HEX: {hex_color} | Dist: {distance:.3f}m | 3D: ({x_3d:.3f}, {y_3d:.3f}, {z_3d:.3f})"
                        cv2.putText(color_image, label, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 0, 255), 2)

            if time.time() - self.last_print_time >= 3:
                for obj in detected_objects:
                    self.get_logger().info(obj)
                    self.string_publisher.publish(String(data=obj))

                # Publish only the 0th detected object's 3D position
                if len(positions) > 0:
                    position_msg = Float64MultiArray()
                    position_msg.data = [positions[0][0],positions[0][1], positions[0][2]]
                    if position_msg.data[2] >= 0.15 and position_msg.data[2] <= 0.28:
                        self.position_publisher.publish(position_msg)
                    else:
                        self.get_logger().info(f"""Position outside of boundaries.""")


                self.last_print_time = time.time()

            cv2.imshow("Object Detection with 3D Coordinates & HEX", color_image)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

    def cleanup(self):
        self.pipeline.stop()
        cv2.destroyAllWindows()


def main():
    rclpy.init()
    node = ObjectDetectionNode()
    try:
        node.detect_objects()
    finally:
        node.cleanup()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
