// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_perception_msgs:msg/ClusterInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__TRAITS_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interbotix_perception_msgs/msg/detail/cluster_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'min_z_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace interbotix_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClusterInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: min_z_point
  {
    out << "min_z_point: ";
    to_flow_style_yaml(msg.min_z_point, out);
    out << ", ";
  }

  // member: num_points
  {
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClusterInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: min_z_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_z_point:\n";
    to_block_style_yaml(msg.min_z_point, out, indentation + 2);
  }

  // member: num_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClusterInfo & msg, bool use_flow_style = false)
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

}  // namespace interbotix_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_perception_msgs::msg::ClusterInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_perception_msgs::msg::ClusterInfo & msg)
{
  return interbotix_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_perception_msgs::msg::ClusterInfo>()
{
  return "interbotix_perception_msgs::msg::ClusterInfo";
}

template<>
inline const char * name<interbotix_perception_msgs::msg::ClusterInfo>()
{
  return "interbotix_perception_msgs/msg/ClusterInfo";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::msg::ClusterInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::msg::ClusterInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_perception_msgs::msg::ClusterInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__TRAITS_HPP_
