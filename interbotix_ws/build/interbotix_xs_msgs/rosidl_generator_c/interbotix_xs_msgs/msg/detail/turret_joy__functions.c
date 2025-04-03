// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_xs_msgs:msg/TurretJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/turret_joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interbotix_xs_msgs__msg__TurretJoy__init(interbotix_xs_msgs__msg__TurretJoy * msg)
{
  if (!msg) {
    return false;
  }
  // pan_cmd
  // tilt_cmd
  // speed_cmd
  // speed_toggle_cmd
  return true;
}

void
interbotix_xs_msgs__msg__TurretJoy__fini(interbotix_xs_msgs__msg__TurretJoy * msg)
{
  if (!msg) {
    return;
  }
  // pan_cmd
  // tilt_cmd
  // speed_cmd
  // speed_toggle_cmd
}

bool
interbotix_xs_msgs__msg__TurretJoy__are_equal(const interbotix_xs_msgs__msg__TurretJoy * lhs, const interbotix_xs_msgs__msg__TurretJoy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pan_cmd
  if (lhs->pan_cmd != rhs->pan_cmd) {
    return false;
  }
  // tilt_cmd
  if (lhs->tilt_cmd != rhs->tilt_cmd) {
    return false;
  }
  // speed_cmd
  if (lhs->speed_cmd != rhs->speed_cmd) {
    return false;
  }
  // speed_toggle_cmd
  if (lhs->speed_toggle_cmd != rhs->speed_toggle_cmd) {
    return false;
  }
  return true;
}

bool
interbotix_xs_msgs__msg__TurretJoy__copy(
  const interbotix_xs_msgs__msg__TurretJoy * input,
  interbotix_xs_msgs__msg__TurretJoy * output)
{
  if (!input || !output) {
    return false;
  }
  // pan_cmd
  output->pan_cmd = input->pan_cmd;
  // tilt_cmd
  output->tilt_cmd = input->tilt_cmd;
  // speed_cmd
  output->speed_cmd = input->speed_cmd;
  // speed_toggle_cmd
  output->speed_toggle_cmd = input->speed_toggle_cmd;
  return true;
}

interbotix_xs_msgs__msg__TurretJoy *
interbotix_xs_msgs__msg__TurretJoy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__msg__TurretJoy * msg = (interbotix_xs_msgs__msg__TurretJoy *)allocator.allocate(sizeof(interbotix_xs_msgs__msg__TurretJoy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_xs_msgs__msg__TurretJoy));
  bool success = interbotix_xs_msgs__msg__TurretJoy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_xs_msgs__msg__TurretJoy__destroy(interbotix_xs_msgs__msg__TurretJoy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_xs_msgs__msg__TurretJoy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_xs_msgs__msg__TurretJoy__Sequence__init(interbotix_xs_msgs__msg__TurretJoy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__msg__TurretJoy * data = NULL;

  if (size) {
    data = (interbotix_xs_msgs__msg__TurretJoy *)allocator.zero_allocate(size, sizeof(interbotix_xs_msgs__msg__TurretJoy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_xs_msgs__msg__TurretJoy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_xs_msgs__msg__TurretJoy__fini(&data[i - 1]);
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
interbotix_xs_msgs__msg__TurretJoy__Sequence__fini(interbotix_xs_msgs__msg__TurretJoy__Sequence * array)
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
      interbotix_xs_msgs__msg__TurretJoy__fini(&array->data[i]);
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

interbotix_xs_msgs__msg__TurretJoy__Sequence *
interbotix_xs_msgs__msg__TurretJoy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_xs_msgs__msg__TurretJoy__Sequence * array = (interbotix_xs_msgs__msg__TurretJoy__Sequence *)allocator.allocate(sizeof(interbotix_xs_msgs__msg__TurretJoy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_xs_msgs__msg__TurretJoy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_xs_msgs__msg__TurretJoy__Sequence__destroy(interbotix_xs_msgs__msg__TurretJoy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_xs_msgs__msg__TurretJoy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_xs_msgs__msg__TurretJoy__Sequence__are_equal(const interbotix_xs_msgs__msg__TurretJoy__Sequence * lhs, const interbotix_xs_msgs__msg__TurretJoy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_xs_msgs__msg__TurretJoy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_xs_msgs__msg__TurretJoy__Sequence__copy(
  const interbotix_xs_msgs__msg__TurretJoy__Sequence * input,
  interbotix_xs_msgs__msg__TurretJoy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_xs_msgs__msg__TurretJoy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_xs_msgs__msg__TurretJoy * data =
      (interbotix_xs_msgs__msg__TurretJoy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_xs_msgs__msg__TurretJoy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_xs_msgs__msg__TurretJoy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_xs_msgs__msg__TurretJoy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
