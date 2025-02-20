import rclpy
from rclpy.node import Node
from tf2_ros import Buffer, TransformListener
import numpy as np
from scipy.spatial.transform import Rotation

class TFListener(Node):
    def __init__(self):
        super().__init__('tf_echo_listener')
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.timer = self.create_timer(0.1, self.get_tf)
        self.source_frame = 'map'
        self.target_frame = 'base_link'

    def get_tf(self):
        try:
            transform = self.tf_buffer.lookup_transform(
                self.source_frame, self.target_frame, rclpy.time.Time()
            )
            
            # 提取平移
            translation = transform.transform.translation
            trans = np.array([translation.x, translation.y, translation.z])
            
            # 提取四元数
            rotation = transform.transform.rotation
            quat = np.array([rotation.x, rotation.y, rotation.z, rotation.w])
            
            # 转换为 RPY
            r = Rotation.from_quat(quat)
            rpy_rad = r.as_euler('xyz', degrees=False)  # 弧度
            rpy_deg = r.as_euler('xyz', degrees=True)  # 角度
            
            # 计算 4x4 变换矩阵
            mat = np.eye(4)
            mat[:3, :3] = r.as_matrix()
            mat[:3, 3] = trans
            
            # 打印结果
            self.get_logger().info(f"At time {transform.header.stamp.sec}.{transform.header.stamp.nanosec}")
            self.get_logger().info(f"- Translation: {trans}")
            self.get_logger().info(f"- Rotation: in Quaternion {quat}")
            self.get_logger().info(f"- Rotation: in RPY (radian) {rpy_rad}")
            self.get_logger().info(f"- Rotation: in RPY (degree) {rpy_deg}")
            self.get_logger().info(f"- Matrix:\n{mat}")
        except Exception as e:
            self.get_logger().warn(f'Transform unavailable: {e}')


def main(args=None):
    rclpy.init(args=args)
    node = TFListener()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
