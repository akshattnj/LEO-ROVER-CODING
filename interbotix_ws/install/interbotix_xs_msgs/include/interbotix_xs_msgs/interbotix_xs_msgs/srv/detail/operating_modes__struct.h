// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__STRUCT_H_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__STRUCT_H_

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
// Member 'mode'
// Member 'profile_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OperatingModes in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Request
{
  /// set to 'group' if commanding a joint group or 'single' if commanding a single joint
  rosidl_runtime_c__String cmd_type;
  /// name of the group if commanding a joint group or joint if commanding a single joint
  rosidl_runtime_c__String name;
  /// desired operating mode as described above
  rosidl_runtime_c__String mode;
  /// desired 'profile' type - either 'time' or 'velocity' as described above
  rosidl_runtime_c__String profile_type;
  /// desired velocity profile as explained above - only used in 'position' or the 'ext_position' control modes
  int32_t profile_velocity;
  /// desired acceleration profile as explained above - used in all modes except for 'current' and 'pwm' control
  int32_t profile_acceleration;
} interbotix_xs_msgs__srv__OperatingModes_Request;

// Struct for a sequence of interbotix_xs_msgs__srv__OperatingModes_Request.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Request__Sequence
{
  interbotix_xs_msgs__srv__OperatingModes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__OperatingModes_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/OperatingModes in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Response
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_xs_msgs__srv__OperatingModes_Response;

// Struct for a sequence of interbotix_xs_msgs__srv__OperatingModes_Response.
typedef struct interbotix_xs_msgs__srv__OperatingModes_Response__Sequence
{
  interbotix_xs_msgs__srv__OperatingModes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__OperatingModes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__STRUCT_H_
