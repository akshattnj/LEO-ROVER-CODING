from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import SetParameter, Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
import os


def generate_launch_description():
    ld = LaunchDescription()

    # Parameters, Nodes and Launch files go here

    # Declare package directory
    pkg_name = get_package_share_directory('leo_rover_controller')
    config_imu_path = PathJoinSubstitution([pkg_name, 'config', 'imu_filter.yaml'])
    config_ekf_path = PathJoinSubstitution([pkg_name, 'config', 'ekf.yaml'])

    # IMU Filter
    # node_imu_filter = Node(
    #     package='imu_filter_madgwick',
    #     executable='imu_filter_madgwick_node',
    #     name='imu_filter_node',
    #     output='screen',
    #     parameters=[config_imu_path],
    # )

    node_imu_filter1 = Node(
        package='imu_filter_madgwick',
        executable='imu_filter_madgwick_node',
        name='imu_filter_node',
        output='screen',
        parameters=[
            {'stateless': False},
            {'use_mag': False},
            {'publish_tf': True},
            {'reverse_tf': False},
            {'fixed_frame': "odom"},
            {'constant_dt': 0.0},
            {'publish_debug_topics': False},
            {'world_frame': "enu"},
            {'gain': 0.1},
            {'zeta': 0.0},
            {'mag_bias_x': 0.0},
            {'mag_bias_y': 0.0},
            {'mag_bias_z': 0.0},
            {'orientation_stddev': 0.0},
        ],
    )

    node_ekf_localization = Node(
        package='robot_localization',
        executable='ekf_node',
        name='kalman_filter_node',
        output='screen',
        parameters=[
            {'frequency': 30.0},
            {'sensor_timeout': 0.2},
            {'two_d_mode': False},
            {'transform_time_offset': 0.0},
            {'transform_timeout': 0.0},
            {'print_diagnostics': True},
            {'debug': False},
            {'permit_corrected_publication': False},
            {'publish_acceleration': False},
            {'publish_tf': True},
            {'map_frame': "map"},
            {'odom_frame': "odom"},
            {'base_link_frame': "base_footprint"},
            {'world_frame': "odom"},
            {'odom0': "wheel_odom_with_covariance"},
            {'odom0_config': [False, False, False,
                                False, False, False,
                                True,  False, False,
                                False, False, True,
                                False, False, False]},
            {'odom0_queue_size': 10},
            {'odom0_nodelay': False},
            {'odom0_differential': False},
            {'odom0_relative': False},
            {'odom0_pose_rejection_threshold': 5.0},
            {'odom0_twist_rejection_threshold': 1.0},
            {'imu0': "imu/data"},
            {'imu0_config': [False, False, False,
                              True,  True,  False,
                              False, False, False,
                              True,  True,  True,
                              True,  False, False]},
            {'imu0_nodelay': False},
            {'imu0_differential': False},
            {'imu0_relative': True},
            {'imu0_queue_size': 5},
            {'imu0_pose_rejection_threshold': 0.8},
            {'imu0_twist_rejection_threshold': 0.8},
            {'imu0_linear_acceleration_rejection_threshold': 0.8},
            {'imu0_remove_gravitational_acceleration': True},
            {'use_control': True},
            {'stamped_control': False},
            {'control_timeout': 0.2},
            {'control_config': [True, False, False, False, False, True]},
            {'acceleration_limits': [1.3, 0.0, 0.0, 0.0, 0.0, 3.4]},
            {'deceleration_limits': [1.3, 0.0, 0.0, 0.0, 0.0, 4.5]},
            {'acceleration_gains': [0.8, 0.0, 0.0, 0.0, 0.0, 0.9]},
            {'deceleration_gains': [1.0, 0.0, 0.0, 0.0, 0.0, 1.0]},
            {'process_noise_covariance': [ 0.05, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.05, 0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.06, 0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.03, 0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.03, 0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.06, 0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.5, 0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.025, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.04, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.01, 0.0,    0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.01, 0.0,    0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.4, 0.0,    0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.01, 0.0,    0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.01, 0.0,
                                     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.015]},
            {'initial_estimate_covariance': [1e-9, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    1e-9, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    1e-9, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    1e-9, 0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    1e-9, 0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    1e-9, 0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    1e-9, 0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    1e-9, 0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    1e-9, 0.0,     0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    1e-9,  0.0,     0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     1e-9,  0.0,     0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     1e-9,  0.0,    0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     1e-9, 0.0,    0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    1e-9, 0.0,
                                      0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,     0.0,     0.0,     0.0,    0.0,    1e-9]},
                    ],
    )

    # Add actions to LaunchDescription
    ld.add_action(SetParameter(name='use_sim_time', value=False))
    ld.add_action(node_imu_filter1)
    ld.add_action(node_ekf_localization)

    return ld
