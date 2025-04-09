// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leo_msgs:msg/WheelOdomMecanum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leo_msgs/msg/detail/wheel_odom_mecanum__rosidl_typesupport_introspection_c.h"
#include "leo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leo_msgs/msg/detail/wheel_odom_mecanum__functions.h"
#include "leo_msgs/msg/detail/wheel_odom_mecanum__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leo_msgs__msg__WheelOdomMecanum__init(message_memory);
}

void leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_fini_function(void * message_memory)
{
  leo_msgs__msg__WheelOdomMecanum__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_lin_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, velocity_lin_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_lin_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, velocity_lin_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_ang",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, velocity_ang),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, pose_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, pose_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelOdomMecanum, pose_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_members = {
  "leo_msgs__msg",  // message namespace
  "WheelOdomMecanum",  // message name
  7,  // number of fields
  sizeof(leo_msgs__msg__WheelOdomMecanum),
  leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_member_array,  // message members
  leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_init_function,  // function to initialize message memory (memory has to be allocated)
  leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_type_support_handle = {
  0,
  &leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leo_msgs, msg, WheelOdomMecanum)() {
  leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_type_support_handle.typesupport_identifier) {
    leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &leo_msgs__msg__WheelOdomMecanum__rosidl_typesupport_introspection_c__WheelOdomMecanum_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
