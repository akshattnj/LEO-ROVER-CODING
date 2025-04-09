// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice
#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ee_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  // ee_pose
  if (!geometry_msgs__msg__Pose__init(&msg->ee_pose)) {
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(msg);
    return false;
  }
  return true;
}

void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  // ee_pose
  geometry_msgs__msg__Pose__fini(&msg->ee_pose);
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (lhs->cmd != rhs->cmd) {
    return false;
  }
  // ee_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->ee_pose), &(rhs->ee_pose)))
  {
    return false;
  }
  return true;
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  output->cmd = input->cmd;
  // ee_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->ee_pose), &(output->ee_pose)))
  {
    return false;
  }
  return true;
}

interbotix_moveit_interface_msgs__srv__MoveItPlan_Request *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg = (interbotix_moveit_interface_msgs__srv__MoveItPlan_Request *)allocator.allocate(sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request));
  bool success = interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * data = NULL;

  if (size) {
    data = (interbotix_moveit_interface_msgs__srv__MoveItPlan_Request *)allocator.zero_allocate(size, sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(&data[i - 1]);
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
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array)
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
      interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(&array->data[i]);
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

interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array = (interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence *)allocator.allocate(sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * data =
      (interbotix_moveit_interface_msgs__srv__MoveItPlan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `msg`
#include "std_msgs/msg/detail/string__functions.h"

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // msg
  if (!std_msgs__msg__String__init(&msg->msg)) {
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // msg
  std_msgs__msg__String__fini(&msg->msg);
  // success
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg
  if (!std_msgs__msg__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // msg
  if (!std_msgs__msg__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

interbotix_moveit_interface_msgs__srv__MoveItPlan_Response *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg = (interbotix_moveit_interface_msgs__srv__MoveItPlan_Response *)allocator.allocate(sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response));
  bool success = interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * data = NULL;

  if (size) {
    data = (interbotix_moveit_interface_msgs__srv__MoveItPlan_Response *)allocator.zero_allocate(size, sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(&data[i - 1]);
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
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array)
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
      interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(&array->data[i]);
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

interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array = (interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence *)allocator.allocate(sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * data =
      (interbotix_moveit_interface_msgs__srv__MoveItPlan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
