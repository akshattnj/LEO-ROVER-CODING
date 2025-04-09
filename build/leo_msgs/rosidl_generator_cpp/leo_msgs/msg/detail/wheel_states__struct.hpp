// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_STATES__STRUCT_HPP_
#define LEO_MSGS__MSG__DETAIL__WHEEL_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leo_msgs__msg__WheelStates __attribute__((deprecated))
#else
# define DEPRECATED__leo_msgs__msg__WheelStates __declspec(deprecated)
#endif

namespace leo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelStates_
{
  using Type = WheelStates_<ContainerAllocator>;

  explicit WheelStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->torque.begin(), this->torque.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->pwm_duty_cycle.begin(), this->pwm_duty_cycle.end(), 0.0f);
    }
  }

  explicit WheelStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    position(_alloc),
    velocity(_alloc),
    torque(_alloc),
    pwm_duty_cycle(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->torque.begin(), this->torque.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->pwm_duty_cycle.begin(), this->pwm_duty_cycle.end(), 0.0f);
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _position_type =
    std::array<float, 4>;
  _position_type position;
  using _velocity_type =
    std::array<float, 4>;
  _velocity_type velocity;
  using _torque_type =
    std::array<float, 4>;
  _torque_type torque;
  using _pwm_duty_cycle_type =
    std::array<float, 4>;
  _pwm_duty_cycle_type pwm_duty_cycle;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 4> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 4> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__torque(
    const std::array<float, 4> & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__pwm_duty_cycle(
    const std::array<float, 4> & _arg)
  {
    this->pwm_duty_cycle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leo_msgs::msg::WheelStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const leo_msgs::msg::WheelStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leo_msgs::msg::WheelStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leo_msgs::msg::WheelStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leo_msgs__msg__WheelStates
    std::shared_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leo_msgs__msg__WheelStates
    std::shared_ptr<leo_msgs::msg::WheelStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelStates_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->pwm_duty_cycle != other.pwm_duty_cycle) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelStates_

// alias to use template instance with default allocator
using WheelStates =
  leo_msgs::msg::WheelStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leo_msgs

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_STATES__STRUCT_HPP_
