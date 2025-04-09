// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from leo_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__IMU__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LEO_MSGS__MSG__DETAIL__IMU__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "leo_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "leo_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace leo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leo_msgs
cdr_serialize(
  const leo_msgs::msg::Imu & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  leo_msgs::msg::Imu & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leo_msgs
get_serialized_size(
  const leo_msgs::msg::Imu & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leo_msgs
max_serialized_size_Imu(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace leo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leo_msgs, msg, Imu)();

#ifdef __cplusplus
}
#endif

#endif  // LEO_MSGS__MSG__DETAIL__IMU__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
