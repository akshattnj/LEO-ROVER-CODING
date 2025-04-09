// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__BUILDER_HPP_
#define LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leo_msgs/srv/detail/set_imu_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetImuCalibration_Request_gyro_bias_z
{
public:
  explicit Init_SetImuCalibration_Request_gyro_bias_z(::leo_msgs::srv::SetImuCalibration_Request & msg)
  : msg_(msg)
  {}
  ::leo_msgs::srv::SetImuCalibration_Request gyro_bias_z(::leo_msgs::srv::SetImuCalibration_Request::_gyro_bias_z_type arg)
  {
    msg_.gyro_bias_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_msgs::srv::SetImuCalibration_Request msg_;
};

class Init_SetImuCalibration_Request_gyro_bias_y
{
public:
  explicit Init_SetImuCalibration_Request_gyro_bias_y(::leo_msgs::srv::SetImuCalibration_Request & msg)
  : msg_(msg)
  {}
  Init_SetImuCalibration_Request_gyro_bias_z gyro_bias_y(::leo_msgs::srv::SetImuCalibration_Request::_gyro_bias_y_type arg)
  {
    msg_.gyro_bias_y = std::move(arg);
    return Init_SetImuCalibration_Request_gyro_bias_z(msg_);
  }

private:
  ::leo_msgs::srv::SetImuCalibration_Request msg_;
};

class Init_SetImuCalibration_Request_gyro_bias_x
{
public:
  Init_SetImuCalibration_Request_gyro_bias_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetImuCalibration_Request_gyro_bias_y gyro_bias_x(::leo_msgs::srv::SetImuCalibration_Request::_gyro_bias_x_type arg)
  {
    msg_.gyro_bias_x = std::move(arg);
    return Init_SetImuCalibration_Request_gyro_bias_y(msg_);
  }

private:
  ::leo_msgs::srv::SetImuCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_msgs::srv::SetImuCalibration_Request>()
{
  return leo_msgs::srv::builder::Init_SetImuCalibration_Request_gyro_bias_x();
}

}  // namespace leo_msgs


namespace leo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetImuCalibration_Response_success
{
public:
  Init_SetImuCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leo_msgs::srv::SetImuCalibration_Response success(::leo_msgs::srv::SetImuCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_msgs::srv::SetImuCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_msgs::srv::SetImuCalibration_Response>()
{
  return leo_msgs::srv::builder::Init_SetImuCalibration_Response_success();
}

}  // namespace leo_msgs

#endif  // LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__BUILDER_HPP_
