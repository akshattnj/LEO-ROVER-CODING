// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leo_msgs:msg/WheelOdomMecanum.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__BUILDER_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leo_msgs/msg/detail/wheel_odom_mecanum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leo_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelOdomMecanum_pose_yaw
{
public:
  explicit Init_WheelOdomMecanum_pose_yaw(::leo_msgs::msg::WheelOdomMecanum & msg)
  : msg_(msg)
  {}
  ::leo_msgs::msg::WheelOdomMecanum pose_yaw(::leo_msgs::msg::WheelOdomMecanum::_pose_yaw_type arg)
  {
    msg_.pose_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

class Init_WheelOdomMecanum_pose_y
{
public:
  explicit Init_WheelOdomMecanum_pose_y(::leo_msgs::msg::WheelOdomMecanum & msg)
  : msg_(msg)
  {}
  Init_WheelOdomMecanum_pose_yaw pose_y(::leo_msgs::msg::WheelOdomMecanum::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_WheelOdomMecanum_pose_yaw(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

class Init_WheelOdomMecanum_pose_x
{
public:
  explicit Init_WheelOdomMecanum_pose_x(::leo_msgs::msg::WheelOdomMecanum & msg)
  : msg_(msg)
  {}
  Init_WheelOdomMecanum_pose_y pose_x(::leo_msgs::msg::WheelOdomMecanum::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_WheelOdomMecanum_pose_y(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

class Init_WheelOdomMecanum_velocity_ang
{
public:
  explicit Init_WheelOdomMecanum_velocity_ang(::leo_msgs::msg::WheelOdomMecanum & msg)
  : msg_(msg)
  {}
  Init_WheelOdomMecanum_pose_x velocity_ang(::leo_msgs::msg::WheelOdomMecanum::_velocity_ang_type arg)
  {
    msg_.velocity_ang = std::move(arg);
    return Init_WheelOdomMecanum_pose_x(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

class Init_WheelOdomMecanum_velocity_lin_y
{
public:
  explicit Init_WheelOdomMecanum_velocity_lin_y(::leo_msgs::msg::WheelOdomMecanum & msg)
  : msg_(msg)
  {}
  Init_WheelOdomMecanum_velocity_ang velocity_lin_y(::leo_msgs::msg::WheelOdomMecanum::_velocity_lin_y_type arg)
  {
    msg_.velocity_lin_y = std::move(arg);
    return Init_WheelOdomMecanum_velocity_ang(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

class Init_WheelOdomMecanum_velocity_lin_x
{
public:
  explicit Init_WheelOdomMecanum_velocity_lin_x(::leo_msgs::msg::WheelOdomMecanum & msg)
  : msg_(msg)
  {}
  Init_WheelOdomMecanum_velocity_lin_y velocity_lin_x(::leo_msgs::msg::WheelOdomMecanum::_velocity_lin_x_type arg)
  {
    msg_.velocity_lin_x = std::move(arg);
    return Init_WheelOdomMecanum_velocity_lin_y(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

class Init_WheelOdomMecanum_stamp
{
public:
  Init_WheelOdomMecanum_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelOdomMecanum_velocity_lin_x stamp(::leo_msgs::msg::WheelOdomMecanum::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WheelOdomMecanum_velocity_lin_x(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdomMecanum msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_msgs::msg::WheelOdomMecanum>()
{
  return leo_msgs::msg::builder::Init_WheelOdomMecanum_stamp();
}

}  // namespace leo_msgs

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_ODOM_MECANUM__BUILDER_HPP_
