// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scara_interfaces:srv/JointTrajectory.idl
// generated code does not contain a copyright notice
#include "scara_interfaces/srv/detail/joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `initial_point`
// Member `final_point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
scara_interfaces__srv__JointTrajectory_Request__init(scara_interfaces__srv__JointTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // initial_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->initial_point)) {
    scara_interfaces__srv__JointTrajectory_Request__fini(msg);
    return false;
  }
  // final_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->final_point)) {
    scara_interfaces__srv__JointTrajectory_Request__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__srv__JointTrajectory_Request__fini(scara_interfaces__srv__JointTrajectory_Request * msg)
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
scara_interfaces__srv__JointTrajectory_Request__are_equal(const scara_interfaces__srv__JointTrajectory_Request * lhs, const scara_interfaces__srv__JointTrajectory_Request * rhs)
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
scara_interfaces__srv__JointTrajectory_Request__copy(
  const scara_interfaces__srv__JointTrajectory_Request * input,
  scara_interfaces__srv__JointTrajectory_Request * output)
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

scara_interfaces__srv__JointTrajectory_Request *
scara_interfaces__srv__JointTrajectory_Request__create()
{
  scara_interfaces__srv__JointTrajectory_Request * msg = (scara_interfaces__srv__JointTrajectory_Request *)malloc(sizeof(scara_interfaces__srv__JointTrajectory_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__srv__JointTrajectory_Request));
  bool success = scara_interfaces__srv__JointTrajectory_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__srv__JointTrajectory_Request__destroy(scara_interfaces__srv__JointTrajectory_Request * msg)
{
  if (msg) {
    scara_interfaces__srv__JointTrajectory_Request__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__srv__JointTrajectory_Request__Sequence__init(scara_interfaces__srv__JointTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__srv__JointTrajectory_Request * data = NULL;
  if (size) {
    data = (scara_interfaces__srv__JointTrajectory_Request *)calloc(size, sizeof(scara_interfaces__srv__JointTrajectory_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__srv__JointTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__srv__JointTrajectory_Request__fini(&data[i - 1]);
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
scara_interfaces__srv__JointTrajectory_Request__Sequence__fini(scara_interfaces__srv__JointTrajectory_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__srv__JointTrajectory_Request__fini(&array->data[i]);
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

scara_interfaces__srv__JointTrajectory_Request__Sequence *
scara_interfaces__srv__JointTrajectory_Request__Sequence__create(size_t size)
{
  scara_interfaces__srv__JointTrajectory_Request__Sequence * array = (scara_interfaces__srv__JointTrajectory_Request__Sequence *)malloc(sizeof(scara_interfaces__srv__JointTrajectory_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__srv__JointTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__srv__JointTrajectory_Request__Sequence__destroy(scara_interfaces__srv__JointTrajectory_Request__Sequence * array)
{
  if (array) {
    scara_interfaces__srv__JointTrajectory_Request__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__srv__JointTrajectory_Request__Sequence__are_equal(const scara_interfaces__srv__JointTrajectory_Request__Sequence * lhs, const scara_interfaces__srv__JointTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__srv__JointTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__srv__JointTrajectory_Request__Sequence__copy(
  const scara_interfaces__srv__JointTrajectory_Request__Sequence * input,
  scara_interfaces__srv__JointTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__srv__JointTrajectory_Request);
    scara_interfaces__srv__JointTrajectory_Request * data =
      (scara_interfaces__srv__JointTrajectory_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__srv__JointTrajectory_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__srv__JointTrajectory_Request__fini(&data[i]);
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
    if (!scara_interfaces__srv__JointTrajectory_Request__copy(
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
scara_interfaces__srv__JointTrajectory_Response__init(scara_interfaces__srv__JointTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    scara_interfaces__srv__JointTrajectory_Response__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__srv__JointTrajectory_Response__fini(scara_interfaces__srv__JointTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
}

bool
scara_interfaces__srv__JointTrajectory_Response__are_equal(const scara_interfaces__srv__JointTrajectory_Response * lhs, const scara_interfaces__srv__JointTrajectory_Response * rhs)
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
scara_interfaces__srv__JointTrajectory_Response__copy(
  const scara_interfaces__srv__JointTrajectory_Response * input,
  scara_interfaces__srv__JointTrajectory_Response * output)
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

scara_interfaces__srv__JointTrajectory_Response *
scara_interfaces__srv__JointTrajectory_Response__create()
{
  scara_interfaces__srv__JointTrajectory_Response * msg = (scara_interfaces__srv__JointTrajectory_Response *)malloc(sizeof(scara_interfaces__srv__JointTrajectory_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__srv__JointTrajectory_Response));
  bool success = scara_interfaces__srv__JointTrajectory_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__srv__JointTrajectory_Response__destroy(scara_interfaces__srv__JointTrajectory_Response * msg)
{
  if (msg) {
    scara_interfaces__srv__JointTrajectory_Response__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__srv__JointTrajectory_Response__Sequence__init(scara_interfaces__srv__JointTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__srv__JointTrajectory_Response * data = NULL;
  if (size) {
    data = (scara_interfaces__srv__JointTrajectory_Response *)calloc(size, sizeof(scara_interfaces__srv__JointTrajectory_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__srv__JointTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__srv__JointTrajectory_Response__fini(&data[i - 1]);
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
scara_interfaces__srv__JointTrajectory_Response__Sequence__fini(scara_interfaces__srv__JointTrajectory_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__srv__JointTrajectory_Response__fini(&array->data[i]);
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

scara_interfaces__srv__JointTrajectory_Response__Sequence *
scara_interfaces__srv__JointTrajectory_Response__Sequence__create(size_t size)
{
  scara_interfaces__srv__JointTrajectory_Response__Sequence * array = (scara_interfaces__srv__JointTrajectory_Response__Sequence *)malloc(sizeof(scara_interfaces__srv__JointTrajectory_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__srv__JointTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__srv__JointTrajectory_Response__Sequence__destroy(scara_interfaces__srv__JointTrajectory_Response__Sequence * array)
{
  if (array) {
    scara_interfaces__srv__JointTrajectory_Response__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__srv__JointTrajectory_Response__Sequence__are_equal(const scara_interfaces__srv__JointTrajectory_Response__Sequence * lhs, const scara_interfaces__srv__JointTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__srv__JointTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__srv__JointTrajectory_Response__Sequence__copy(
  const scara_interfaces__srv__JointTrajectory_Response__Sequence * input,
  scara_interfaces__srv__JointTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__srv__JointTrajectory_Response);
    scara_interfaces__srv__JointTrajectory_Response * data =
      (scara_interfaces__srv__JointTrajectory_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__srv__JointTrajectory_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__srv__JointTrajectory_Response__fini(&data[i]);
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
    if (!scara_interfaces__srv__JointTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
