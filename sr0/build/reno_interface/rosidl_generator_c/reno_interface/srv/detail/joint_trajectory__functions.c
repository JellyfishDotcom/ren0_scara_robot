// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice
#include "reno_interface/srv/detail/joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `initial_point`
// Member `final_point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
reno_interface__srv__JointTrajectory_Request__init(reno_interface__srv__JointTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // initial_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->initial_point)) {
    reno_interface__srv__JointTrajectory_Request__fini(msg);
    return false;
  }
  // final_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->final_point)) {
    reno_interface__srv__JointTrajectory_Request__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__srv__JointTrajectory_Request__fini(reno_interface__srv__JointTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // initial_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->initial_point);
  // final_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->final_point);
}

bool
reno_interface__srv__JointTrajectory_Request__are_equal(const reno_interface__srv__JointTrajectory_Request * lhs, const reno_interface__srv__JointTrajectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // initial_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->initial_point), &(rhs->initial_point)))
  {
    return false;
  }
  // final_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->final_point), &(rhs->final_point)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__srv__JointTrajectory_Request__copy(
  const reno_interface__srv__JointTrajectory_Request * input,
  reno_interface__srv__JointTrajectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // initial_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->initial_point), &(output->initial_point)))
  {
    return false;
  }
  // final_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->final_point), &(output->final_point)))
  {
    return false;
  }
  return true;
}

reno_interface__srv__JointTrajectory_Request *
reno_interface__srv__JointTrajectory_Request__create()
{
  reno_interface__srv__JointTrajectory_Request * msg = (reno_interface__srv__JointTrajectory_Request *)malloc(sizeof(reno_interface__srv__JointTrajectory_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__srv__JointTrajectory_Request));
  bool success = reno_interface__srv__JointTrajectory_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__srv__JointTrajectory_Request__destroy(reno_interface__srv__JointTrajectory_Request * msg)
{
  if (msg) {
    reno_interface__srv__JointTrajectory_Request__fini(msg);
  }
  free(msg);
}


bool
reno_interface__srv__JointTrajectory_Request__Sequence__init(reno_interface__srv__JointTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__srv__JointTrajectory_Request * data = NULL;
  if (size) {
    data = (reno_interface__srv__JointTrajectory_Request *)calloc(size, sizeof(reno_interface__srv__JointTrajectory_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__srv__JointTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__srv__JointTrajectory_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reno_interface__srv__JointTrajectory_Request__Sequence__fini(reno_interface__srv__JointTrajectory_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__srv__JointTrajectory_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reno_interface__srv__JointTrajectory_Request__Sequence *
reno_interface__srv__JointTrajectory_Request__Sequence__create(size_t size)
{
  reno_interface__srv__JointTrajectory_Request__Sequence * array = (reno_interface__srv__JointTrajectory_Request__Sequence *)malloc(sizeof(reno_interface__srv__JointTrajectory_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__srv__JointTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__srv__JointTrajectory_Request__Sequence__destroy(reno_interface__srv__JointTrajectory_Request__Sequence * array)
{
  if (array) {
    reno_interface__srv__JointTrajectory_Request__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__srv__JointTrajectory_Request__Sequence__are_equal(const reno_interface__srv__JointTrajectory_Request__Sequence * lhs, const reno_interface__srv__JointTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__srv__JointTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__srv__JointTrajectory_Request__Sequence__copy(
  const reno_interface__srv__JointTrajectory_Request__Sequence * input,
  reno_interface__srv__JointTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__srv__JointTrajectory_Request);
    reno_interface__srv__JointTrajectory_Request * data =
      (reno_interface__srv__JointTrajectory_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__srv__JointTrajectory_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__srv__JointTrajectory_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reno_interface__srv__JointTrajectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
reno_interface__srv__JointTrajectory_Response__init(reno_interface__srv__JointTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    reno_interface__srv__JointTrajectory_Response__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__srv__JointTrajectory_Response__fini(reno_interface__srv__JointTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
}

bool
reno_interface__srv__JointTrajectory_Response__are_equal(const reno_interface__srv__JointTrajectory_Response * lhs, const reno_interface__srv__JointTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__srv__JointTrajectory_Response__copy(
  const reno_interface__srv__JointTrajectory_Response * input,
  reno_interface__srv__JointTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  return true;
}

reno_interface__srv__JointTrajectory_Response *
reno_interface__srv__JointTrajectory_Response__create()
{
  reno_interface__srv__JointTrajectory_Response * msg = (reno_interface__srv__JointTrajectory_Response *)malloc(sizeof(reno_interface__srv__JointTrajectory_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__srv__JointTrajectory_Response));
  bool success = reno_interface__srv__JointTrajectory_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__srv__JointTrajectory_Response__destroy(reno_interface__srv__JointTrajectory_Response * msg)
{
  if (msg) {
    reno_interface__srv__JointTrajectory_Response__fini(msg);
  }
  free(msg);
}


bool
reno_interface__srv__JointTrajectory_Response__Sequence__init(reno_interface__srv__JointTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__srv__JointTrajectory_Response * data = NULL;
  if (size) {
    data = (reno_interface__srv__JointTrajectory_Response *)calloc(size, sizeof(reno_interface__srv__JointTrajectory_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__srv__JointTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__srv__JointTrajectory_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reno_interface__srv__JointTrajectory_Response__Sequence__fini(reno_interface__srv__JointTrajectory_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__srv__JointTrajectory_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reno_interface__srv__JointTrajectory_Response__Sequence *
reno_interface__srv__JointTrajectory_Response__Sequence__create(size_t size)
{
  reno_interface__srv__JointTrajectory_Response__Sequence * array = (reno_interface__srv__JointTrajectory_Response__Sequence *)malloc(sizeof(reno_interface__srv__JointTrajectory_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__srv__JointTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__srv__JointTrajectory_Response__Sequence__destroy(reno_interface__srv__JointTrajectory_Response__Sequence * array)
{
  if (array) {
    reno_interface__srv__JointTrajectory_Response__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__srv__JointTrajectory_Response__Sequence__are_equal(const reno_interface__srv__JointTrajectory_Response__Sequence * lhs, const reno_interface__srv__JointTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__srv__JointTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__srv__JointTrajectory_Response__Sequence__copy(
  const reno_interface__srv__JointTrajectory_Response__Sequence * input,
  reno_interface__srv__JointTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__srv__JointTrajectory_Response);
    reno_interface__srv__JointTrajectory_Response * data =
      (reno_interface__srv__JointTrajectory_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__srv__JointTrajectory_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__srv__JointTrajectory_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!reno_interface__srv__JointTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
