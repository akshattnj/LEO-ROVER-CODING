// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_with_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__TRAITS_HPP_
#define LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leo_with_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leo_with_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Position & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_pos
  {
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << ", ";
  }

  // member: y_pos
  {
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << ", ";
  }

  // member: z_pos
  {
    out << "z_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.z_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << "\n";
  }

  // member: y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << "\n";
  }

  // member: z_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.z_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Position & msg, bool use_flow_style = false)
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

}  // namespace leo_with_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use leo_with_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leo_with_interfaces::msg::Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  leo_with_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leo_with_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const leo_with_interfaces::msg::Position & msg)
{
  return leo_with_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leo_with_interfaces::msg::Position>()
{
  return "leo_with_interfaces::msg::Position";
}

template<>
inline const char * name<leo_with_interfaces::msg::Position>()
{
  return "leo_with_interfaces/msg/Position";
}

template<>
struct has_fixed_size<leo_with_interfaces::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leo_with_interfaces::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leo_with_interfaces::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__TRAITS_HPP_
