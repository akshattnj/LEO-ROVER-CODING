// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/srv/detail/robot_info__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"
#include "interbotix_xs_msgs/srv/detail/robot_info__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__RobotInfo_Request__init(message_memory);
}

void interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__RobotInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_member_array[2] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Request, cmd_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "RobotInfo_Request",  // message name
  2,  // number of fields
  sizeof(interbotix_xs_msgs__srv__RobotInfo_Request),
  interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_member_array,  // message members
  interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo_Request)() {
  if (!interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__RobotInfo_Request__rosidl_typesupport_introspection_c__RobotInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__struct.h"


// Include directives for member types
// Member `mode`
// Member `profile_type`
// Member `joint_names`
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `joint_ids`
// Member `joint_lower_limits`
// Member `joint_upper_limits`
// Member `joint_velocity_limits`
// Member `joint_sleep_positions`
// Member `joint_state_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__RobotInfo_Response__init(message_memory);
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__RobotInfo_Response__fini(message_memory);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_ids(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_ids(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_lower_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_lower_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_lower_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_lower_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_lower_limits(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_lower_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_lower_limits(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_lower_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_upper_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_upper_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_upper_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_upper_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_upper_limits(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_upper_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_upper_limits(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_upper_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_velocity_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_velocity_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_velocity_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_velocity_limits(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_velocity_limits(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_sleep_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_sleep_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_sleep_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_sleep_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_sleep_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_sleep_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_sleep_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_sleep_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_state_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_state_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_state_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_state_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_state_indices(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_state_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_state_indices(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_state_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_member_array[11] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "profile_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, profile_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_names),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_names,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_names,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_names,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_names,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_names,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_names  // resize(index) function pointer
  },
  {
    "joint_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_ids),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_ids,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_ids,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_ids,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_ids,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_ids,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_ids  // resize(index) function pointer
  },
  {
    "joint_lower_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_lower_limits),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_lower_limits,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_lower_limits,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_lower_limits,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_lower_limits,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_lower_limits,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_lower_limits  // resize(index) function pointer
  },
  {
    "joint_upper_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_upper_limits),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_upper_limits,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_upper_limits,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_upper_limits,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_upper_limits,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_upper_limits,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_upper_limits  // resize(index) function pointer
  },
  {
    "joint_velocity_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_velocity_limits),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_velocity_limits,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_velocity_limits,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_velocity_limits,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_velocity_limits,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_velocity_limits,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_velocity_limits  // resize(index) function pointer
  },
  {
    "joint_sleep_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_sleep_positions),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_sleep_positions,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_sleep_positions,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_sleep_positions,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_sleep_positions,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_sleep_positions,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_sleep_positions  // resize(index) function pointer
  },
  {
    "joint_state_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, joint_state_indices),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__joint_state_indices,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__joint_state_indices,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__joint_state_indices,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__joint_state_indices,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__joint_state_indices,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__joint_state_indices  // resize(index) function pointer
  },
  {
    "num_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, num_joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RobotInfo_Response, name),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__size_function__RobotInfo_Response__name,  // size() function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__RobotInfo_Response__name,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__get_function__RobotInfo_Response__name,  // get(index) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__RobotInfo_Response__name,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__RobotInfo_Response__name,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__RobotInfo_Response__name  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "RobotInfo_Response",  // message name
  11,  // number of fields
  sizeof(interbotix_xs_msgs__srv__RobotInfo_Response),
  interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_member_array,  // message members
  interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo_Response)() {
  if (!interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__RobotInfo_Response__rosidl_typesupport_introspection_c__RobotInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_members = {
  "interbotix_xs_msgs__srv",  // service namespace
  "RobotInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo)() {
  if (!interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RobotInfo_Response)()->data;
  }

  return &interbotix_xs_msgs__srv__detail__robot_info__rosidl_typesupport_introspection_c__RobotInfo_service_type_support_handle;
}
