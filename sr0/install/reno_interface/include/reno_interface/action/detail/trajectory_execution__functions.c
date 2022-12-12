// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice
#include "reno_interface/action/detail/trajectory_execution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
reno_interface__action__TrajectoryExecution_Goal__init(reno_interface__action__TrajectoryExecution_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    reno_interface__action__TrajectoryExecution_Goal__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_Goal__fini(reno_interface__action__TrajectoryExecution_Goal * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
}

bool
reno_interface__action__TrajectoryExecution_Goal__are_equal(const reno_interface__action__TrajectoryExecution_Goal * lhs, const reno_interface__action__TrajectoryExecution_Goal * rhs)
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
reno_interface__action__TrajectoryExecution_Goal__copy(
  const reno_interface__action__TrajectoryExecution_Goal * input,
  reno_interface__action__TrajectoryExecution_Goal * output)
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

reno_interface__action__TrajectoryExecution_Goal *
reno_interface__action__TrajectoryExecution_Goal__create()
{
  reno_interface__action__TrajectoryExecution_Goal * msg = (reno_interface__action__TrajectoryExecution_Goal *)malloc(sizeof(reno_interface__action__TrajectoryExecution_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_Goal));
  bool success = reno_interface__action__TrajectoryExecution_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_Goal__destroy(reno_interface__action__TrajectoryExecution_Goal * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_Goal__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_Goal__Sequence__init(reno_interface__action__TrajectoryExecution_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_Goal * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_Goal *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_Goal__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_Goal__Sequence__fini(reno_interface__action__TrajectoryExecution_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_Goal__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_Goal__Sequence *
reno_interface__action__TrajectoryExecution_Goal__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_Goal__Sequence * array = (reno_interface__action__TrajectoryExecution_Goal__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_Goal__Sequence__destroy(reno_interface__action__TrajectoryExecution_Goal__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_Goal__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_Goal__Sequence * lhs, const reno_interface__action__TrajectoryExecution_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_Goal__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_Goal__Sequence * input,
  reno_interface__action__TrajectoryExecution_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_Goal);
    reno_interface__action__TrajectoryExecution_Goal * data =
      (reno_interface__action__TrajectoryExecution_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_Goal__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `final_point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
reno_interface__action__TrajectoryExecution_Result__init(reno_interface__action__TrajectoryExecution_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->final_point)) {
    reno_interface__action__TrajectoryExecution_Result__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_Result__fini(reno_interface__action__TrajectoryExecution_Result * msg)
{
  if (!msg) {
    return;
  }
  // final_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->final_point);
}

bool
reno_interface__action__TrajectoryExecution_Result__are_equal(const reno_interface__action__TrajectoryExecution_Result * lhs, const reno_interface__action__TrajectoryExecution_Result * rhs)
{
  if (!lhs || !rhs) {
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
reno_interface__action__TrajectoryExecution_Result__copy(
  const reno_interface__action__TrajectoryExecution_Result * input,
  reno_interface__action__TrajectoryExecution_Result * output)
{
  if (!input || !output) {
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

reno_interface__action__TrajectoryExecution_Result *
reno_interface__action__TrajectoryExecution_Result__create()
{
  reno_interface__action__TrajectoryExecution_Result * msg = (reno_interface__action__TrajectoryExecution_Result *)malloc(sizeof(reno_interface__action__TrajectoryExecution_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_Result));
  bool success = reno_interface__action__TrajectoryExecution_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_Result__destroy(reno_interface__action__TrajectoryExecution_Result * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_Result__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_Result__Sequence__init(reno_interface__action__TrajectoryExecution_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_Result * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_Result *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_Result__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_Result__Sequence__fini(reno_interface__action__TrajectoryExecution_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_Result__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_Result__Sequence *
reno_interface__action__TrajectoryExecution_Result__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_Result__Sequence * array = (reno_interface__action__TrajectoryExecution_Result__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_Result__Sequence__destroy(reno_interface__action__TrajectoryExecution_Result__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_Result__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_Result__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_Result__Sequence * lhs, const reno_interface__action__TrajectoryExecution_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_Result__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_Result__Sequence * input,
  reno_interface__action__TrajectoryExecution_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_Result);
    reno_interface__action__TrajectoryExecution_Result * data =
      (reno_interface__action__TrajectoryExecution_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_Result__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `actual_point`
// already included above
// #include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
reno_interface__action__TrajectoryExecution_Feedback__init(reno_interface__action__TrajectoryExecution_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // actual_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->actual_point)) {
    reno_interface__action__TrajectoryExecution_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_Feedback__fini(reno_interface__action__TrajectoryExecution_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // actual_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->actual_point);
}

bool
reno_interface__action__TrajectoryExecution_Feedback__are_equal(const reno_interface__action__TrajectoryExecution_Feedback * lhs, const reno_interface__action__TrajectoryExecution_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actual_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->actual_point), &(rhs->actual_point)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_Feedback__copy(
  const reno_interface__action__TrajectoryExecution_Feedback * input,
  reno_interface__action__TrajectoryExecution_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // actual_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->actual_point), &(output->actual_point)))
  {
    return false;
  }
  return true;
}

reno_interface__action__TrajectoryExecution_Feedback *
reno_interface__action__TrajectoryExecution_Feedback__create()
{
  reno_interface__action__TrajectoryExecution_Feedback * msg = (reno_interface__action__TrajectoryExecution_Feedback *)malloc(sizeof(reno_interface__action__TrajectoryExecution_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_Feedback));
  bool success = reno_interface__action__TrajectoryExecution_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_Feedback__destroy(reno_interface__action__TrajectoryExecution_Feedback * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_Feedback__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_Feedback__Sequence__init(reno_interface__action__TrajectoryExecution_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_Feedback * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_Feedback *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_Feedback__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_Feedback__Sequence__fini(reno_interface__action__TrajectoryExecution_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_Feedback__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_Feedback__Sequence *
reno_interface__action__TrajectoryExecution_Feedback__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_Feedback__Sequence * array = (reno_interface__action__TrajectoryExecution_Feedback__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_Feedback__Sequence__destroy(reno_interface__action__TrajectoryExecution_Feedback__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_Feedback__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_Feedback__Sequence * lhs, const reno_interface__action__TrajectoryExecution_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_Feedback__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_Feedback__Sequence * input,
  reno_interface__action__TrajectoryExecution_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_Feedback);
    reno_interface__action__TrajectoryExecution_Feedback * data =
      (reno_interface__action__TrajectoryExecution_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_Feedback__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"

bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__init(reno_interface__action__TrajectoryExecution_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!reno_interface__action__TrajectoryExecution_Goal__init(&msg->goal)) {
    reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(reno_interface__action__TrajectoryExecution_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  reno_interface__action__TrajectoryExecution_Goal__fini(&msg->goal);
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Request * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!reno_interface__action__TrajectoryExecution_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Request * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!reno_interface__action__TrajectoryExecution_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

reno_interface__action__TrajectoryExecution_SendGoal_Request *
reno_interface__action__TrajectoryExecution_SendGoal_Request__create()
{
  reno_interface__action__TrajectoryExecution_SendGoal_Request * msg = (reno_interface__action__TrajectoryExecution_SendGoal_Request *)malloc(sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Request));
  bool success = reno_interface__action__TrajectoryExecution_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_SendGoal_Request__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Request * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__init(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_SendGoal_Request * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_SendGoal_Request *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__fini(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence *
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array = (reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Request);
    reno_interface__action__TrajectoryExecution_SendGoal_Request * data =
      (reno_interface__action__TrajectoryExecution_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__init(reno_interface__action__TrajectoryExecution_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(reno_interface__action__TrajectoryExecution_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Response * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Response * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

reno_interface__action__TrajectoryExecution_SendGoal_Response *
reno_interface__action__TrajectoryExecution_SendGoal_Response__create()
{
  reno_interface__action__TrajectoryExecution_SendGoal_Response * msg = (reno_interface__action__TrajectoryExecution_SendGoal_Response *)malloc(sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Response));
  bool success = reno_interface__action__TrajectoryExecution_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_SendGoal_Response__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Response * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__init(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_SendGoal_Response * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_SendGoal_Response *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__fini(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence *
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array = (reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Response);
    reno_interface__action__TrajectoryExecution_SendGoal_Response * data =
      (reno_interface__action__TrajectoryExecution_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
reno_interface__action__TrajectoryExecution_GetResult_Request__init(reno_interface__action__TrajectoryExecution_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reno_interface__action__TrajectoryExecution_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_GetResult_Request__fini(reno_interface__action__TrajectoryExecution_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Request__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Request * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Request__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Request * input,
  reno_interface__action__TrajectoryExecution_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

reno_interface__action__TrajectoryExecution_GetResult_Request *
reno_interface__action__TrajectoryExecution_GetResult_Request__create()
{
  reno_interface__action__TrajectoryExecution_GetResult_Request * msg = (reno_interface__action__TrajectoryExecution_GetResult_Request *)malloc(sizeof(reno_interface__action__TrajectoryExecution_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_GetResult_Request));
  bool success = reno_interface__action__TrajectoryExecution_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_GetResult_Request__destroy(reno_interface__action__TrajectoryExecution_GetResult_Request * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__init(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_GetResult_Request * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_GetResult_Request *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_GetResult_Request__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__fini(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_GetResult_Request__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence *
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array = (reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__destroy(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * input,
  reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_GetResult_Request);
    reno_interface__action__TrajectoryExecution_GetResult_Request * data =
      (reno_interface__action__TrajectoryExecution_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_GetResult_Request__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"

bool
reno_interface__action__TrajectoryExecution_GetResult_Response__init(reno_interface__action__TrajectoryExecution_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!reno_interface__action__TrajectoryExecution_Result__init(&msg->result)) {
    reno_interface__action__TrajectoryExecution_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_GetResult_Response__fini(reno_interface__action__TrajectoryExecution_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  reno_interface__action__TrajectoryExecution_Result__fini(&msg->result);
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Response__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Response * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!reno_interface__action__TrajectoryExecution_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Response__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Response * input,
  reno_interface__action__TrajectoryExecution_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!reno_interface__action__TrajectoryExecution_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

reno_interface__action__TrajectoryExecution_GetResult_Response *
reno_interface__action__TrajectoryExecution_GetResult_Response__create()
{
  reno_interface__action__TrajectoryExecution_GetResult_Response * msg = (reno_interface__action__TrajectoryExecution_GetResult_Response *)malloc(sizeof(reno_interface__action__TrajectoryExecution_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_GetResult_Response));
  bool success = reno_interface__action__TrajectoryExecution_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_GetResult_Response__destroy(reno_interface__action__TrajectoryExecution_GetResult_Response * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__init(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_GetResult_Response * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_GetResult_Response *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_GetResult_Response__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__fini(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_GetResult_Response__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence *
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array = (reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__destroy(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * input,
  reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_GetResult_Response);
    reno_interface__action__TrajectoryExecution_GetResult_Response * data =
      (reno_interface__action__TrajectoryExecution_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_GetResult_Response__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"

bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__init(reno_interface__action__TrajectoryExecution_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!reno_interface__action__TrajectoryExecution_Feedback__init(&msg->feedback)) {
    reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(reno_interface__action__TrajectoryExecution_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  reno_interface__action__TrajectoryExecution_Feedback__fini(&msg->feedback);
}

bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__are_equal(const reno_interface__action__TrajectoryExecution_FeedbackMessage * lhs, const reno_interface__action__TrajectoryExecution_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!reno_interface__action__TrajectoryExecution_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__copy(
  const reno_interface__action__TrajectoryExecution_FeedbackMessage * input,
  reno_interface__action__TrajectoryExecution_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!reno_interface__action__TrajectoryExecution_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

reno_interface__action__TrajectoryExecution_FeedbackMessage *
reno_interface__action__TrajectoryExecution_FeedbackMessage__create()
{
  reno_interface__action__TrajectoryExecution_FeedbackMessage * msg = (reno_interface__action__TrajectoryExecution_FeedbackMessage *)malloc(sizeof(reno_interface__action__TrajectoryExecution_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reno_interface__action__TrajectoryExecution_FeedbackMessage));
  bool success = reno_interface__action__TrajectoryExecution_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reno_interface__action__TrajectoryExecution_FeedbackMessage__destroy(reno_interface__action__TrajectoryExecution_FeedbackMessage * msg)
{
  if (msg) {
    reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__init(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reno_interface__action__TrajectoryExecution_FeedbackMessage * data = NULL;
  if (size) {
    data = (reno_interface__action__TrajectoryExecution_FeedbackMessage *)calloc(size, sizeof(reno_interface__action__TrajectoryExecution_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reno_interface__action__TrajectoryExecution_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(&data[i - 1]);
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
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__fini(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(&array->data[i]);
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

reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence *
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__create(size_t size)
{
  reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array = (reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence *)malloc(sizeof(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__destroy(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array)
{
  if (array) {
    reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * lhs, const reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!reno_interface__action__TrajectoryExecution_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * input,
  reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(reno_interface__action__TrajectoryExecution_FeedbackMessage);
    reno_interface__action__TrajectoryExecution_FeedbackMessage * data =
      (reno_interface__action__TrajectoryExecution_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!reno_interface__action__TrajectoryExecution_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(&data[i]);
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
    if (!reno_interface__action__TrajectoryExecution_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
