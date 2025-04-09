// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__TRAITS_HPP_
#define LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leo_msgs/srv/detail/set_imu_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetImuCalibration_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: gyro_bias_x
  {
    out << "gyro_bias_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_bias_x, out);
    out << ", ";
  }

  // member: gyro_bias_y
  {
    out << "gyro_bias_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_bias_y, out);
    out << ", ";
  }

  // member: gyro_bias_z
  {
    out << "gyro_bias_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_bias_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetImuCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gyro_bias_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_bias_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_bias_x, out);
    out << "\n";
  }

  // member: gyro_bias_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_bias_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_bias_y, out);
    out << "\n";
  }

  // member: gyro_bias_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_bias_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_bias_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetImuCalibration_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace leo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use leo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leo_msgs::srv::SetImuCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const leo_msgs::srv::SetImuCalibration_Request & msg)
{
  return leo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leo_msgs::srv::SetImuCalibration_Request>()
{
  return "leo_msgs::srv::SetImuCalibration_Request";
}

template<>
inline const char * name<leo_msgs::srv::SetImuCalibration_Request>()
{
  return "leo_msgs/srv/SetImuCalibration_Request";
}

template<>
struct has_fixed_size<leo_msgs::srv::SetImuCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leo_msgs::srv::SetImuCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leo_msgs::srv::SetImuCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetImuCalibration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetImuCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetImuCalibration_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace leo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use leo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leo_msgs::srv::SetImuCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const leo_msgs::srv::SetImuCalibration_Response & msg)
{
  return leo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leo_msgs::srv::SetImuCalibration_Response>()
{
  return "leo_msgs::srv::SetImuCalibration_Response";
}

template<>
inline const char * name<leo_msgs::srv::SetImuCalibration_Response>()
{
  return "leo_msgs/srv/SetImuCalibration_Response";
}

template<>
struct has_fixed_size<leo_msgs::srv::SetImuCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leo_msgs::srv::SetImuCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leo_msgs::srv::SetImuCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leo_msgs::srv::SetImuCalibration>()
{
  return "leo_msgs::srv::SetImuCalibration";
}

template<>
inline const char * name<leo_msgs::srv::SetImuCalibration>()
{
  return "leo_msgs/srv/SetImuCalibration";
}

template<>
struct has_fixed_size<leo_msgs::srv::SetImuCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<leo_msgs::srv::SetImuCalibration_Request>::value &&
    has_fixed_size<leo_msgs::srv::SetImuCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<leo_msgs::srv::SetImuCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<leo_msgs::srv::SetImuCalibration_Request>::value &&
    has_bounded_size<leo_msgs::srv::SetImuCalibration_Response>::value
  >
{
};

template<>
struct is_service<leo_msgs::srv::SetImuCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<leo_msgs::srv::SetImuCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leo_msgs::srv::SetImuCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__TRAITS_HPP_
