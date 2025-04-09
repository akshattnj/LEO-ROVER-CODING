// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leo_msgs:msg/WheelOdomMecanum.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__STRUCT_H_
#define LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/WheelOdomMecanum in the package leo_msgs.
/**
  * This message represents the pose and velocity of a mecanum wheeled robot, estimated from the wheel encoders.
  *
  * The velocity_* fields represent the linear and angular velocity of the robot.
  * The pose_* fields represent the x, y and yaw pose of the robot w.r.t. the starting pose.
  *
  * The coordinate frame that represents the robot is located at the center of rotation.
 */
typedef struct leo_msgs__msg__WheelOdomMecanum
{
  builtin_interfaces__msg__Time stamp;
  float velocity_lin_x;
  float velocity_lin_y;
  float velocity_ang;
  float pose_x;
  float pose_y;
  float pose_yaw;
} leo_msgs__msg__WheelOdomMecanum;

// Struct for a sequence of leo_msgs__msg__WheelOdomMecanum.
typedef struct leo_msgs__msg__WheelOdomMecanum__Sequence
{
  leo_msgs__msg__WheelOdomMecanum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leo_msgs__msg__WheelOdomMecanum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__STRUCT_H_
