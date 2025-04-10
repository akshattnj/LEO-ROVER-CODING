import os
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable, DeclareLaunchArgument
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
#from rclpy import 



def generate_launch_description():

    return LaunchDescription([
    
    	# IncludeLaunchDescription([
    	# 	PythonLaunchDescriptionSource(os.path.join(get_package_share_directory('interbotix_xsarm_control') + 'launch/xsarm_control.launch.py')),
    	# 	launch_arguments=[('robot_model', 'px100')]
        # ]),
    	
        # DeclareLaunchArgument(
        # 'robot_model',
        # default_value='px100'
        # ),
        
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(get_package_share_directory('interbotix_xsarm_control'),
    		'launch',
    		'xsarm_control.launch.py')),
            launch_arguments=[('robot_model', 'px100')]
        ),

        Node(
            package='leo_manipulator',
            executable='manipulator_node',
            name='manipulator_node',
        ),

        Node(
            package='ros_cv_messages',
            executable='ros_cv_messages',
            name='object_detection_node',
        ),

        Node(
            package='leo_main',
            executable='central_node',
            name='central_node',
            emulate_tty=True
        )
        # Node(
        #     package=
        #     executable=
        #     name=
        # )

    ])
