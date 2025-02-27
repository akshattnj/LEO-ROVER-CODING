import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField
import sensor_msgs.PointCloud2 as point_cloud2
from sensor_msgs.msg import Image, CameraInfo
import struct

class DepthToPointCloud(Node):
    def __init__(self):
        super().__init__('depth_to_pointcloud')

        # Subscribe to depth image and camera info
        self.depth_sub = self.create_subscription(Image, '/camera/camera/depth/image_rect_raw', self.depth_callback, 10)
        self.info_sub = self.create_subscription(CameraInfo, '/camera/camera/depth/camera_info', self.info_callback, 10)

        # Publisher for PointCloud2
        self.pc_pub = self.create_publisher(PointCloud2, '/camera/depth/points', 10)

        self.camera_intrinsics = None  # Will store intrinsic parameters

    def info_callback(self, msg):
        """Store camera intrinsic matrix."""
        self.camera_intrinsics = [msg.k[0], msg.k[2], msg.k[4], msg.k[5]]  # fx, cx, fy, cy

    def depth_callback(self, msg):
        """Convert depth image to PointCloud2."""
        if self.camera_intrinsics is None:
            self.get_logger().warn("Camera intrinsics not received yet.")
            return
        
        fx, cx, fy, cy = self.camera_intrinsics
        points = []

        # Convert raw data into an array of floats
        depth_data = list(msg.data)

        # Iterate through each pixel in the depth image
        for v in range(msg.height):
            for u in range(msg.width):
                index = (v * msg.width + u) * 2  # Depth image is uint16 (2 bytes per pixel)
                depth = struct.unpack('<H', bytes(depth_data[index:index+2]))[0] * 0.001  # Convert mm to meters

                if depth > 0:  # Ignore zero depth
                    x = (u - cx) * depth / fx
                    y = (v - cy) * depth / fy
                    z = depth
                    points.append((x, y, z))

        # Create PointCloud2 message
        pc_msg = point_cloud2.create_cloud_xyz32(msg.header, points)
        self.pc_pub.publish(pc_msg)

        self.get_logger().info("Published point cloud with {} points".format(len(points)))

def main(args=None):
    rclpy.init(args=args)
    node = DepthToPointCloud()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
