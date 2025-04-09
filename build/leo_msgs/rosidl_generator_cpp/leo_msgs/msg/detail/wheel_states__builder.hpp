// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_STATES__BUILDER_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leo_msgs/msg/detail/wheel_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leo_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelStates_pwm_duty_cycle
{
public:
  explicit Init_WheelStates_pwm_duty_cycle(::leo_msgs::msg::WheelStates & msg)
  : msg_(msg)
  {}
  ::leo_msgs::msg::WheelStates pwm_duty_cycle(::leo_msgs::msg::WheelStates::_pwm_duty_cycle_type arg)
  {
    msg_.pwm_duty_cycle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leo_msgs::msg::WheelStates msg_;
};

class Init_WheelStates_torque
{
public:
  explicit Init_WheelStates_torque(::leo_msgs::msg::WheelStates & msg)
  : msg_(msg)
  {}
  Init_WheelStates_pwm_duty_cycle torque(::leo_msgs::msg::WheelStates::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_WheelStates_pwm_duty_cycle(msg_);
  }

private:
  ::leo_msgs::msg::WheelStates msg_;
};

class Init_WheelStates_velocity
{
public:
  explicit Init_WheelStates_velocity(::leo_msgs::msg::WheelStates & msg)
  : msg_(msg)
  {}
  Init_WheelStates_torque velocity(::leo_msgs::msg::WheelStates::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_WheelStates_torque(msg_);
  }

private:
  ::leo_msgs::msg::WheelStates msg_;
};

class Init_WheelStates_position
{
public:
  explicit Init_WheelStates_position(::leo_msgs::msg::WheelStates & msg)
  : msg_(msg)
  {}
  Init_WheelStates_velocity position(::leo_msgs::msg::WheelStates::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_WheelStates_velocity(msg_);
  }

private:
  ::leo_msgs::msg::WheelStates msg_;
};

class Init_WheelStates_stamp
{
public:
  Init_WheelStates_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelStates_position stamp(::leo_msgs::msg::WheelStates::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WheelStates_position(msg_);
  }

private:
  ::leo_msgs::msg::WheelStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leo_msgs::msg::WheelStates>()
{
  return leo_msgs::msg::builder::Init_WheelStates_stamp();
}

}  // namespace leo_msgs

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_STATES__BUILDER_HPP_
