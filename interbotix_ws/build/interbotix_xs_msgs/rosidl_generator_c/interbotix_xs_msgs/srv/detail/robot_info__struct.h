// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__STRUCT_H_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd_type'
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotInfo in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Request
{
  /// set to 'group' if requesting info about a joint group or 'single' if requesting info about a single joint
  rosidl_runtime_c__String cmd_type;
  /// the group name if requesting info about a group or the joint name if requesting info about a single joint
  rosidl_runtime_c__String name;
} interbotix_xs_msgs__srv__RobotInfo_Request;

// Struct for a sequence of interbotix_xs_msgs__srv__RobotInfo_Request.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Request__Sequence
{
  interbotix_xs_msgs__srv__RobotInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__RobotInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mode'
// Member 'profile_type'
// Member 'joint_names'
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'joint_ids'
// Member 'joint_lower_limits'
// Member 'joint_upper_limits'
// Member 'joint_velocity_limits'
// Member 'joint_sleep_positions'
// Member 'joint_state_indices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/RobotInfo in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Response
{
  /// the operating mode for the specified joint group or joint
  rosidl_runtime_c__String mode;
  /// the profile type for the specified joint group or joint
  rosidl_runtime_c__String profile_type;
  /// the name of each joint in a group or just the specified joint
  rosidl_runtime_c__String__Sequence joint_names;
  /// the Dynamixel ID for each joint in a group or for the specified joint
  rosidl_runtime_c__int16__Sequence joint_ids;
  /// the lower limit for each joint in a group or for the specified joint (taken from URDF)
  rosidl_runtime_c__float__Sequence joint_lower_limits;
  /// the upper limit for each joint in a group or for the specified joint (taken from URDF)
  rosidl_runtime_c__float__Sequence joint_upper_limits;
  /// the velocity limit for each joint in a group or for the specified joint (taken from URDF)
  rosidl_runtime_c__float__Sequence joint_velocity_limits;
  /// the sleep position for each joint in a group or for the specified joint
  rosidl_runtime_c__float__Sequence joint_sleep_positions;
  /// index for each joint in a group or for the specified joint in the published JointState message
  rosidl_runtime_c__int16__Sequence joint_state_indices;
  /// the number of joints in a group or 1
  int16_t num_joints;
  /// the name of the group or joint requested; if group was 'all', returns the names of all groups
  rosidl_runtime_c__String__Sequence name;
} interbotix_xs_msgs__srv__RobotInfo_Response;

// Struct for a sequence of interbotix_xs_msgs__srv__RobotInfo_Response.
typedef struct interbotix_xs_msgs__srv__RobotInfo_Response__Sequence
{
  interbotix_xs_msgs__srv__RobotInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__RobotInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__STRUCT_H_
