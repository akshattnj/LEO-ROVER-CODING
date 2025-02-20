from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 静态 TF 发布器
        Node(
            package='rplidar_mapping',
            executable='static_tf_broadcaster',
            name='static_tf_broadcaster',
            output='screen'
        ),

    ])

