// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scara_interfaces:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice
#include "scara_interfaces/action/detail/trajectory_execution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
scara_interfaces__action__TrajectoryExecution_Goal__init(scara_interfaces__action__TrajectoryExecution_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    scara_interfaces__action__TrajectoryExecution_Goal__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_Goal__fini(scara_interfaces__action__TrajectoryExecution_Goal * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
}

bool
scara_interfaces__action__TrajectoryExecution_Goal__are_equal(const scara_interfaces__action__TrajectoryExecution_Goal * lhs, const scara_interfaces__action__TrajectoryExecution_Goal * rhs)
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
scara_interfaces__action__TrajectoryExecution_Goal__copy(
  const scara_interfaces__action__TrajectoryExecution_Goal * input,
  scara_interfaces__action__TrajectoryExecution_Goal * output)
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

scara_interfaces__action__TrajectoryExecution_Goal *
scara_interfaces__action__TrajectoryExecution_Goal__create()
{
  scara_interfaces__action__TrajectoryExecution_Goal * msg = (scara_interfaces__action__TrajectoryExecution_Goal *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_Goal));
  bool success = scara_interfaces__action__TrajectoryExecution_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_Goal__destroy(scara_interfaces__action__TrajectoryExecution_Goal * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_Goal__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_Goal__Sequence__init(scara_interfaces__action__TrajectoryExecution_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_Goal * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_Goal *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_Goal__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_Goal__Sequence__fini(scara_interfaces__action__TrajectoryExecution_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_Goal__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_Goal__Sequence *
scara_interfaces__action__TrajectoryExecution_Goal__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_Goal__Sequence * array = (scara_interfaces__action__TrajectoryExecution_Goal__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_Goal__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_Goal__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_Goal__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_Goal__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_Goal__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_Goal__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_Goal);
    scara_interfaces__action__TrajectoryExecution_Goal * data =
      (scara_interfaces__action__TrajectoryExecution_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_Goal__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_Goal__copy(
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
scara_interfaces__action__TrajectoryExecution_Result__init(scara_interfaces__action__TrajectoryExecution_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->final_point)) {
    scara_interfaces__action__TrajectoryExecution_Result__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_Result__fini(scara_interfaces__action__TrajectoryExecution_Result * msg)
{
  if (!msg) {
    return;
  }
  // final_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->final_point);
}

bool
scara_interfaces__action__TrajectoryExecution_Result__are_equal(const scara_interfaces__action__TrajectoryExecution_Result * lhs, const scara_interfaces__action__TrajectoryExecution_Result * rhs)
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
scara_interfaces__action__TrajectoryExecution_Result__copy(
  const scara_interfaces__action__TrajectoryExecution_Result * input,
  scara_interfaces__action__TrajectoryExecution_Result * output)
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

scara_interfaces__action__TrajectoryExecution_Result *
scara_interfaces__action__TrajectoryExecution_Result__create()
{
  scara_interfaces__action__TrajectoryExecution_Result * msg = (scara_interfaces__action__TrajectoryExecution_Result *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_Result));
  bool success = scara_interfaces__action__TrajectoryExecution_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_Result__destroy(scara_interfaces__action__TrajectoryExecution_Result * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_Result__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_Result__Sequence__init(scara_interfaces__action__TrajectoryExecution_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_Result * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_Result *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_Result__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_Result__Sequence__fini(scara_interfaces__action__TrajectoryExecution_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_Result__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_Result__Sequence *
scara_interfaces__action__TrajectoryExecution_Result__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_Result__Sequence * array = (scara_interfaces__action__TrajectoryExecution_Result__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_Result__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_Result__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_Result__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_Result__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_Result__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_Result__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_Result__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_Result);
    scara_interfaces__action__TrajectoryExecution_Result * data =
      (scara_interfaces__action__TrajectoryExecution_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_Result__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_Result__copy(
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
scara_interfaces__action__TrajectoryExecution_Feedback__init(scara_interfaces__action__TrajectoryExecution_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // actual_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->actual_point)) {
    scara_interfaces__action__TrajectoryExecution_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_Feedback__fini(scara_interfaces__action__TrajectoryExecution_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // actual_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->actual_point);
}

bool
scara_interfaces__action__TrajectoryExecution_Feedback__are_equal(const scara_interfaces__action__TrajectoryExecution_Feedback * lhs, const scara_interfaces__action__TrajectoryExecution_Feedback * rhs)
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
scara_interfaces__action__TrajectoryExecution_Feedback__copy(
  const scara_interfaces__action__TrajectoryExecution_Feedback * input,
  scara_interfaces__action__TrajectoryExecution_Feedback * output)
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

scara_interfaces__action__TrajectoryExecution_Feedback *
scara_interfaces__action__TrajectoryExecution_Feedback__create()
{
  scara_interfaces__action__TrajectoryExecution_Feedback * msg = (scara_interfaces__action__TrajectoryExecution_Feedback *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_Feedback));
  bool success = scara_interfaces__action__TrajectoryExecution_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_Feedback__destroy(scara_interfaces__action__TrajectoryExecution_Feedback * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_Feedback__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__init(scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_Feedback * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_Feedback *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_Feedback__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__fini(scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_Feedback__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_Feedback__Sequence *
scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * array = (scara_interfaces__action__TrajectoryExecution_Feedback__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_Feedback__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_Feedback);
    scara_interfaces__action__TrajectoryExecution_Feedback * data =
      (scara_interfaces__action__TrajectoryExecution_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_Feedback__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_Feedback__copy(
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
// #include "scara_interfaces/action/detail/trajectory_execution__functions.h"

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__init(scara_interfaces__action__TrajectoryExecution_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!scara_interfaces__action__TrajectoryExecution_Goal__init(&msg->goal)) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(scara_interfaces__action__TrajectoryExecution_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  scara_interfaces__action__TrajectoryExecution_Goal__fini(&msg->goal);
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__are_equal(const scara_interfaces__action__TrajectoryExecution_SendGoal_Request * lhs, const scara_interfaces__action__TrajectoryExecution_SendGoal_Request * rhs)
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
  if (!scara_interfaces__action__TrajectoryExecution_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__copy(
  const scara_interfaces__action__TrajectoryExecution_SendGoal_Request * input,
  scara_interfaces__action__TrajectoryExecution_SendGoal_Request * output)
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
  if (!scara_interfaces__action__TrajectoryExecution_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

scara_interfaces__action__TrajectoryExecution_SendGoal_Request *
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__create()
{
  scara_interfaces__action__TrajectoryExecution_SendGoal_Request * msg = (scara_interfaces__action__TrajectoryExecution_SendGoal_Request *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Request));
  bool success = scara_interfaces__action__TrajectoryExecution_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__destroy(scara_interfaces__action__TrajectoryExecution_SendGoal_Request * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__init(scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_SendGoal_Request * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_SendGoal_Request *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__fini(scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence *
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * array = (scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Request);
    scara_interfaces__action__TrajectoryExecution_SendGoal_Request * data =
      (scara_interfaces__action__TrajectoryExecution_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_SendGoal_Request__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_SendGoal_Request__copy(
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
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__init(scara_interfaces__action__TrajectoryExecution_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__fini(scara_interfaces__action__TrajectoryExecution_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__are_equal(const scara_interfaces__action__TrajectoryExecution_SendGoal_Response * lhs, const scara_interfaces__action__TrajectoryExecution_SendGoal_Response * rhs)
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
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__copy(
  const scara_interfaces__action__TrajectoryExecution_SendGoal_Response * input,
  scara_interfaces__action__TrajectoryExecution_SendGoal_Response * output)
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

scara_interfaces__action__TrajectoryExecution_SendGoal_Response *
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__create()
{
  scara_interfaces__action__TrajectoryExecution_SendGoal_Response * msg = (scara_interfaces__action__TrajectoryExecution_SendGoal_Response *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Response));
  bool success = scara_interfaces__action__TrajectoryExecution_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__destroy(scara_interfaces__action__TrajectoryExecution_SendGoal_Response * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__init(scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_SendGoal_Response * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_SendGoal_Response *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_SendGoal_Response__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__fini(scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_SendGoal_Response__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence *
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * array = (scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_SendGoal_Response);
    scara_interfaces__action__TrajectoryExecution_SendGoal_Response * data =
      (scara_interfaces__action__TrajectoryExecution_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_SendGoal_Response__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_SendGoal_Response__copy(
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
scara_interfaces__action__TrajectoryExecution_GetResult_Request__init(scara_interfaces__action__TrajectoryExecution_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    scara_interfaces__action__TrajectoryExecution_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_GetResult_Request__fini(scara_interfaces__action__TrajectoryExecution_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Request__are_equal(const scara_interfaces__action__TrajectoryExecution_GetResult_Request * lhs, const scara_interfaces__action__TrajectoryExecution_GetResult_Request * rhs)
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
scara_interfaces__action__TrajectoryExecution_GetResult_Request__copy(
  const scara_interfaces__action__TrajectoryExecution_GetResult_Request * input,
  scara_interfaces__action__TrajectoryExecution_GetResult_Request * output)
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

scara_interfaces__action__TrajectoryExecution_GetResult_Request *
scara_interfaces__action__TrajectoryExecution_GetResult_Request__create()
{
  scara_interfaces__action__TrajectoryExecution_GetResult_Request * msg = (scara_interfaces__action__TrajectoryExecution_GetResult_Request *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Request));
  bool success = scara_interfaces__action__TrajectoryExecution_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_GetResult_Request__destroy(scara_interfaces__action__TrajectoryExecution_GetResult_Request * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__init(scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_GetResult_Request * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_GetResult_Request *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_GetResult_Request__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__fini(scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_GetResult_Request__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence *
scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * array = (scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Request);
    scara_interfaces__action__TrajectoryExecution_GetResult_Request * data =
      (scara_interfaces__action__TrajectoryExecution_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_GetResult_Request__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_GetResult_Request__copy(
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
// #include "scara_interfaces/action/detail/trajectory_execution__functions.h"

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Response__init(scara_interfaces__action__TrajectoryExecution_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!scara_interfaces__action__TrajectoryExecution_Result__init(&msg->result)) {
    scara_interfaces__action__TrajectoryExecution_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_GetResult_Response__fini(scara_interfaces__action__TrajectoryExecution_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  scara_interfaces__action__TrajectoryExecution_Result__fini(&msg->result);
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Response__are_equal(const scara_interfaces__action__TrajectoryExecution_GetResult_Response * lhs, const scara_interfaces__action__TrajectoryExecution_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!scara_interfaces__action__TrajectoryExecution_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Response__copy(
  const scara_interfaces__action__TrajectoryExecution_GetResult_Response * input,
  scara_interfaces__action__TrajectoryExecution_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!scara_interfaces__action__TrajectoryExecution_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

scara_interfaces__action__TrajectoryExecution_GetResult_Response *
scara_interfaces__action__TrajectoryExecution_GetResult_Response__create()
{
  scara_interfaces__action__TrajectoryExecution_GetResult_Response * msg = (scara_interfaces__action__TrajectoryExecution_GetResult_Response *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Response));
  bool success = scara_interfaces__action__TrajectoryExecution_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_GetResult_Response__destroy(scara_interfaces__action__TrajectoryExecution_GetResult_Response * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__init(scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_GetResult_Response * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_GetResult_Response *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_GetResult_Response__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__fini(scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_GetResult_Response__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence *
scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * array = (scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_GetResult_Response);
    scara_interfaces__action__TrajectoryExecution_GetResult_Response * data =
      (scara_interfaces__action__TrajectoryExecution_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_GetResult_Response__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_GetResult_Response__copy(
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
// #include "scara_interfaces/action/detail/trajectory_execution__functions.h"

bool
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__init(scara_interfaces__action__TrajectoryExecution_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!scara_interfaces__action__TrajectoryExecution_Feedback__init(&msg->feedback)) {
    scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(scara_interfaces__action__TrajectoryExecution_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  scara_interfaces__action__TrajectoryExecution_Feedback__fini(&msg->feedback);
}

bool
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__are_equal(const scara_interfaces__action__TrajectoryExecution_FeedbackMessage * lhs, const scara_interfaces__action__TrajectoryExecution_FeedbackMessage * rhs)
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
  if (!scara_interfaces__action__TrajectoryExecution_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__copy(
  const scara_interfaces__action__TrajectoryExecution_FeedbackMessage * input,
  scara_interfaces__action__TrajectoryExecution_FeedbackMessage * output)
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
  if (!scara_interfaces__action__TrajectoryExecution_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

scara_interfaces__action__TrajectoryExecution_FeedbackMessage *
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__create()
{
  scara_interfaces__action__TrajectoryExecution_FeedbackMessage * msg = (scara_interfaces__action__TrajectoryExecution_FeedbackMessage *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__action__TrajectoryExecution_FeedbackMessage));
  bool success = scara_interfaces__action__TrajectoryExecution_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__destroy(scara_interfaces__action__TrajectoryExecution_FeedbackMessage * msg)
{
  if (msg) {
    scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__init(scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  scara_interfaces__action__TrajectoryExecution_FeedbackMessage * data = NULL;
  if (size) {
    data = (scara_interfaces__action__TrajectoryExecution_FeedbackMessage *)calloc(size, sizeof(scara_interfaces__action__TrajectoryExecution_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__action__TrajectoryExecution_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(&data[i - 1]);
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
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__fini(scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(&array->data[i]);
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

scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence *
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__create(size_t size)
{
  scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * array = (scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence *)malloc(sizeof(scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__destroy(scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * array)
{
  if (array) {
    scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__are_equal(const scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * lhs, const scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__action__TrajectoryExecution_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence__copy(
  const scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * input,
  scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__action__TrajectoryExecution_FeedbackMessage);
    scara_interfaces__action__TrajectoryExecution_FeedbackMessage * data =
      (scara_interfaces__action__TrajectoryExecution_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__action__TrajectoryExecution_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          scara_interfaces__action__TrajectoryExecution_FeedbackMessage__fini(&data[i]);
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
    if (!scara_interfaces__action__TrajectoryExecution_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
