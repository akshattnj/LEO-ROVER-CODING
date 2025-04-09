// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leo_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__IMU__STRUCT_H_
#define LEO_MSGS__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Imu in the package leo_msgs.
/**
  * This message holds the data retrieved from an Accel/Gyro+Temp IMU sensor
  *
  * The temperature field represents the temperature reported by the sensor in Degrees Celcius
  * The gyro_* fields represent the rotational velocity in rad/s
  * The accel_* fields represent the linear acceleration in m/s^2
 */
typedef struct leo_msgs__msg__Imu
{
  builtin_interfaces__msg__Time stamp;
  float temperature;
  float gyro_x;
  float gyro_y;
  float gyro_z;
  float accel_x;
  float accel_y;
  float accel_z;
} leo_msgs__msg__Imu;

// Struct for a sequence of leo_msgs__msg__Imu.
typedef struct leo_msgs__msg__Imu__Sequence
{
  leo_msgs__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leo_msgs__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEO_MSGS__MSG__DETAIL__IMU__STRUCT_H_
