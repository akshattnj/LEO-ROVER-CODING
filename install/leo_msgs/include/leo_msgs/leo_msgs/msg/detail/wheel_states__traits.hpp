// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_STATES__TRAITS_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leo_msgs/msg/detail/wheel_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace leo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: torque
  {
    if (msg.torque.size() == 0) {
      out << "torque: []";
    } else {
      out << "torque: [";
      size_t pending_items = msg.torque.size();
      for (auto item : msg.torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pwm_duty_cycle
  {
    if (msg.pwm_duty_cycle.size() == 0) {
      out << "pwm_duty_cycle: []";
    } else {
      out << "pwm_duty_cycle: [";
      size_t pending_items = msg.pwm_duty_cycle.size();
      for (auto item : msg.pwm_duty_cycle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelStates & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque.size() == 0) {
      out << "torque: []\n";
    } else {
      out << "torque:\n";
      for (auto item : msg.torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_duty_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_duty_cycle.size() == 0) {
      out << "pwm_duty_cycle: []\n";
    } else {
      out << "pwm_duty_cycle:\n";
      for (auto item : msg.pwm_duty_cycle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelStates & msg, bool use_flow_style = false)
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
  const leo_msgs::msg::WheelStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  leo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const leo_msgs::msg::WheelStates & msg)
{
  return leo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leo_msgs::msg::WheelStates>()
{
  return "leo_msgs::msg::WheelStates";
}

template<>
inline const char * name<leo_msgs::msg::WheelStates>()
{
  return "leo_msgs/msg/WheelStates";
}

template<>
struct has_fixed_size<leo_msgs::msg::WheelStates>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<leo_msgs::msg::WheelStates>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<leo_msgs::msg::WheelStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_STATES__TRAITS_HPP_
