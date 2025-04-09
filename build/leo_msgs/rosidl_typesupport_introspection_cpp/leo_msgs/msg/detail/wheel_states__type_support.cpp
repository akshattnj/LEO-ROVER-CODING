// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "leo_msgs/msg/detail/wheel_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace leo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) leo_msgs::msg::WheelStates(_init);
}

void WheelStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<leo_msgs::msg::WheelStates *>(message_memory);
  typed_message->~WheelStates();
}

size_t size_function__WheelStates__position(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__WheelStates__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__WheelStates__torque(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__torque(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__torque(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__WheelStates__pwm_duty_cycle(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__pwm_duty_cycle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__pwm_duty_cycle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__pwm_duty_cycle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__pwm_duty_cycle(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__pwm_duty_cycle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__pwm_duty_cycle(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelStates_message_member_array[5] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leo_msgs::msg::WheelStates, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs::msg::WheelStates, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__position,  // size() function pointer
    get_const_function__WheelStates__position,  // get_const(index) function pointer
    get_function__WheelStates__position,  // get(index) function pointer
    fetch_function__WheelStates__position,  // fetch(index, &value) function pointer
    assign_function__WheelStates__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs::msg::WheelStates, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__velocity,  // size() function pointer
    get_const_function__WheelStates__velocity,  // get_const(index) function pointer
    get_function__WheelStates__velocity,  // get(index) function pointer
    fetch_function__WheelStates__velocity,  // fetch(index, &value) function pointer
    assign_function__WheelStates__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs::msg::WheelStates, torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__torque,  // size() function pointer
    get_const_function__WheelStates__torque,  // get_const(index) function pointer
    get_function__WheelStates__torque,  // get(index) function pointer
    fetch_function__WheelStates__torque,  // fetch(index, &value) function pointer
    assign_function__WheelStates__torque,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pwm_duty_cycle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(leo_msgs::msg::WheelStates, pwm_duty_cycle),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__pwm_duty_cycle,  // size() function pointer
    get_const_function__WheelStates__pwm_duty_cycle,  // get_const(index) function pointer
    get_function__WheelStates__pwm_duty_cycle,  // get(index) function pointer
    fetch_function__WheelStates__pwm_duty_cycle,  // fetch(index, &value) function pointer
    assign_function__WheelStates__pwm_duty_cycle,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelStates_message_members = {
  "leo_msgs::msg",  // message namespace
  "WheelStates",  // message name
  5,  // number of fields
  sizeof(leo_msgs::msg::WheelStates),
  WheelStates_message_member_array,  // message members
  WheelStates_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace leo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<leo_msgs::msg::WheelStates>()
{
  return &::leo_msgs::msg::rosidl_typesupport_introspection_cpp::WheelStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, leo_msgs, msg, WheelStates)() {
  return &::leo_msgs::msg::rosidl_typesupport_introspection_cpp::WheelStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
