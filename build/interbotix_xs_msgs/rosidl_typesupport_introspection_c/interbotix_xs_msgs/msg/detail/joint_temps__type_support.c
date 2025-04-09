// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:msg/JointTemps.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/msg/detail/joint_temps__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/msg/detail/joint_temps__functions.h"
#include "interbotix_xs_msgs/msg/detail/joint_temps__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `temps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__msg__JointTemps__init(message_memory);
}

void interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_fini_function(void * message_memory)
{
  interbotix_xs_msgs__msg__JointTemps__fini(message_memory);
}

size_t interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__size_function__JointTemps__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_const_function__JointTemps__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_function__JointTemps__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__fetch_function__JointTemps__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_const_function__JointTemps__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__assign_function__JointTemps__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_function__JointTemps__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__resize_function__JointTemps__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__size_function__JointTemps__temps(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_const_function__JointTemps__temps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_function__JointTemps__temps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__fetch_function__JointTemps__temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_const_function__JointTemps__temps(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__assign_function__JointTemps__temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_function__JointTemps__temps(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__resize_function__JointTemps__temps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_member_array[2] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__msg__JointTemps, names),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__size_function__JointTemps__names,  // size() function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_const_function__JointTemps__names,  // get_const(index) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_function__JointTemps__names,  // get(index) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__fetch_function__JointTemps__names,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__assign_function__JointTemps__names,  // assign(index, value) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__resize_function__JointTemps__names  // resize(index) function pointer
  },
  {
    "temps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__msg__JointTemps, temps),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__size_function__JointTemps__temps,  // size() function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_const_function__JointTemps__temps,  // get_const(index) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__get_function__JointTemps__temps,  // get(index) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__fetch_function__JointTemps__temps,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__assign_function__JointTemps__temps,  // assign(index, value) function pointer
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__resize_function__JointTemps__temps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_members = {
  "interbotix_xs_msgs__msg",  // message namespace
  "JointTemps",  // message name
  2,  // number of fields
  sizeof(interbotix_xs_msgs__msg__JointTemps),
  interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_member_array,  // message members
  interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, msg, JointTemps)() {
  if (!interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__msg__JointTemps__rosidl_typesupport_introspection_c__JointTemps_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
