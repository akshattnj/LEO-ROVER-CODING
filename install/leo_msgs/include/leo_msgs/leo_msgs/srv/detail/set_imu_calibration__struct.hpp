// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__STRUCT_HPP_
#define LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__leo_msgs__srv__SetImuCalibration_Request __attribute__((deprecated))
#else
# define DEPRECATED__leo_msgs__srv__SetImuCalibration_Request __declspec(deprecated)
#endif

namespace leo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetImuCalibration_Request_
{
  using Type = SetImuCalibration_Request_<ContainerAllocator>;

  explicit SetImuCalibration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gyro_bias_x = 0.0;
      this->gyro_bias_y = 0.0;
      this->gyro_bias_z = 0.0;
    }
  }

  explicit SetImuCalibration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gyro_bias_x = 0.0;
      this->gyro_bias_y = 0.0;
      this->gyro_bias_z = 0.0;
    }
  }

  // field types and members
  using _gyro_bias_x_type =
    double;
  _gyro_bias_x_type gyro_bias_x;
  using _gyro_bias_y_type =
    double;
  _gyro_bias_y_type gyro_bias_y;
  using _gyro_bias_z_type =
    double;
  _gyro_bias_z_type gyro_bias_z;

  // setters for named parameter idiom
  Type & set__gyro_bias_x(
    const double & _arg)
  {
    this->gyro_bias_x = _arg;
    return *this;
  }
  Type & set__gyro_bias_y(
    const double & _arg)
  {
    this->gyro_bias_y = _arg;
    return *this;
  }
  Type & set__gyro_bias_z(
    const double & _arg)
  {
    this->gyro_bias_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leo_msgs__srv__SetImuCalibration_Request
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leo_msgs__srv__SetImuCalibration_Request
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetImuCalibration_Request_ & other) const
  {
    if (this->gyro_bias_x != other.gyro_bias_x) {
      return false;
    }
    if (this->gyro_bias_y != other.gyro_bias_y) {
      return false;
    }
    if (this->gyro_bias_z != other.gyro_bias_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetImuCalibration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetImuCalibration_Request_

// alias to use template instance with default allocator
using SetImuCalibration_Request =
  leo_msgs::srv::SetImuCalibration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace leo_msgs


#ifndef _WIN32
# define DEPRECATED__leo_msgs__srv__SetImuCalibration_Response __attribute__((deprecated))
#else
# define DEPRECATED__leo_msgs__srv__SetImuCalibration_Response __declspec(deprecated)
#endif

namespace leo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetImuCalibration_Response_
{
  using Type = SetImuCalibration_Response_<ContainerAllocator>;

  explicit SetImuCalibration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetImuCalibration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leo_msgs__srv__SetImuCalibration_Response
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leo_msgs__srv__SetImuCalibration_Response
    std::shared_ptr<leo_msgs::srv::SetImuCalibration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetImuCalibration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetImuCalibration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetImuCalibration_Response_

// alias to use template instance with default allocator
using SetImuCalibration_Response =
  leo_msgs::srv::SetImuCalibration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace leo_msgs

namespace leo_msgs
{

namespace srv
{

struct SetImuCalibration
{
  using Request = leo_msgs::srv::SetImuCalibration_Request;
  using Response = leo_msgs::srv::SetImuCalibration_Response;
};

}  // namespace srv

}  // namespace leo_msgs

#endif  // LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__STRUCT_HPP_
