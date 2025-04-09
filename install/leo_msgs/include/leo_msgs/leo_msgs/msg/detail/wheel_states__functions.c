// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice
#include "leo_msgs/msg/detail/wheel_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
leo_msgs__msg__WheelStates__init(leo_msgs__msg__WheelStates * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    leo_msgs__msg__WheelStates__fini(msg);
    return false;
  }
  // position
  // velocity
  // torque
  // pwm_duty_cycle
  return true;
}

void
leo_msgs__msg__WheelStates__fini(leo_msgs__msg__WheelStates * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // position
  // velocity
  // torque
  // pwm_duty_cycle
}

bool
leo_msgs__msg__WheelStates__are_equal(const leo_msgs__msg__WheelStates * lhs, const leo_msgs__msg__WheelStates * rhs)
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
  // position
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // torque
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->torque[i] != rhs->torque[i]) {
      return false;
    }
  }
  // pwm_duty_cycle
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->pwm_duty_cycle[i] != rhs->pwm_duty_cycle[i]) {
      return false;
    }
  }
  return true;
}

bool
leo_msgs__msg__WheelStates__copy(
  const leo_msgs__msg__WheelStates * input,
  leo_msgs__msg__WheelStates * output)
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
  // position
  for (size_t i = 0; i < 4; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 4; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // torque
  for (size_t i = 0; i < 4; ++i) {
    output->torque[i] = input->torque[i];
  }
  // pwm_duty_cycle
  for (size_t i = 0; i < 4; ++i) {
    output->pwm_duty_cycle[i] = input->pwm_duty_cycle[i];
  }
  return true;
}

leo_msgs__msg__WheelStates *
leo_msgs__msg__WheelStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__WheelStates * msg = (leo_msgs__msg__WheelStates *)allocator.allocate(sizeof(leo_msgs__msg__WheelStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leo_msgs__msg__WheelStates));
  bool success = leo_msgs__msg__WheelStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leo_msgs__msg__WheelStates__destroy(leo_msgs__msg__WheelStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leo_msgs__msg__WheelStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leo_msgs__msg__WheelStates__Sequence__init(leo_msgs__msg__WheelStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__WheelStates * data = NULL;

  if (size) {
    data = (leo_msgs__msg__WheelStates *)allocator.zero_allocate(size, sizeof(leo_msgs__msg__WheelStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leo_msgs__msg__WheelStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leo_msgs__msg__WheelStates__fini(&data[i - 1]);
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
leo_msgs__msg__WheelStates__Sequence__fini(leo_msgs__msg__WheelStates__Sequence * array)
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
      leo_msgs__msg__WheelStates__fini(&array->data[i]);
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

leo_msgs__msg__WheelStates__Sequence *
leo_msgs__msg__WheelStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leo_msgs__msg__WheelStates__Sequence * array = (leo_msgs__msg__WheelStates__Sequence *)allocator.allocate(sizeof(leo_msgs__msg__WheelStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leo_msgs__msg__WheelStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leo_msgs__msg__WheelStates__Sequence__destroy(leo_msgs__msg__WheelStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leo_msgs__msg__WheelStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leo_msgs__msg__WheelStates__Sequence__are_equal(const leo_msgs__msg__WheelStates__Sequence * lhs, const leo_msgs__msg__WheelStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leo_msgs__msg__WheelStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leo_msgs__msg__WheelStates__Sequence__copy(
  const leo_msgs__msg__WheelStates__Sequence * input,
  leo_msgs__msg__WheelStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leo_msgs__msg__WheelStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leo_msgs__msg__WheelStates * data =
      (leo_msgs__msg__WheelStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leo_msgs__msg__WheelStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leo_msgs__msg__WheelStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leo_msgs__msg__WheelStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
