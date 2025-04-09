// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__FUNCTIONS_H_
#define LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "leo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "leo_msgs/srv/detail/set_imu_calibration__struct.h"

/// Initialize srv/SetImuCalibration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leo_msgs__srv__SetImuCalibration_Request
 * )) before or use
 * leo_msgs__srv__SetImuCalibration_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Request__init(leo_msgs__srv__SetImuCalibration_Request * msg);

/// Finalize srv/SetImuCalibration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Request__fini(leo_msgs__srv__SetImuCalibration_Request * msg);

/// Create srv/SetImuCalibration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leo_msgs__srv__SetImuCalibration_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
leo_msgs__srv__SetImuCalibration_Request *
leo_msgs__srv__SetImuCalibration_Request__create();

/// Destroy srv/SetImuCalibration message.
/**
 * It calls
 * leo_msgs__srv__SetImuCalibration_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Request__destroy(leo_msgs__srv__SetImuCalibration_Request * msg);

/// Check for srv/SetImuCalibration message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Request__are_equal(const leo_msgs__srv__SetImuCalibration_Request * lhs, const leo_msgs__srv__SetImuCalibration_Request * rhs);

/// Copy a srv/SetImuCalibration message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Request__copy(
  const leo_msgs__srv__SetImuCalibration_Request * input,
  leo_msgs__srv__SetImuCalibration_Request * output);

/// Initialize array of srv/SetImuCalibration messages.
/**
 * It allocates the memory for the number of elements and calls
 * leo_msgs__srv__SetImuCalibration_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Request__Sequence__init(leo_msgs__srv__SetImuCalibration_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetImuCalibration messages.
/**
 * It calls
 * leo_msgs__srv__SetImuCalibration_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Request__Sequence__fini(leo_msgs__srv__SetImuCalibration_Request__Sequence * array);

/// Create array of srv/SetImuCalibration messages.
/**
 * It allocates the memory for the array and calls
 * leo_msgs__srv__SetImuCalibration_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
leo_msgs__srv__SetImuCalibration_Request__Sequence *
leo_msgs__srv__SetImuCalibration_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetImuCalibration messages.
/**
 * It calls
 * leo_msgs__srv__SetImuCalibration_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Request__Sequence__destroy(leo_msgs__srv__SetImuCalibration_Request__Sequence * array);

/// Check for srv/SetImuCalibration message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Request__Sequence__are_equal(const leo_msgs__srv__SetImuCalibration_Request__Sequence * lhs, const leo_msgs__srv__SetImuCalibration_Request__Sequence * rhs);

/// Copy an array of srv/SetImuCalibration messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Request__Sequence__copy(
  const leo_msgs__srv__SetImuCalibration_Request__Sequence * input,
  leo_msgs__srv__SetImuCalibration_Request__Sequence * output);

/// Initialize srv/SetImuCalibration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leo_msgs__srv__SetImuCalibration_Response
 * )) before or use
 * leo_msgs__srv__SetImuCalibration_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Response__init(leo_msgs__srv__SetImuCalibration_Response * msg);

/// Finalize srv/SetImuCalibration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Response__fini(leo_msgs__srv__SetImuCalibration_Response * msg);

/// Create srv/SetImuCalibration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leo_msgs__srv__SetImuCalibration_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
leo_msgs__srv__SetImuCalibration_Response *
leo_msgs__srv__SetImuCalibration_Response__create();

/// Destroy srv/SetImuCalibration message.
/**
 * It calls
 * leo_msgs__srv__SetImuCalibration_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Response__destroy(leo_msgs__srv__SetImuCalibration_Response * msg);

/// Check for srv/SetImuCalibration message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Response__are_equal(const leo_msgs__srv__SetImuCalibration_Response * lhs, const leo_msgs__srv__SetImuCalibration_Response * rhs);

/// Copy a srv/SetImuCalibration message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Response__copy(
  const leo_msgs__srv__SetImuCalibration_Response * input,
  leo_msgs__srv__SetImuCalibration_Response * output);

/// Initialize array of srv/SetImuCalibration messages.
/**
 * It allocates the memory for the number of elements and calls
 * leo_msgs__srv__SetImuCalibration_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Response__Sequence__init(leo_msgs__srv__SetImuCalibration_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetImuCalibration messages.
/**
 * It calls
 * leo_msgs__srv__SetImuCalibration_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Response__Sequence__fini(leo_msgs__srv__SetImuCalibration_Response__Sequence * array);

/// Create array of srv/SetImuCalibration messages.
/**
 * It allocates the memory for the array and calls
 * leo_msgs__srv__SetImuCalibration_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
leo_msgs__srv__SetImuCalibration_Response__Sequence *
leo_msgs__srv__SetImuCalibration_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetImuCalibration messages.
/**
 * It calls
 * leo_msgs__srv__SetImuCalibration_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
void
leo_msgs__srv__SetImuCalibration_Response__Sequence__destroy(leo_msgs__srv__SetImuCalibration_Response__Sequence * array);

/// Check for srv/SetImuCalibration message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Response__Sequence__are_equal(const leo_msgs__srv__SetImuCalibration_Response__Sequence * lhs, const leo_msgs__srv__SetImuCalibration_Response__Sequence * rhs);

/// Copy an array of srv/SetImuCalibration messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leo_msgs
bool
leo_msgs__srv__SetImuCalibration_Response__Sequence__copy(
  const leo_msgs__srv__SetImuCalibration_Response__Sequence * input,
  leo_msgs__srv__SetImuCalibration_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEO_MSGS__SRV__DETAIL__SET_IMU_CALIBRATION__FUNCTIONS_H_
