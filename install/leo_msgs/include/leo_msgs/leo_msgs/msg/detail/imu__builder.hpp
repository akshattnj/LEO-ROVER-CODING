// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leo_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define LEO_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leo_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leo_msgs
{

namespace msg
{

namespace builder
{

class Init_Imu_accel_z
{
public:
  explicit Init_Imu_accel_z(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  ::leo_msgs::msg::Imu accel_z(::leo_msgs::msg::Imu::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_accel_y
{
public:
  explicit Init_Imu_accel_y(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_accel_z accel_y(::leo_msgs::msg::Imu::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_Imu_accel_z(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_accel_x
{
public:
  explicit Init_Imu_accel_x(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_accel_y accel_x(::leo_msgs::msg::Imu::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_Imu_accel_y(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_gyro_z
{
public:
  explicit Init_Imu_gyro_z(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_accel_x gyro_z(::leo_msgs::msg::Imu::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_Imu_accel_x(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_gyro_y
{
public:
  explicit Init_Imu_gyro_y(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_gyro_z gyro_y(::leo_msgs::msg::Imu::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_Imu_gyro_z(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_gyro_x
{
public:
  explicit Init_Imu_gyro_x(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_gyro_y gyro_x(::leo_msgs::msg::Imu::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_Imu_gyro_y(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_temperature
{
public:
  explicit Init_Imu_temperature(::leo_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_gyro_x temperature(::leo_msgs::msg::Imu::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Imu_gyro_x(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

class Init_Imu_stamp
{
public:
  Init_Imu_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_temperature stamp(::leo_msgs::msg::Imu::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Imu_temperature(msg_);
  }

private:
  ::leo_msgs::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_msgs::msg::Imu>()
{
  return leo_msgs::msg::builder::Init_Imu_stamp();
}

}  // namespace leo_msgs

#endif  // LEO_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
