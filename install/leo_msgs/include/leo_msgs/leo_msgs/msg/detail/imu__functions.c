// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leo_msgs:msg/Imu.idl
// generated code does not contain a copyright notice
#include "leo_msgs/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
leo_msgs__msg__Imu__init(leo_msgs__msg__Imu * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    leo_msgs__msg__Imu__fini(msg);
    return false;
  }
  // temperature
  // gyro_x
  // gyro_y
  // gyro_z
  // accel_x
  // accel_y
  // accel_z
  return true;
}

void
leo_msgs__msg__Imu__fini(leo_msgs__msg__Imu * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // temperature
  // gyro_x
  // gyro_y
  // gyro_z
  // accel_x
  // accel_y
  // accel_z
}

bool
leo_msgs__msg__Imu__are_equal(const leo_msgs__msg__Imu * lhs, const leo_msgs__msg__Imu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // accel_x
  if (lhs->accel_x != rhs->accel_x) {
    return false;
  }
  // accel_y
  if (lhs->accel_y != rhs->accel_y) {
    return false;
  }
  // accel_z
  if (lhs->accel_z != rhs->accel_z) {
    return false;
  }
  return true;
}

bool
leo_msgs__msg__Imu__copy(
  const leo_msgs__msg__Imu * input,
  leo_msgs__msg__Imu * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  return true;
}

leo_msgs__msg__Imu *
leo_msgs__msg__Imu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__Imu * msg = (leo_msgs__msg__Imu *)allocator.allocate(sizeof(leo_msgs__msg__Imu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leo_msgs__msg__Imu));
  bool success = leo_msgs__msg__Imu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leo_msgs__msg__Imu__destroy(leo_msgs__msg__Imu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leo_msgs__msg__Imu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leo_msgs__msg__Imu__Sequence__init(leo_msgs__msg__Imu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__Imu * data = NULL;

  if (size) {
    data = (leo_msgs__msg__Imu *)allocator.zero_allocate(size, sizeof(leo_msgs__msg__Imu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leo_msgs__msg__Imu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leo_msgs__msg__Imu__fini(&data[i - 1]);
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
leo_msgs__msg__Imu__Sequence__fini(leo_msgs__msg__Imu__Sequence * array)
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
      leo_msgs__msg__Imu__fini(&array->data[i]);
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

leo_msgs__msg__Imu__Sequence *
leo_msgs__msg__Imu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__Imu__Sequence * array = (leo_msgs__msg__Imu__Sequence *)allocator.allocate(sizeof(leo_msgs__msg__Imu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leo_msgs__msg__Imu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leo_msgs__msg__Imu__Sequence__destroy(leo_msgs__msg__Imu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leo_msgs__msg__Imu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leo_msgs__msg__Imu__Sequence__are_equal(const leo_msgs__msg__Imu__Sequence * lhs, const leo_msgs__msg__Imu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leo_msgs__msg__Imu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leo_msgs__msg__Imu__Sequence__copy(
  const leo_msgs__msg__Imu__Sequence * input,
  leo_msgs__msg__Imu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leo_msgs__msg__Imu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leo_msgs__msg__Imu * data =
      (leo_msgs__msg__Imu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leo_msgs__msg__Imu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leo_msgs__msg__Imu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leo_msgs__msg__Imu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
