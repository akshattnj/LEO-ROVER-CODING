#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped

class StaticTFBroadcaster(Node):
    def __init__(self):
        super().__init__('static_tf_broadcaster')
        self.tf_broadcaster = StaticTransformBroadcaster(self)

        # 发布静态坐标变换：base_link -> laser_frame
        self.publish_static_tf(
            parent_frame='base_link',
            child_frame='laser_frame',
            x=0.2, y=0.0, z=0.15,
            roll=0.0, pitch=0.0, yaw=0.0
        )

    def publish_static_tf(self, parent_frame, child_frame, x, y, z, roll, pitch, yaw):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = parent_frame
        t.child_frame_id = child_frame
        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = z
        t.transform.rotation.w = 1.0  # 没有旋转

        self.tf_broadcaster.sendTransform(t)
        self.get_logger().info(f"Published static TF: {parent_frame} -> {child_frame}")

def main():
    rclpy.init()
    node = StaticTFBroadcaster()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

