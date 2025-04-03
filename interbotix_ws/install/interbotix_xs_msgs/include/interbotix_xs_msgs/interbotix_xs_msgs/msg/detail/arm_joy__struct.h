// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EE_X_INC'.
/**
  * enum values that define the joystick controls for the robot
  *
  * Control the motion of the virtual 'ee_gripper_link' or end effector using the modern_robotics_ik engine
  * Position Control
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_X_INC = 1
};

/// Constant 'EE_X_DEC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_X_DEC = 2
};

/// Constant 'EE_Y_INC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_Y_INC = 3
};

/// Constant 'EE_Y_DEC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_Y_DEC = 4
};

/// Constant 'EE_Z_INC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_Z_INC = 5
};

/// Constant 'EE_Z_DEC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_Z_DEC = 6
};

/// Constant 'EE_ROLL_CCW'.
/**
  * Orientation Control
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_ROLL_CCW = 7
};

/// Constant 'EE_ROLL_CW'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_ROLL_CW = 8
};

/// Constant 'EE_PITCH_UP'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_PITCH_UP = 9
};

/// Constant 'EE_PITCH_DOWN'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__EE_PITCH_DOWN = 10
};

/// Constant 'WAIST_CCW'.
/**
  * Control the motion of independent joints on the Arm or send predefined robot poses
  * Waist Joint Control
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__WAIST_CCW = 11
};

/// Constant 'WAIST_CW'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__WAIST_CW = 12
};

/// Constant 'GRIPPER_RELEASE'.
/**
  * Gripper Control
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__GRIPPER_RELEASE = 13
};

/// Constant 'GRIPPER_GRASP'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__GRIPPER_GRASP = 14
};

/// Constant 'HOME_POSE'.
/**
  * Pose Control
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__HOME_POSE = 15
};

/// Constant 'SLEEP_POSE'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__SLEEP_POSE = 16
};

/// Constant 'SPEED_INC'.
/**
  * Customize configurations for the Interbotix Arm
  * Inc/Dec Joint speed
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__SPEED_INC = 17
};

/// Constant 'SPEED_DEC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__SPEED_DEC = 18
};

/// Constant 'SPEED_COARSE'.
/**
  * Quickly toggle between a fast and slow speed setting
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__SPEED_COARSE = 19
};

/// Constant 'SPEED_FINE'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__SPEED_FINE = 20
};

/// Constant 'GRIPPER_PWM_INC'.
/**
  * Inc/Dec Gripper pressure
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__GRIPPER_PWM_INC = 21
};

/// Constant 'GRIPPER_PWM_DEC'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__GRIPPER_PWM_DEC = 22
};

/// Constant 'TORQUE_ON'.
/**
  * Torque On/Off all servos
 */
enum
{
  interbotix_xs_msgs__msg__ArmJoy__TORQUE_ON = 23
};

/// Constant 'TORQUE_OFF'.
enum
{
  interbotix_xs_msgs__msg__ArmJoy__TORQUE_OFF = 24
};

/// Struct defined in msg/ArmJoy in the package interbotix_xs_msgs.
/**
  * This message is used specifically in the interbotix_xsarm_joy package
  *
  * Maps raw 'joy' commands to more specific ones to control an Interbotix manipulator
 */
typedef struct interbotix_xs_msgs__msg__ArmJoy
{
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
  /// Misc. Configs
  int8_t speed_cmd;
  int8_t speed_toggle_cmd;
  int8_t gripper_pwm_cmd;
  int8_t torque_cmd;
} interbotix_xs_msgs__msg__ArmJoy;

// Struct for a sequence of interbotix_xs_msgs__msg__ArmJoy.
typedef struct interbotix_xs_msgs__msg__ArmJoy__Sequence
{
  interbotix_xs_msgs__msg__ArmJoy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__ArmJoy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__STRUCT_H_
