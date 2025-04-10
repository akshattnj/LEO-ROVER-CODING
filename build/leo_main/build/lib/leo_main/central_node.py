import rclpy

from rclpy.node import Node

import math as mt

from leo_with_interfaces.msg import Position

from std_msgs.msg import Float64MultiArray

from std_msgs.msg import Bool

"""
        Before running this node, run: 

        ros2 launch interbotix_xsarm_control xsarm_control.launch.py robot_model:=px100

"""


class CentralNode(Node):
    """A ROS2 Node that receives Position and prints out its info."""

    def __init__(self):
        super().__init__('central_node')

        self.state = "IDLE"

        self.manipulator_position_publisher = self.create_publisher(

            msg_type=Float64MultiArray,

            topic='/manipulator_position',

            qos_profile=1)

        self.manipulator_response_subscriber = self.create_subscription(

            msg_type=Float64MultiArray,

            topic='/manipulator_response',

            callback=self.manipulator_response_callback,

            qos_profile=1)

        self.camera_position_subscriber = self.create_subscription(

            msg_type=Float64MultiArray,

            topic='/camera_position',

            callback=self.process_camera_callback,

            qos_profile=1)
        
        self.exploration_control_publisher = self.create_publisher(

            msg_type=Bool,

            topic='/explore/resume',

            qos_profile=1)

        self.toggle_resume_publisher = self.create_publisher(

            msg_type=Bool,

            topic='/explore/resume',

            qos_profile=1)
        
        
        
        """
        self.camera_position_publisher = self.create_publisher(

            msg_type=Position,

            topic='/camera_position',

            qos_profile=1)

        cam_pos_msg = Position()
        cam_pos_msg.x_pos = None # Replace with camera distance
        cam_pos_msg.y_pos = None # Replace with camera horizontal position
        cam_pos_msg.z_pos = None # Replace with camera vertical position
        self.camera_position_publisher.publish(cam_pos_msg)
        """

    def manipulator_response_callback(self, msg: Float64MultiArray):
        """Method that is called when a new msg is received by the node."""

        self.get_logger().info(f"""

        Arm has finished its movement.

        """)
        self.state = "IDLE"

    def process_camera_callback(self, msg: Float64MultiArray):
        """Method that is called when a new msg is received by the node."""

        """
        Run:
        
        ros2 topic pub /camera_position leo_with_interfaces/msg/Position {"x_pos: 20, y_pos: 20, z_pos: 20"}

        to send position.        
        """

        self.get_logger().info(f"""

        Camera data received, position from camera:

            '{(msg.data[0], msg.data[1], msg.data[2])}' (metres)

        This transforms to:

            '{(msg.data[2], msg.data[0], msg.data[1])} (metres)

        in the arm frame.

        """)

        transformed_msg = Float64MultiArray()

        x_pos = (msg.data[2] + 0.085)
        y_pos = (-msg.data[0] + 0.03)
        z_pos = (msg.data[1] - 0.01)
        

        transformed_msg.data = [x_pos, y_pos, z_pos]
        if self.state == "IDLE":
            self.get_logger().info(f"""Data sending to manipulator: {(transformed_msg.data)}""")
            self.manipulator_position_publisher.publish(transformed_msg)
            self.state == "ACTIVE"
        else:
            pass


def main(args=None):
    """

    The main function.

    :param args: Not used directly by the user, but used by ROS2 to configure

    certain aspects of the Node.

    """

    try:

        rclpy.init(args=args)

        central_node = CentralNode()

        rclpy.spin(central_node)

    except KeyboardInterrupt:

        pass

    except Exception as e:

        print(e)


if __name__ == '__main__':
    main()
