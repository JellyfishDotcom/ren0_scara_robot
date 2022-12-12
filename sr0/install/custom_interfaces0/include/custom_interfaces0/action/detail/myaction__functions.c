// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces0:action/Myaction.idl
// generated code does not contain a copyright notice
#include "custom_interfaces0/action/detail/myaction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_interfaces0__action__Myaction_Goal__init(custom_interfaces0__action__Myaction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_position
  return true;
}

void
custom_interfaces0__action__Myaction_Goal__fini(custom_interfaces0__action__Myaction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_position
}

bool
custom_interfaces0__action__Myaction_Goal__are_equal(const custom_interfaces0__action__Myaction_Goal * lhs, const custom_interfaces0__action__Myaction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->goal_position[i] != rhs->goal_position[i]) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_Goal__copy(
  const custom_interfaces0__action__Myaction_Goal * input,
  custom_interfaces0__action__Myaction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_position
  for (size_t i = 0; i < 3; ++i) {
    output->goal_position[i] = input->goal_position[i];
  }
  return true;
}

custom_interfaces0__action__Myaction_Goal *
custom_interfaces0__action__Myaction_Goal__create()
{
  custom_interfaces0__action__Myaction_Goal * msg = (custom_interfaces0__action__Myaction_Goal *)malloc(sizeof(custom_interfaces0__action__Myaction_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_Goal));
  bool success = custom_interfaces0__action__Myaction_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_Goal__destroy(custom_interfaces0__action__Myaction_Goal * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_Goal__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_Goal__Sequence__init(custom_interfaces0__action__Myaction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_Goal * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_Goal *)calloc(size, sizeof(custom_interfaces0__action__Myaction_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_Goal__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_Goal__Sequence__fini(custom_interfaces0__action__Myaction_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_Goal__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_Goal__Sequence *
custom_interfaces0__action__Myaction_Goal__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_Goal__Sequence * array = (custom_interfaces0__action__Myaction_Goal__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_Goal__Sequence__destroy(custom_interfaces0__action__Myaction_Goal__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_Goal__Sequence__are_equal(const custom_interfaces0__action__Myaction_Goal__Sequence * lhs, const custom_interfaces0__action__Myaction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_Goal__Sequence__copy(
  const custom_interfaces0__action__Myaction_Goal__Sequence * input,
  custom_interfaces0__action__Myaction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_Goal);
    custom_interfaces0__action__Myaction_Goal * data =
      (custom_interfaces0__action__Myaction_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_Goal__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custom_interfaces0__action__Myaction_Result__init(custom_interfaces0__action__Myaction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_position
  return true;
}

void
custom_interfaces0__action__Myaction_Result__fini(custom_interfaces0__action__Myaction_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_position
}

bool
custom_interfaces0__action__Myaction_Result__are_equal(const custom_interfaces0__action__Myaction_Result * lhs, const custom_interfaces0__action__Myaction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->result_position[i] != rhs->result_position[i]) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_Result__copy(
  const custom_interfaces0__action__Myaction_Result * input,
  custom_interfaces0__action__Myaction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_position
  for (size_t i = 0; i < 3; ++i) {
    output->result_position[i] = input->result_position[i];
  }
  return true;
}

custom_interfaces0__action__Myaction_Result *
custom_interfaces0__action__Myaction_Result__create()
{
  custom_interfaces0__action__Myaction_Result * msg = (custom_interfaces0__action__Myaction_Result *)malloc(sizeof(custom_interfaces0__action__Myaction_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_Result));
  bool success = custom_interfaces0__action__Myaction_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_Result__destroy(custom_interfaces0__action__Myaction_Result * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_Result__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_Result__Sequence__init(custom_interfaces0__action__Myaction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_Result * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_Result *)calloc(size, sizeof(custom_interfaces0__action__Myaction_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_Result__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_Result__Sequence__fini(custom_interfaces0__action__Myaction_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_Result__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_Result__Sequence *
custom_interfaces0__action__Myaction_Result__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_Result__Sequence * array = (custom_interfaces0__action__Myaction_Result__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_Result__Sequence__destroy(custom_interfaces0__action__Myaction_Result__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_Result__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_Result__Sequence__are_equal(const custom_interfaces0__action__Myaction_Result__Sequence * lhs, const custom_interfaces0__action__Myaction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_Result__Sequence__copy(
  const custom_interfaces0__action__Myaction_Result__Sequence * input,
  custom_interfaces0__action__Myaction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_Result);
    custom_interfaces0__action__Myaction_Result * data =
      (custom_interfaces0__action__Myaction_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_Result__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custom_interfaces0__action__Myaction_Feedback__init(custom_interfaces0__action__Myaction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  return true;
}

void
custom_interfaces0__action__Myaction_Feedback__fini(custom_interfaces0__action__Myaction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position
}

bool
custom_interfaces0__action__Myaction_Feedback__are_equal(const custom_interfaces0__action__Myaction_Feedback * lhs, const custom_interfaces0__action__Myaction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->current_position[i] != rhs->current_position[i]) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_Feedback__copy(
  const custom_interfaces0__action__Myaction_Feedback * input,
  custom_interfaces0__action__Myaction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_position
  for (size_t i = 0; i < 3; ++i) {
    output->current_position[i] = input->current_position[i];
  }
  return true;
}

custom_interfaces0__action__Myaction_Feedback *
custom_interfaces0__action__Myaction_Feedback__create()
{
  custom_interfaces0__action__Myaction_Feedback * msg = (custom_interfaces0__action__Myaction_Feedback *)malloc(sizeof(custom_interfaces0__action__Myaction_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_Feedback));
  bool success = custom_interfaces0__action__Myaction_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_Feedback__destroy(custom_interfaces0__action__Myaction_Feedback * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_Feedback__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_Feedback__Sequence__init(custom_interfaces0__action__Myaction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_Feedback * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_Feedback *)calloc(size, sizeof(custom_interfaces0__action__Myaction_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_Feedback__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_Feedback__Sequence__fini(custom_interfaces0__action__Myaction_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_Feedback__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_Feedback__Sequence *
custom_interfaces0__action__Myaction_Feedback__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_Feedback__Sequence * array = (custom_interfaces0__action__Myaction_Feedback__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_Feedback__Sequence__destroy(custom_interfaces0__action__Myaction_Feedback__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_Feedback__Sequence__are_equal(const custom_interfaces0__action__Myaction_Feedback__Sequence * lhs, const custom_interfaces0__action__Myaction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_Feedback__Sequence__copy(
  const custom_interfaces0__action__Myaction_Feedback__Sequence * input,
  custom_interfaces0__action__Myaction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_Feedback);
    custom_interfaces0__action__Myaction_Feedback * data =
      (custom_interfaces0__action__Myaction_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_Feedback__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_Feedback__copy(
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
// #include "custom_interfaces0/action/detail/myaction__functions.h"

bool
custom_interfaces0__action__Myaction_SendGoal_Request__init(custom_interfaces0__action__Myaction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interfaces0__action__Myaction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!custom_interfaces0__action__Myaction_Goal__init(&msg->goal)) {
    custom_interfaces0__action__Myaction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces0__action__Myaction_SendGoal_Request__fini(custom_interfaces0__action__Myaction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  custom_interfaces0__action__Myaction_Goal__fini(&msg->goal);
}

bool
custom_interfaces0__action__Myaction_SendGoal_Request__are_equal(const custom_interfaces0__action__Myaction_SendGoal_Request * lhs, const custom_interfaces0__action__Myaction_SendGoal_Request * rhs)
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
  if (!custom_interfaces0__action__Myaction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_SendGoal_Request__copy(
  const custom_interfaces0__action__Myaction_SendGoal_Request * input,
  custom_interfaces0__action__Myaction_SendGoal_Request * output)
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
  if (!custom_interfaces0__action__Myaction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

custom_interfaces0__action__Myaction_SendGoal_Request *
custom_interfaces0__action__Myaction_SendGoal_Request__create()
{
  custom_interfaces0__action__Myaction_SendGoal_Request * msg = (custom_interfaces0__action__Myaction_SendGoal_Request *)malloc(sizeof(custom_interfaces0__action__Myaction_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_SendGoal_Request));
  bool success = custom_interfaces0__action__Myaction_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_SendGoal_Request__destroy(custom_interfaces0__action__Myaction_SendGoal_Request * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__init(custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_SendGoal_Request * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_SendGoal_Request *)calloc(size, sizeof(custom_interfaces0__action__Myaction_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_SendGoal_Request__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__fini(custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_SendGoal_Request__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_SendGoal_Request__Sequence *
custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * array = (custom_interfaces0__action__Myaction_SendGoal_Request__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__destroy(custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__are_equal(const custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * lhs, const custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_SendGoal_Request__Sequence__copy(
  const custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * input,
  custom_interfaces0__action__Myaction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_SendGoal_Request);
    custom_interfaces0__action__Myaction_SendGoal_Request * data =
      (custom_interfaces0__action__Myaction_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_SendGoal_Request__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_SendGoal_Request__copy(
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
custom_interfaces0__action__Myaction_SendGoal_Response__init(custom_interfaces0__action__Myaction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    custom_interfaces0__action__Myaction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces0__action__Myaction_SendGoal_Response__fini(custom_interfaces0__action__Myaction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
custom_interfaces0__action__Myaction_SendGoal_Response__are_equal(const custom_interfaces0__action__Myaction_SendGoal_Response * lhs, const custom_interfaces0__action__Myaction_SendGoal_Response * rhs)
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
custom_interfaces0__action__Myaction_SendGoal_Response__copy(
  const custom_interfaces0__action__Myaction_SendGoal_Response * input,
  custom_interfaces0__action__Myaction_SendGoal_Response * output)
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

custom_interfaces0__action__Myaction_SendGoal_Response *
custom_interfaces0__action__Myaction_SendGoal_Response__create()
{
  custom_interfaces0__action__Myaction_SendGoal_Response * msg = (custom_interfaces0__action__Myaction_SendGoal_Response *)malloc(sizeof(custom_interfaces0__action__Myaction_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_SendGoal_Response));
  bool success = custom_interfaces0__action__Myaction_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_SendGoal_Response__destroy(custom_interfaces0__action__Myaction_SendGoal_Response * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__init(custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_SendGoal_Response * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_SendGoal_Response *)calloc(size, sizeof(custom_interfaces0__action__Myaction_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_SendGoal_Response__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__fini(custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_SendGoal_Response__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_SendGoal_Response__Sequence *
custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * array = (custom_interfaces0__action__Myaction_SendGoal_Response__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__destroy(custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__are_equal(const custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * lhs, const custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_SendGoal_Response__Sequence__copy(
  const custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * input,
  custom_interfaces0__action__Myaction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_SendGoal_Response);
    custom_interfaces0__action__Myaction_SendGoal_Response * data =
      (custom_interfaces0__action__Myaction_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_SendGoal_Response__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_SendGoal_Response__copy(
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
custom_interfaces0__action__Myaction_GetResult_Request__init(custom_interfaces0__action__Myaction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interfaces0__action__Myaction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces0__action__Myaction_GetResult_Request__fini(custom_interfaces0__action__Myaction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
custom_interfaces0__action__Myaction_GetResult_Request__are_equal(const custom_interfaces0__action__Myaction_GetResult_Request * lhs, const custom_interfaces0__action__Myaction_GetResult_Request * rhs)
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
custom_interfaces0__action__Myaction_GetResult_Request__copy(
  const custom_interfaces0__action__Myaction_GetResult_Request * input,
  custom_interfaces0__action__Myaction_GetResult_Request * output)
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

custom_interfaces0__action__Myaction_GetResult_Request *
custom_interfaces0__action__Myaction_GetResult_Request__create()
{
  custom_interfaces0__action__Myaction_GetResult_Request * msg = (custom_interfaces0__action__Myaction_GetResult_Request *)malloc(sizeof(custom_interfaces0__action__Myaction_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_GetResult_Request));
  bool success = custom_interfaces0__action__Myaction_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_GetResult_Request__destroy(custom_interfaces0__action__Myaction_GetResult_Request * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_GetResult_Request__Sequence__init(custom_interfaces0__action__Myaction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_GetResult_Request * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_GetResult_Request *)calloc(size, sizeof(custom_interfaces0__action__Myaction_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_GetResult_Request__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_GetResult_Request__Sequence__fini(custom_interfaces0__action__Myaction_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_GetResult_Request__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_GetResult_Request__Sequence *
custom_interfaces0__action__Myaction_GetResult_Request__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_GetResult_Request__Sequence * array = (custom_interfaces0__action__Myaction_GetResult_Request__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_GetResult_Request__Sequence__destroy(custom_interfaces0__action__Myaction_GetResult_Request__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_GetResult_Request__Sequence__are_equal(const custom_interfaces0__action__Myaction_GetResult_Request__Sequence * lhs, const custom_interfaces0__action__Myaction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_GetResult_Request__Sequence__copy(
  const custom_interfaces0__action__Myaction_GetResult_Request__Sequence * input,
  custom_interfaces0__action__Myaction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_GetResult_Request);
    custom_interfaces0__action__Myaction_GetResult_Request * data =
      (custom_interfaces0__action__Myaction_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_GetResult_Request__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_GetResult_Request__copy(
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
// #include "custom_interfaces0/action/detail/myaction__functions.h"

bool
custom_interfaces0__action__Myaction_GetResult_Response__init(custom_interfaces0__action__Myaction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!custom_interfaces0__action__Myaction_Result__init(&msg->result)) {
    custom_interfaces0__action__Myaction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces0__action__Myaction_GetResult_Response__fini(custom_interfaces0__action__Myaction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  custom_interfaces0__action__Myaction_Result__fini(&msg->result);
}

bool
custom_interfaces0__action__Myaction_GetResult_Response__are_equal(const custom_interfaces0__action__Myaction_GetResult_Response * lhs, const custom_interfaces0__action__Myaction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!custom_interfaces0__action__Myaction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_GetResult_Response__copy(
  const custom_interfaces0__action__Myaction_GetResult_Response * input,
  custom_interfaces0__action__Myaction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!custom_interfaces0__action__Myaction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

custom_interfaces0__action__Myaction_GetResult_Response *
custom_interfaces0__action__Myaction_GetResult_Response__create()
{
  custom_interfaces0__action__Myaction_GetResult_Response * msg = (custom_interfaces0__action__Myaction_GetResult_Response *)malloc(sizeof(custom_interfaces0__action__Myaction_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_GetResult_Response));
  bool success = custom_interfaces0__action__Myaction_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_GetResult_Response__destroy(custom_interfaces0__action__Myaction_GetResult_Response * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_GetResult_Response__Sequence__init(custom_interfaces0__action__Myaction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_GetResult_Response * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_GetResult_Response *)calloc(size, sizeof(custom_interfaces0__action__Myaction_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_GetResult_Response__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_GetResult_Response__Sequence__fini(custom_interfaces0__action__Myaction_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_GetResult_Response__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_GetResult_Response__Sequence *
custom_interfaces0__action__Myaction_GetResult_Response__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_GetResult_Response__Sequence * array = (custom_interfaces0__action__Myaction_GetResult_Response__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_GetResult_Response__Sequence__destroy(custom_interfaces0__action__Myaction_GetResult_Response__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_GetResult_Response__Sequence__are_equal(const custom_interfaces0__action__Myaction_GetResult_Response__Sequence * lhs, const custom_interfaces0__action__Myaction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_GetResult_Response__Sequence__copy(
  const custom_interfaces0__action__Myaction_GetResult_Response__Sequence * input,
  custom_interfaces0__action__Myaction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_GetResult_Response);
    custom_interfaces0__action__Myaction_GetResult_Response * data =
      (custom_interfaces0__action__Myaction_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_GetResult_Response__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_GetResult_Response__copy(
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
// #include "custom_interfaces0/action/detail/myaction__functions.h"

bool
custom_interfaces0__action__Myaction_FeedbackMessage__init(custom_interfaces0__action__Myaction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interfaces0__action__Myaction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!custom_interfaces0__action__Myaction_Feedback__init(&msg->feedback)) {
    custom_interfaces0__action__Myaction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces0__action__Myaction_FeedbackMessage__fini(custom_interfaces0__action__Myaction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  custom_interfaces0__action__Myaction_Feedback__fini(&msg->feedback);
}

bool
custom_interfaces0__action__Myaction_FeedbackMessage__are_equal(const custom_interfaces0__action__Myaction_FeedbackMessage * lhs, const custom_interfaces0__action__Myaction_FeedbackMessage * rhs)
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
  if (!custom_interfaces0__action__Myaction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_FeedbackMessage__copy(
  const custom_interfaces0__action__Myaction_FeedbackMessage * input,
  custom_interfaces0__action__Myaction_FeedbackMessage * output)
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
  if (!custom_interfaces0__action__Myaction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

custom_interfaces0__action__Myaction_FeedbackMessage *
custom_interfaces0__action__Myaction_FeedbackMessage__create()
{
  custom_interfaces0__action__Myaction_FeedbackMessage * msg = (custom_interfaces0__action__Myaction_FeedbackMessage *)malloc(sizeof(custom_interfaces0__action__Myaction_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces0__action__Myaction_FeedbackMessage));
  bool success = custom_interfaces0__action__Myaction_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interfaces0__action__Myaction_FeedbackMessage__destroy(custom_interfaces0__action__Myaction_FeedbackMessage * msg)
{
  if (msg) {
    custom_interfaces0__action__Myaction_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__init(custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interfaces0__action__Myaction_FeedbackMessage * data = NULL;
  if (size) {
    data = (custom_interfaces0__action__Myaction_FeedbackMessage *)calloc(size, sizeof(custom_interfaces0__action__Myaction_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces0__action__Myaction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces0__action__Myaction_FeedbackMessage__fini(&data[i - 1]);
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
custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__fini(custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces0__action__Myaction_FeedbackMessage__fini(&array->data[i]);
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

custom_interfaces0__action__Myaction_FeedbackMessage__Sequence *
custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__create(size_t size)
{
  custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * array = (custom_interfaces0__action__Myaction_FeedbackMessage__Sequence *)malloc(sizeof(custom_interfaces0__action__Myaction_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__destroy(custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * array)
{
  if (array) {
    custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__are_equal(const custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * lhs, const custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces0__action__Myaction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces0__action__Myaction_FeedbackMessage__Sequence__copy(
  const custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * input,
  custom_interfaces0__action__Myaction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces0__action__Myaction_FeedbackMessage);
    custom_interfaces0__action__Myaction_FeedbackMessage * data =
      (custom_interfaces0__action__Myaction_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces0__action__Myaction_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces0__action__Myaction_FeedbackMessage__fini(&data[i]);
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
    if (!custom_interfaces0__action__Myaction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
