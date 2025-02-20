from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import SetParameter, Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution


def generate_launch_description():
    ld = LaunchDescription()

    # Parameters, Nodes and Launch files go here

    # Declare package directory
    pkg_nav_demos = get_package_share_directory('leo_rover_controller')

    # Include the Lidar launch file
    launch_lidar = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([get_package_share_directory('rplidar_ros'), '/launch', '/rplidar_a2m12_launch.py'])
    )


    # launch_odom = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         [get_package_share_directory('leo_rover_controller'), '/launch', '/odometry.launch.py'])
    # )

    # Necessary fixes
    remappings = [('/tf', 'tf'), ('/tf_static', 'tf_static')]

    lifecycle_nodes = [
        'controller_server',
        'planner_server',
        'behaviour_server',
        'bt_navigator',
    ]

    # LOAD PARAMETERS FROM YAML FILES
    config_bt_nav = PathJoinSubstitution([pkg_nav_demos, 'config', 'bt_nav.yaml'])
    config_planner = PathJoinSubstitution([pkg_nav_demos, 'config', 'planner.yaml'])
    config_controller = PathJoinSubstitution([pkg_nav_demos, 'config', 'controller.yaml'])

    # Launch Rviz
    launch_rviz = IncludeLaunchDescription(
    PythonLaunchDescriptionSource([get_package_share_directory('leo_rover_controller'), '/launch', '/raspberry_sim.launch.py']),
    launch_arguments={}.items(),
    )

    # Include SLAM Toolbox standard launch file
    launch_slamtoolbox = IncludeLaunchDescription(
    PythonLaunchDescriptionSource([get_package_share_directory('slam_toolbox'), '/launch', '/online_async_launch.py']),
    launch_arguments={}.items(),
    )

    # Behaviour Tree Navigator
    node_bt_nav = Node(
        package='nav2_bt_navigator',
        executable='bt_navigator',
        name='bt_navigator',
        output='screen',
        parameters=[config_bt_nav],
        remappings=remappings,
    )

    # Behaviour Tree Server
    node_behaviour = Node(
        package='nav2_behaviors',
        executable='behavior_server',
        name='behaviour_server',
        output='screen',
        parameters=[config_bt_nav],
        remappings=remappings,
    )

    # Planner Server Node
    node_planner = Node(
        package='nav2_planner',
        executable='planner_server',
        name='planner_server',
        output='screen',
        parameters=[config_planner],
        remappings=remappings,
    )

    # Controller Server Node
    node_controller = Node(
        package='nav2_controller',
        executable='controller_server',
        name='controller_server',
        output='screen',
        parameters=[config_controller],
        remappings=remappings,
    )

    # Lifecycle Node Manager to automatically start lifecycles nodes (from list)
    node_lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_navigation',
        output='screen',
        parameters=[{'autostart': True}, {'node_names': lifecycle_nodes}],
    )

    # 发布 `odom -> base_footprint`
    static_tf_odom_to_base = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='odom_to_base_broadcaster',
        arguments=['0', '0', '0', '0', '0', '0', '1', 'odom', 'base_footprint'],
        output='screen',
    )

    static_tf_base_to_base = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_to_laser_broadcaster',
        arguments=['0.0', '0.0', '0.0', '0', '0', '0', '1', 'base_footprint', 'base_link'],
        output='screen',
    )
    
    # 发布 `base_footprint -> laser`
    static_tf_base_to_laser = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_to_laser_broadcaster',
        arguments=['0.0', '0.0', '0.0', '0', '0', '0', '1', 'base_link', 'laser'],
        output='screen',
    )
    

    # Add actions to LaunchDescription
    ld.add_action(SetParameter(name='use_sim_time', value=False))
    ld.add_action(launch_rviz)
    ld.add_action(launch_lidar)
    # ld.add_action(launch_odom)
    ld.add_action(launch_slamtoolbox)
    ld.add_action(node_bt_nav)
    ld.add_action(node_behaviour)
    ld.add_action(node_planner)
    ld.add_action(node_controller)
    ld.add_action(node_lifecycle_manager)
    # 将 `tf` 变换加入 LaunchDescription
    ld.add_action(static_tf_odom_to_base)
    ld.add_action(static_tf_base_to_base)

    ld.add_action(static_tf_base_to_laser)

    return ld
