// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leo_msgs/msg/detail/wheel_states__rosidl_typesupport_introspection_c.h"
#include "leo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leo_msgs/msg/detail/wheel_states__functions.h"
#include "leo_msgs/msg/detail/wheel_states__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leo_msgs__msg__WheelStates__init(message_memory);
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_fini_function(void * message_memory)
{
  leo_msgs__msg__WheelStates__fini(message_memory);
}

size_t leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__torque(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__torque(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__torque(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__torque(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__torque(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__pwm_duty_cycle(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__pwm_duty_cycle(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__pwm_duty_cycle(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__pwm_duty_cycle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__pwm_duty_cycle(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__pwm_duty_cycle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__pwm_duty_cycle(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelStates, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelStates, position),  // bytes offset in struct
    NULL,  // default value
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__position,  // size() function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__position,  // get_const(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__position,  // get(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__position,  // fetch(index, &value) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelStates, velocity),  // bytes offset in struct
    NULL,  // default value
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__velocity,  // size() function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__velocity,  // get_const(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__velocity,  // get(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__velocity,  // fetch(index, &value) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelStates, torque),  // bytes offset in struct
    NULL,  // default value
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__torque,  // size() function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__torque,  // get_const(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__torque,  // get(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__torque,  // fetch(index, &value) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__torque,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_duty_cycle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs__msg__WheelStates, pwm_duty_cycle),  // bytes offset in struct
    NULL,  // default value
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__size_function__WheelStates__pwm_duty_cycle,  // size() function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_const_function__WheelStates__pwm_duty_cycle,  // get_const(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__get_function__WheelStates__pwm_duty_cycle,  // get(index) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__fetch_function__WheelStates__pwm_duty_cycle,  // fetch(index, &value) function pointer
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__assign_function__WheelStates__pwm_duty_cycle,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_members = {
  "leo_msgs__msg",  // message namespace
  "WheelStates",  // message name
  5,  // number of fields
  sizeof(leo_msgs__msg__WheelStates),
  leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_member_array,  // message members
  leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_init_function,  // function to initialize message memory (memory has to be allocated)
  leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_type_support_handle = {
  0,
  &leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leo_msgs, msg, WheelStates)() {
  leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_type_support_handle.typesupport_identifier) {
    leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &leo_msgs__msg__WheelStates__rosidl_typesupport_introspection_c__WheelStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
