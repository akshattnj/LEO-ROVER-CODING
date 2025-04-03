// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESET_ODOM'.
/**
  * enum values that define the joystick controls for the robot
  *
  * Reset base odometry
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__RESET_ODOM = 1
};

/// Constant 'PAN_CCW'.
/**
  * Control the pan-and-tilt mechanism
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__PAN_CCW = 2
};

/// Constant 'PAN_CW'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__PAN_CW = 3
};

/// Constant 'TILT_UP'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__TILT_UP = 4
};

/// Constant 'TILT_DOWN'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__TILT_DOWN = 5
};

/// Constant 'PAN_TILT_HOME'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__PAN_TILT_HOME = 6
};

/// Constant 'EE_X_INC'.
/**
  * Control the motion of the virtual 'ee_gripper_link' or end effector using the modern_robotics_ik engine
  * Position Control
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_X_INC = 7
};

/// Constant 'EE_X_DEC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_X_DEC = 8
};

/// Constant 'EE_Y_INC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_Y_INC = 9
};

/// Constant 'EE_Y_DEC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_Y_DEC = 10
};

/// Constant 'EE_Z_INC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_Z_INC = 11
};

/// Constant 'EE_Z_DEC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_Z_DEC = 12
};

/// Constant 'EE_ROLL_CCW'.
/**
  * Orientation Control
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_ROLL_CCW = 13
};

/// Constant 'EE_ROLL_CW'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_ROLL_CW = 14
};

/// Constant 'EE_PITCH_UP'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_PITCH_UP = 15
};

/// Constant 'EE_PITCH_DOWN'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__EE_PITCH_DOWN = 16
};

/// Constant 'WAIST_CCW'.
/**
  * Control the motion of independent joints on the Arm or send predefined robot poses
  * Waist Joint Control
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__WAIST_CCW = 17
};

/// Constant 'WAIST_CW'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__WAIST_CW = 18
};

/// Constant 'GRIPPER_RELEASE'.
/**
  * Gripper Control
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__GRIPPER_RELEASE = 19
};

/// Constant 'GRIPPER_GRASP'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__GRIPPER_GRASP = 20
};

/// Constant 'HOME_POSE'.
/**
  * Pose Control
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__HOME_POSE = 21
};

/// Constant 'SLEEP_POSE'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__SLEEP_POSE = 22
};

/// Constant 'SPEED_INC'.
/**
  * Customize configurations for the Interbotix Arm
  * Inc/Dec Joint speed
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__SPEED_INC = 23
};

/// Constant 'SPEED_DEC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__SPEED_DEC = 24
};

/// Constant 'SPEED_COARSE'.
/**
  * Quickly toggle between a fast and slow speed setting
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__SPEED_COARSE = 25
};

/// Constant 'SPEED_FINE'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__SPEED_FINE = 26
};

/// Constant 'GRIPPER_PWM_INC'.
/**
  * Inc/Dec Gripper pressure
 */
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__GRIPPER_PWM_INC = 27
};

/// Constant 'GRIPPER_PWM_DEC'.
enum
{
  interbotix_xs_msgs__msg__LocobotJoy__GRIPPER_PWM_DEC = 28
};

/// Struct defined in msg/LocobotJoy in the package interbotix_xs_msgs.
/**
  * This message is used specifically in the interbotix_xslocobot_joy package
  *
  * Maps raw 'joy' commands to more specific ones to control an Interbotix LoCoBot
 */
typedef struct interbotix_xs_msgs__msg__LocobotJoy
{
  /// Control the motion of the Kobuki base
  double base_x_cmd;
  double base_theta_cmd;
  int8_t base_reset_odom_cmd;
  /// Control the motion of the camera pan-and-tilt mechanism
  int8_t pan_cmd;
  int8_t tilt_cmd;
  /// Control the motion of the Interbotix Arm
  int8_t ee_x_cmd;
  int8_t ee_y_cmd;
  int8_t ee_z_cmd;
  int8_t ee_roll_cmd;
  int8_t ee_pitch_cmd;
  /// Independent Joint/Pose Control
  int8_t waist_cmd;
  int8_t gripper_cmd;
  int8_t pose_cmd;
  /// Arm Configs
  int8_t speed_cmd;
  int8_t speed_toggle_cmd;
  int8_t gripper_pwm_cmd;
} interbotix_xs_msgs__msg__LocobotJoy;

// Struct for a sequence of interbotix_xs_msgs__msg__LocobotJoy.
typedef struct interbotix_xs_msgs__msg__LocobotJoy__Sequence
{
  interbotix_xs_msgs__msg__LocobotJoy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__LocobotJoy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__STRUCT_H_
