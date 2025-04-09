import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable
from launch_ros.actions import Node, SetParameter
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
import xacro


def generate_launch_description():
    ld = LaunchDescription()

    # Specify the name of the package and path to xacro file within the package
    pkg_name = 'nav_final'
    pkg_nav_demos = get_package_share_directory('nav_final')
    file_subpath = 'urdf/laser.urdf.xacro'

    # Use xacro to process the file
    xacro_file = os.path.join(pkg_nav_demos, file_subpath)
    robot_description_raw = xacro.process_file(xacro_file).toxml()

    # imu and localization
    config_ekf = PathJoinSubstitution([pkg_nav_demos, 'config', 'ekf.yaml'])
    config_imu = PathJoinSubstitution([pkg_nav_demos, 'config', 'imu_filter.yaml'])
    
    # robot state publisher node
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_raw}] # add other parameters here if required
    )


   
    # Rviz node
    node_rviz = Node(
        package='rviz2',
        namespace='',
        executable='rviz2',
        name='rviz2',
        arguments=['-d' + os.path.join(get_package_share_directory(pkg_name), 'rviz', 'robot.rviz')]
    )

    # define imu_filter_madgwick node
    imu_filter_node = Node(
        package='imu_filter_madgwick',
        executable='imu_filter_madgwick_node',
        name='imu_filter_node',
        output='screen',
        parameters=[
            {'gain': 0.1},
            {'zeta': 0.0},
            {'mag_bias_x': 0.0},
            {'mag_bias_y': 0.0},
            {'mag_bias_z': 0.0},
            {'orientation_stddev': 0.0},
            {'world_frame': "nwu"},
            {'use_mag': False},
            {'use_magnetic_field_msg': False},
            {'publish_tf': False},
            {'constant_dt': 0.0},
            {'publish_debug_topics': False},
            {'stateless': False},
            {'remove_gravity_vector': False},
        ],
    )

    ekf_node = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[
            #{'use_sim_time': False},
            #{'clear_params': True},
            {'frequency': 30.0},
            {'sensor_timeout': 0.2},
            {'two_d_mode': True},
            {'transform_time_offset': 0.0},
            {'transform_timeout': 0.0},
            {'print_diagnostics': True},
            {'debug': False},
            {'publish_tf': True},
            {'publish_acceleration': False},

            {'map_frame': "map"},
            {'odom_frame': "odom"},
            {'base_link_frame': "base_footprint"},
            {'world_frame': "odom"},

            {'odom0': "wheel_odom_with_covariance"},
            {'odom0_config': [
                False, False, False,
                False, False, False,
                True,  False, False,
                False, False, True,
                False, False, False
            ]},
            {'odom0_queue_size': 10},
            {'odom0_rejection_threshold': 15},
            {'odom0_nodelay': False},

            {'imu0': "imu/data_raw"},
            {'imu0_config': [
                False, False, False,
                False, False, False,
                False, False, False,
                False, False, True,
                True,  False, False
            ]},
            {'imu0_nodelay': False},
            {'imu0_differential': False},
            {'imu0_relative': True},
            {'imu0_queue_size': 5},
            {'imu0_remove_gravitational_acceleration': True},

            {'process_noise_covariance': [
                0.05,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.05,   0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.06,   0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.03,   0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.03,   0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.06,   0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.5,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.025,   0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.04,   0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.01,   0.0,    0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.01,   0.0,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.4,    0.0,    0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.01,   0.0,    0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.01,   0.0,
                0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.015
            ]},
        ],
    )


    # Add actions to LaunchDescription
    ld.add_action(SetParameter(name='use_sim_time', value=False))

    ld.add_action(node_robot_state_publisher)
    ld.add_action(node_rviz)
    #ld.add_action(imu_filter_node)

    

    ld.add_action(ekf_node)


    return ld