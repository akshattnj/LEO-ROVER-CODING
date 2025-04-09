// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice
#include "leo_msgs/srv/detail/set_imu_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
leo_msgs__srv__SetImuCalibration_Request__init(leo_msgs__srv__SetImuCalibration_Request * msg)
{
  if (!msg) {
    return false;
  }
  // gyro_bias_x
  // gyro_bias_y
  // gyro_bias_z
  return true;
}

void
leo_msgs__srv__SetImuCalibration_Request__fini(leo_msgs__srv__SetImuCalibration_Request * msg)
{
  if (!msg) {
    return;
  }
  // gyro_bias_x
  // gyro_bias_y
  // gyro_bias_z
}

bool
leo_msgs__srv__SetImuCalibration_Request__are_equal(const leo_msgs__srv__SetImuCalibration_Request * lhs, const leo_msgs__srv__SetImuCalibration_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gyro_bias_x
  if (lhs->gyro_bias_x != rhs->gyro_bias_x) {
    return false;
  }
  // gyro_bias_y
  if (lhs->gyro_bias_y != rhs->gyro_bias_y) {
    return false;
  }
  // gyro_bias_z
  if (lhs->gyro_bias_z != rhs->gyro_bias_z) {
    return false;
  }
  return true;
}

bool
leo_msgs__srv__SetImuCalibration_Request__copy(
  const leo_msgs__srv__SetImuCalibration_Request * input,
  leo_msgs__srv__SetImuCalibration_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // gyro_bias_x
  output->gyro_bias_x = input->gyro_bias_x;
  // gyro_bias_y
  output->gyro_bias_y = input->gyro_bias_y;
  // gyro_bias_z
  output->gyro_bias_z = input->gyro_bias_z;
  return true;
}

leo_msgs__srv__SetImuCalibration_Request *
leo_msgs__srv__SetImuCalibration_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__srv__SetImuCalibration_Request * msg = (leo_msgs__srv__SetImuCalibration_Request *)allocator.allocate(sizeof(leo_msgs__srv__SetImuCalibration_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leo_msgs__srv__SetImuCalibration_Request));
  bool success = leo_msgs__srv__SetImuCalibration_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leo_msgs__srv__SetImuCalibration_Request__destroy(leo_msgs__srv__SetImuCalibration_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leo_msgs__srv__SetImuCalibration_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leo_msgs__srv__SetImuCalibration_Request__Sequence__init(leo_msgs__srv__SetImuCalibration_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__srv__SetImuCalibration_Request * data = NULL;

  if (size) {
    data = (leo_msgs__srv__SetImuCalibration_Request *)allocator.zero_allocate(size, sizeof(leo_msgs__srv__SetImuCalibration_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leo_msgs__srv__SetImuCalibration_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leo_msgs__srv__SetImuCalibration_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
leo_msgs__srv__SetImuCalibration_Request__Sequence__fini(leo_msgs__srv__SetImuCalibration_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leo_msgs__srv__SetImuCalibration_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

leo_msgs__srv__SetImuCalibration_Request__Sequence *
leo_msgs__srv__SetImuCalibration_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__srv__SetImuCalibration_Request__Sequence * array = (leo_msgs__srv__SetImuCalibration_Request__Sequence *)allocator.allocate(sizeof(leo_msgs__srv__SetImuCalibration_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leo_msgs__srv__SetImuCalibration_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leo_msgs__srv__SetImuCalibration_Request__Sequence__destroy(leo_msgs__srv__SetImuCalibration_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leo_msgs__srv__SetImuCalibration_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leo_msgs__srv__SetImuCalibration_Request__Sequence__are_equal(const leo_msgs__srv__SetImuCalibration_Request__Sequence * lhs, const leo_msgs__srv__SetImuCalibration_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leo_msgs__srv__SetImuCalibration_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leo_msgs__srv__SetImuCalibration_Request__Sequence__copy(
  const leo_msgs__srv__SetImuCalibration_Request__Sequence * input,
  leo_msgs__srv__SetImuCalibration_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leo_msgs__srv__SetImuCalibration_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leo_msgs__srv__SetImuCalibration_Request * data =
      (leo_msgs__srv__SetImuCalibration_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leo_msgs__srv__SetImuCalibration_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leo_msgs__srv__SetImuCalibration_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leo_msgs__srv__SetImuCalibration_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
leo_msgs__srv__SetImuCalibration_Response__init(leo_msgs__srv__SetImuCalibration_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
leo_msgs__srv__SetImuCalibration_Response__fini(leo_msgs__srv__SetImuCalibration_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
leo_msgs__srv__SetImuCalibration_Response__are_equal(const leo_msgs__srv__SetImuCalibration_Response * lhs, const leo_msgs__srv__SetImuCalibration_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
leo_msgs__srv__SetImuCalibration_Response__copy(
  const leo_msgs__srv__SetImuCalibration_Response * input,
  leo_msgs__srv__SetImuCalibration_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

leo_msgs__srv__SetImuCalibration_Response *
leo_msgs__srv__SetImuCalibration_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__srv__SetImuCalibration_Response * msg = (leo_msgs__srv__SetImuCalibration_Response *)allocator.allocate(sizeof(leo_msgs__srv__SetImuCalibration_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leo_msgs__srv__SetImuCalibration_Response));
  bool success = leo_msgs__srv__SetImuCalibration_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leo_msgs__srv__SetImuCalibration_Response__destroy(leo_msgs__srv__SetImuCalibration_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leo_msgs__srv__SetImuCalibration_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leo_msgs__srv__SetImuCalibration_Response__Sequence__init(leo_msgs__srv__SetImuCalibration_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__srv__SetImuCalibration_Response * data = NULL;

  if (size) {
    data = (leo_msgs__srv__SetImuCalibration_Response *)allocator.zero_allocate(size, sizeof(leo_msgs__srv__SetImuCalibration_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leo_msgs__srv__SetImuCalibration_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leo_msgs__srv__SetImuCalibration_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
leo_msgs__srv__SetImuCalibration_Response__Sequence__fini(leo_msgs__srv__SetImuCalibration_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leo_msgs__srv__SetImuCalibration_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

leo_msgs__srv__SetImuCalibration_Response__Sequence *
leo_msgs__srv__SetImuCalibration_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__srv__SetImuCalibration_Response__Sequence * array = (leo_msgs__srv__SetImuCalibration_Response__Sequence *)allocator.allocate(sizeof(leo_msgs__srv__SetImuCalibration_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leo_msgs__srv__SetImuCalibration_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leo_msgs__srv__SetImuCalibration_Response__Sequence__destroy(leo_msgs__srv__SetImuCalibration_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leo_msgs__srv__SetImuCalibration_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leo_msgs__srv__SetImuCalibration_Response__Sequence__are_equal(const leo_msgs__srv__SetImuCalibration_Response__Sequence * lhs, const leo_msgs__srv__SetImuCalibration_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leo_msgs__srv__SetImuCalibration_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leo_msgs__srv__SetImuCalibration_Response__Sequence__copy(
  const leo_msgs__srv__SetImuCalibration_Response__Sequence * input,
  leo_msgs__srv__SetImuCalibration_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leo_msgs__srv__SetImuCalibration_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leo_msgs__srv__SetImuCalibration_Response * data =
      (leo_msgs__srv__SetImuCalibration_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leo_msgs__srv__SetImuCalibration_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leo_msgs__srv__SetImuCalibration_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leo_msgs__srv__SetImuCalibration_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
