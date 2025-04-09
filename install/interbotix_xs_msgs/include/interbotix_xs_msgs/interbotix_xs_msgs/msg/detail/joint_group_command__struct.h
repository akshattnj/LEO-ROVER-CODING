// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:msg/JointGroupCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_GROUP_COMMAND__STRUCT_H_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_GROUP_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'cmd'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointGroupCommand in the package interbotix_xs_msgs.
/**
  * Command the joints in the specified joint group. Note that the commands are processed differently based on the group's operating mode.
  * For example, if a group's operating mode is set to 'position', the commands are interpreted as positions in radians
 */
typedef struct interbotix_xs_msgs__msg__JointGroupCommand
{
  /// Name of joint group
  rosidl_runtime_c__String name;
  /// List of joint commands; order is dictated by the index of each joint name for the given group in the 'groups' section of a 'motor_config' yaml file
  rosidl_runtime_c__float__Sequence cmd;
} interbotix_xs_msgs__msg__JointGroupCommand;

// Struct for a sequence of interbotix_xs_msgs__msg__JointGroupCommand.
typedef struct interbotix_xs_msgs__msg__JointGroupCommand__Sequence
{
  interbotix_xs_msgs__msg__JointGroupCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__msg__JointGroupCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_GROUP_COMMAND__STRUCT_H_
