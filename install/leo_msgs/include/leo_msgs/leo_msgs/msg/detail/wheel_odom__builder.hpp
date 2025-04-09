// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leo_msgs:msg/WheelOdom.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_ODOM__BUILDER_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_ODOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leo_msgs/msg/detail/wheel_odom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leo_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelOdom_pose_yaw
{
public:
  explicit Init_WheelOdom_pose_yaw(::leo_msgs::msg::WheelOdom & msg)
  : msg_(msg)
  {}
  ::leo_msgs::msg::WheelOdom pose_yaw(::leo_msgs::msg::WheelOdom::_pose_yaw_type arg)
  {
    msg_.pose_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdom msg_;
};

class Init_WheelOdom_pose_y
{
public:
  explicit Init_WheelOdom_pose_y(::leo_msgs::msg::WheelOdom & msg)
  : msg_(msg)
  {}
  Init_WheelOdom_pose_yaw pose_y(::leo_msgs::msg::WheelOdom::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_WheelOdom_pose_yaw(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdom msg_;
};

class Init_WheelOdom_pose_x
{
public:
  explicit Init_WheelOdom_pose_x(::leo_msgs::msg::WheelOdom & msg)
  : msg_(msg)
  {}
  Init_WheelOdom_pose_y pose_x(::leo_msgs::msg::WheelOdom::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_WheelOdom_pose_y(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdom msg_;
};

class Init_WheelOdom_velocity_ang
{
public:
  explicit Init_WheelOdom_velocity_ang(::leo_msgs::msg::WheelOdom & msg)
  : msg_(msg)
  {}
  Init_WheelOdom_pose_x velocity_ang(::leo_msgs::msg::WheelOdom::_velocity_ang_type arg)
  {
    msg_.velocity_ang = std::move(arg);
    return Init_WheelOdom_pose_x(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdom msg_;
};

class Init_WheelOdom_velocity_lin
{
public:
  explicit Init_WheelOdom_velocity_lin(::leo_msgs::msg::WheelOdom & msg)
  : msg_(msg)
  {}
  Init_WheelOdom_velocity_ang velocity_lin(::leo_msgs::msg::WheelOdom::_velocity_lin_type arg)
  {
    msg_.velocity_lin = std::move(arg);
    return Init_WheelOdom_velocity_ang(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdom msg_;
};

class Init_WheelOdom_stamp
{
public:
  Init_WheelOdom_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelOdom_velocity_lin stamp(::leo_msgs::msg::WheelOdom::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WheelOdom_velocity_lin(msg_);
  }

private:
  ::leo_msgs::msg::WheelOdom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_msgs::msg::WheelOdom>()
{
  return leo_msgs::msg::builder::Init_WheelOdom_stamp();
}

}  // namespace leo_msgs

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_ODOM__BUILDER_HPP_
