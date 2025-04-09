// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leo_with_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leo_with_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leo_with_interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_z_pos
{
public:
  explicit Init_Position_z_pos(::leo_with_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::leo_with_interfaces::msg::Position z_pos(::leo_with_interfaces::msg::Position::_z_pos_type arg)
  {
    msg_.z_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_with_interfaces::msg::Position msg_;
};

class Init_Position_y_pos
{
public:
  explicit Init_Position_y_pos(::leo_with_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_z_pos y_pos(::leo_with_interfaces::msg::Position::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_Position_z_pos(msg_);
  }

private:
  ::leo_with_interfaces::msg::Position msg_;
};

class Init_Position_x_pos
{
public:
  Init_Position_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y_pos x_pos(::leo_with_interfaces::msg::Position::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_Position_y_pos(msg_);
  }

private:
  ::leo_with_interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_with_interfaces::msg::Position>()
{
  return leo_with_interfaces::msg::builder::Init_Position_x_pos();
}

}  // namespace leo_with_interfaces

#endif  // LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
