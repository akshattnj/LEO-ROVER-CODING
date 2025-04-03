// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leo_with_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
#define LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position in the package leo_with_interfaces.
/**
  * To publish using this message type use:
  * ros2 topic pub /position leo_with_interfaces/msg/Position {"x_pos: x, y_pos: y, z_pos: z"}
  * where x, y and z are manipulator position in cm.
 */
typedef struct leo_with_interfaces__msg__Position
{
  double x_pos;
  double y_pos;
  double z_pos;
} leo_with_interfaces__msg__Position;

// Struct for a sequence of leo_with_interfaces__msg__Position.
typedef struct leo_with_interfaces__msg__Position__Sequence
{
  leo_with_interfaces__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leo_with_interfaces__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEO_WITH_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
