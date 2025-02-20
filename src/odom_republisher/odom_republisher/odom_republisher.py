import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry

class OdomRepublisher(Node):
    def __init__(self):
        super().__init__('odom_republisher')

        # 订阅 `/odom_wheel`
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom_wheel',
            self.odom_callback,
            10  # 队列大小
        )

        # 发布 `/odom`
        self.odom_pub = self.create_publisher(
            Odometry,
            '/odom',
            10
        )

        self.get_logger().info("Odom Republisher Node Started: /odom_wheel -> /odom")

    def odom_callback(self, msg):
        # 直接转发数据
        self.odom_pub.publish(msg)
        self.get_logger().info("Republished /odom_wheel -> /odom")

def main(args=None):
    rclpy.init(args=args)
    node = OdomRepublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

