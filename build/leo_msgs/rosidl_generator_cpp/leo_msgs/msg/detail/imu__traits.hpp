// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
#define LEO_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leo_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace leo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Imu & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << ", ";
  }

  // member: accel_x
  {
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << ", ";
  }

  // member: accel_y
  {
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << ", ";
  }

  // member: accel_z
  {
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Imu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }

  // member: accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << "\n";
  }

  // member: accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << "\n";
  }

  // member: accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Imu & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace leo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use leo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leo_msgs::msg::Imu & msg,
  std::ostream & out, size_t indentation = 0)
{
  leo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const leo_msgs::msg::Imu & msg)
{
  return leo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leo_msgs::msg::Imu>()
{
  return "leo_msgs::msg::Imu";
}

template<>
inline const char * name<leo_msgs::msg::Imu>()
{
  return "leo_msgs/msg/Imu";
}

template<>
struct has_fixed_size<leo_msgs::msg::Imu>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<leo_msgs::msg::Imu>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<leo_msgs::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEO_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
