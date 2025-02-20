import rclpy

from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
 
class StaticTFBroadcaster(Node):

    def __init__(self):
        super().__init__('static_tf_broadcaster')
 
        # 发布 TF 变换
        self.tf_broadcaster = TransformBroadcaster(self)
 
        self.timer = self.create_timer(1.0, self.publish_tf)  # 每 1 秒发布一次
 
    def publish_tf(self):
        
        # 1️⃣ 发送 `base_footprint → base_link` 变换
        t1 = TransformStamped()
        t1.header.stamp = self.get_clock().now().to_msg()
        t1.header.frame_id = 'base_footprint'
        t1.child_frame_id = 'base_link'
        t1.transform.translation.x = 0.0
        t1.transform.translation.y = 0.0
        t1.transform.translation.z = 0.0
        t1.transform.rotation.w = 1.0  # 无旋转
        self.tf_broadcaster.sendTransform(t1)
 
        # 2️⃣ 发送 `base_link → laser` 变换
        t2 = TransformStamped()
        t2.header.stamp = self.get_clock().now().to_msg()
        t2.header.frame_id = 'base_link'
        t2.child_frame_id = 'laser'
        t2.transform.translation.x = 0.0  # 你的雷达相对 base_link 的位置
        t2.transform.translation.y = 0.0
        t2.transform.translation.z = 0.1  # 假设雷达高 10cm
        t2.transform.rotation.w = 1.0
        self.tf_broadcaster.sendTransform(t2)
 
def main():
    rclpy.init()
    node = StaticTFBroadcaster()
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == '__main__':
    main()

