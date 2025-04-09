// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_msgs:msg/WheelOdom.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_ODOM__TRAITS_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_ODOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leo_msgs/msg/detail/wheel_odom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace leo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelOdom & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: velocity_lin
  {
    out << "velocity_lin: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_lin, out);
    out << ", ";
  }

  // member: velocity_ang
  {
    out << "velocity_ang: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ang, out);
    out << ", ";
  }

  // member: pose_x
  {
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << ", ";
  }

  // member: pose_y
  {
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << ", ";
  }

  // member: pose_yaw
  {
    out << "pose_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelOdom & msg,
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

  // member: velocity_lin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_lin: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_lin, out);
    out << "\n";
  }

  // member: velocity_ang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ang: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ang, out);
    out << "\n";
  }

  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << "\n";
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << "\n";
  }

  // member: pose_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelOdom & msg, bool use_flow_style = false)
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
  const leo_msgs::msg::WheelOdom & msg,
  std::ostream & out, size_t indentation = 0)
{
  leo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const leo_msgs::msg::WheelOdom & msg)
{
  return leo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leo_msgs::msg::WheelOdom>()
{
  return "leo_msgs::msg::WheelOdom";
}

template<>
inline const char * name<leo_msgs::msg::WheelOdom>()
{
  return "leo_msgs/msg/WheelOdom";
}

template<>
struct has_fixed_size<leo_msgs::msg::WheelOdom>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<leo_msgs::msg::WheelOdom>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<leo_msgs::msg::WheelOdom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_ODOM__TRAITS_HPP_
