import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    launch_slam_toolbox = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            get_package_share_directory('slam_toolbox'),
            '/launch',
            '/online_async_launch.py'
        ]),
        launch_arguments={}.items(),
    )

    return LaunchDescription([
        launch_slam_toolbox
    ])

