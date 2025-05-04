import rclpy

from rclpy.node import Node

from leo_with_interfaces.msg import Position

from interbotix_common_modules.common_robot.robot import robot_startup, robot_shutdown

from interbotix_xs_modules.xs_robot.arm import InterbotixManipulatorXS

from std_msgs.msg import Float64MultiArray

"""
        Before running this node, run: 

        ros2 launch interbotix_xsarm_control xsarm_control.launch.py robot_model:=px100

"""


class ManipulatorNode(Node):
    """A ROS2 Node that receives Position and prints out its info."""

    def __init__(self):
        super().__init__('manipulator_node')

        self.bot = InterbotixManipulatorXS(
            robot_model='px100',
            group_name='arm',
            gripper_name='gripper',
        )

        robot_startup()

        self.manipulator_position_subscriber = self.create_subscription(

            msg_type=Float64MultiArray,

            topic='/manipulator_position',

            callback=self.reposition_callback,

            qos_profile=1)

        self.manipulator_response_publisher = self.create_publisher(

            msg_type=Float64MultiArray,

            topic='/manipulator_response',

            qos_profile=1)
        
        self.block_count = 0

    def reposition_callback(self, msg: Float64MultiArray):
        """Method that is called when a new msg is received by the node."""

        self.get_logger().info(f"""

        I have received the most amazing of data.

        It says



               '{(msg.data[0], msg.data[1], msg.data[2])}' (metres)

        """)

        response_msg = Float64MultiArray()
        response_msg = msg
        

        self.bot.arm.go_to_home_pose()
        self.bot.gripper.release(2.0)
        #self.bot.arm.set_ee_pose_components(msg.data[0], msg.data[1], msg.data[2])
        self.bot.arm.set_ee_pose_components #(msg.data[0], msg.data[1], msg.data[2], 0, 3.1415962/8)
        self.bot.gripper.grasp(2.0)
        self.bot.arm.go_to_home_pose()
        if (msg.data[0] == -0.25) and ((msg.data[1] == -0.05) or (msg.data[1] == 0.0) or (msg.data[1] == 0.05)) and (msg.data[2] == 0.10):
            self.bot.arm.set_ee_pose_components(0.25, 0.0, 0.10, 0, 3.1415962/8)
        else:
            if self.block_count == 0:
                self.bot.arm.set_ee_pose_components(-0.22, -0.05, 0.13, 0, 3.1415962/8)
                self.block_count += 1
            elif self.block_count == 1:
                self.bot.arm.set_ee_pose_components(-0.22, -0.01, 0.13, 0, 3.1415962/8)
                self.block_count += 1
            elif self.block_count == 2:
                self.bot.arm.set_ee_pose_components(-0.22, 0.05, 0.13, 0, 3.1415962/8)
                self.block_count += 1
            else:
                self.block_count = 0

        self.bot.gripper.release(2.0)
        self.bot.arm.go_to_sleep_pose()
        self.manipulator_response_publisher.publish(response_msg)



def main(args=None):
    """

    The main function.

    :param args: Not used directly by the user, but used by ROS2 to configure

    certain aspects of the Node.

    """

    try:

        rclpy.init(args=args)

        manipulator_node = ManipulatorNode()

        rclpy.spin(manipulator_node)

    except KeyboardInterrupt:

        pass

    except Exception as e:

        print(e)


if __name__ == '__main__':
    main()
