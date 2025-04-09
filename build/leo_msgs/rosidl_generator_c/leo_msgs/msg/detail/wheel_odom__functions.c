// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leo_msgs:msg/WheelOdom.idl
// generated code does not contain a copyright notice
#include "leo_msgs/msg/detail/wheel_odom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
leo_msgs__msg__WheelOdom__init(leo_msgs__msg__WheelOdom * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    leo_msgs__msg__WheelOdom__fini(msg);
    return false;
  }
  // velocity_lin
  // velocity_ang
  // pose_x
  // pose_y
  // pose_yaw
  return true;
}

void
leo_msgs__msg__WheelOdom__fini(leo_msgs__msg__WheelOdom * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // velocity_lin
  // velocity_ang
  // pose_x
  // pose_y
  // pose_yaw
}

bool
leo_msgs__msg__WheelOdom__are_equal(const leo_msgs__msg__WheelOdom * lhs, const leo_msgs__msg__WheelOdom * rhs)
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
  // velocity_lin
  if (lhs->velocity_lin != rhs->velocity_lin) {
    return false;
  }
  // velocity_ang
  if (lhs->velocity_ang != rhs->velocity_ang) {
    return false;
  }
  // pose_x
  if (lhs->pose_x != rhs->pose_x) {
    return false;
  }
  // pose_y
  if (lhs->pose_y != rhs->pose_y) {
    return false;
  }
  // pose_yaw
  if (lhs->pose_yaw != rhs->pose_yaw) {
    return false;
  }
  return true;
}

bool
leo_msgs__msg__WheelOdom__copy(
  const leo_msgs__msg__WheelOdom * input,
  leo_msgs__msg__WheelOdom * output)
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
  // velocity_lin
  output->velocity_lin = input->velocity_lin;
  // velocity_ang
  output->velocity_ang = input->velocity_ang;
  // pose_x
  output->pose_x = input->pose_x;
  // pose_y
  output->pose_y = input->pose_y;
  // pose_yaw
  output->pose_yaw = input->pose_yaw;
  return true;
}

leo_msgs__msg__WheelOdom *
leo_msgs__msg__WheelOdom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__WheelOdom * msg = (leo_msgs__msg__WheelOdom *)allocator.allocate(sizeof(leo_msgs__msg__WheelOdom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leo_msgs__msg__WheelOdom));
  bool success = leo_msgs__msg__WheelOdom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leo_msgs__msg__WheelOdom__destroy(leo_msgs__msg__WheelOdom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leo_msgs__msg__WheelOdom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leo_msgs__msg__WheelOdom__Sequence__init(leo_msgs__msg__WheelOdom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__WheelOdom * data = NULL;

  if (size) {
    data = (leo_msgs__msg__WheelOdom *)allocator.zero_allocate(size, sizeof(leo_msgs__msg__WheelOdom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leo_msgs__msg__WheelOdom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leo_msgs__msg__WheelOdom__fini(&data[i - 1]);
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
leo_msgs__msg__WheelOdom__Sequence__fini(leo_msgs__msg__WheelOdom__Sequence * array)
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
      leo_msgs__msg__WheelOdom__fini(&array->data[i]);
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

leo_msgs__msg__WheelOdom__Sequence *
leo_msgs__msg__WheelOdom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__WheelOdom__Sequence * array = (leo_msgs__msg__WheelOdom__Sequence *)allocator.allocate(sizeof(leo_msgs__msg__WheelOdom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leo_msgs__msg__WheelOdom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leo_msgs__msg__WheelOdom__Sequence__destroy(leo_msgs__msg__WheelOdom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leo_msgs__msg__WheelOdom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leo_msgs__msg__WheelOdom__Sequence__are_equal(const leo_msgs__msg__WheelOdom__Sequence * lhs, const leo_msgs__msg__WheelOdom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leo_msgs__msg__WheelOdom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leo_msgs__msg__WheelOdom__Sequence__copy(
  const leo_msgs__msg__WheelOdom__Sequence * input,
  leo_msgs__msg__WheelOdom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leo_msgs__msg__WheelOdom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leo_msgs__msg__WheelOdom * data =
      (leo_msgs__msg__WheelOdom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leo_msgs__msg__WheelOdom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leo_msgs__msg__WheelOdom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leo_msgs__msg__WheelOdom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
