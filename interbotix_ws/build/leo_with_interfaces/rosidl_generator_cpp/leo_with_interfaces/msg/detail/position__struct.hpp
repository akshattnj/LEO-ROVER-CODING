// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leo_with_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__STRUCT_HPP_
#define LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__leo_with_interfaces__msg__Position __attribute__((deprecated))
#else
# define DEPRECATED__leo_with_interfaces__msg__Position __declspec(deprecated)
#endif

namespace leo_with_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position_
{
  using Type = Position_<ContainerAllocator>;

  explicit Position_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0;
      this->y_pos = 0.0;
      this->z_pos = 0.0;
    }
  }

  explicit Position_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0;
      this->y_pos = 0.0;
      this->z_pos = 0.0;
    }
  }

  // field types and members
  using _x_pos_type =
    double;
  _x_pos_type x_pos;
  using _y_pos_type =
    double;
  _y_pos_type y_pos;
  using _z_pos_type =
    double;
  _z_pos_type z_pos;

  // setters for named parameter idiom
  Type & set__x_pos(
    const double & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const double & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }
  Type & set__z_pos(
    const double & _arg)
  {
    this->z_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leo_with_interfaces::msg::Position_<ContainerAllocator> *;
  using ConstRawPtr =
    const leo_with_interfaces::msg::Position_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leo_with_interfaces::msg::Position_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leo_with_interfaces::msg::Position_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leo_with_interfaces__msg__Position
    std::shared_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leo_with_interfaces__msg__Position
    std::shared_ptr<leo_with_interfaces::msg::Position_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position_ & other) const
  {
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    if (this->z_pos != other.z_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position_

// alias to use template instance with default allocator
using Position =
  leo_with_interfaces::msg::Position_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leo_with_interfaces

#endif  // LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__STRUCT_HPP_
