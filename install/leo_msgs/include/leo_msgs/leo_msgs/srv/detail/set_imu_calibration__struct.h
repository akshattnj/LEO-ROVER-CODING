// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__STRUCT_H_
#define LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetImuCalibration in the package leo_msgs.
typedef struct leo_msgs__srv__SetImuCalibration_Request
{
  double gyro_bias_x;
  double gyro_bias_y;
  double gyro_bias_z;
} leo_msgs__srv__SetImuCalibration_Request;

// Struct for a sequence of leo_msgs__srv__SetImuCalibration_Request.
typedef struct leo_msgs__srv__SetImuCalibration_Request__Sequence
{
  leo_msgs__srv__SetImuCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leo_msgs__srv__SetImuCalibration_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetImuCalibration in the package leo_msgs.
typedef struct leo_msgs__srv__SetImuCalibration_Response
{
  bool success;
} leo_msgs__srv__SetImuCalibration_Response;

// Struct for a sequence of leo_msgs__srv__SetImuCalibration_Response.
typedef struct leo_msgs__srv__SetImuCalibration_Response__Sequence
{
  leo_msgs__srv__SetImuCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leo_msgs__srv__SetImuCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__STRUCT_H_
