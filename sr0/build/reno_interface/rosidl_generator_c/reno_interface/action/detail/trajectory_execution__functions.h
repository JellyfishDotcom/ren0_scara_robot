// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__FUNCTIONS_H_
#define RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "reno_interface/msg/rosidl_generator_c__visibility_control.h"

#include "reno_interface/action/detail/trajectory_execution__struct.h"

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_Goal
 * )) before or use
 * reno_interface__action__TrajectoryExecution_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Goal__init(reno_interface__action__TrajectoryExecution_Goal * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Goal__fini(reno_interface__action__TrajectoryExecution_Goal * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_Goal *
reno_interface__action__TrajectoryExecution_Goal__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Goal__destroy(reno_interface__action__TrajectoryExecution_Goal * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Goal__are_equal(const reno_interface__action__TrajectoryExecution_Goal * lhs, const reno_interface__action__TrajectoryExecution_Goal * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Goal__copy(
  const reno_interface__action__TrajectoryExecution_Goal * input,
  reno_interface__action__TrajectoryExecution_Goal * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Goal__Sequence__init(reno_interface__action__TrajectoryExecution_Goal__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Goal__Sequence__fini(reno_interface__action__TrajectoryExecution_Goal__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_Goal__Sequence *
reno_interface__action__TrajectoryExecution_Goal__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Goal__Sequence__destroy(reno_interface__action__TrajectoryExecution_Goal__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Goal__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_Goal__Sequence * lhs, const reno_interface__action__TrajectoryExecution_Goal__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Goal__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_Goal__Sequence * input,
  reno_interface__action__TrajectoryExecution_Goal__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_Result
 * )) before or use
 * reno_interface__action__TrajectoryExecution_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Result__init(reno_interface__action__TrajectoryExecution_Result * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Result__fini(reno_interface__action__TrajectoryExecution_Result * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_Result *
reno_interface__action__TrajectoryExecution_Result__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Result__destroy(reno_interface__action__TrajectoryExecution_Result * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Result__are_equal(const reno_interface__action__TrajectoryExecution_Result * lhs, const reno_interface__action__TrajectoryExecution_Result * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Result__copy(
  const reno_interface__action__TrajectoryExecution_Result * input,
  reno_interface__action__TrajectoryExecution_Result * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Result__Sequence__init(reno_interface__action__TrajectoryExecution_Result__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Result__Sequence__fini(reno_interface__action__TrajectoryExecution_Result__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_Result__Sequence *
reno_interface__action__TrajectoryExecution_Result__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Result__Sequence__destroy(reno_interface__action__TrajectoryExecution_Result__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Result__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_Result__Sequence * lhs, const reno_interface__action__TrajectoryExecution_Result__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Result__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_Result__Sequence * input,
  reno_interface__action__TrajectoryExecution_Result__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_Feedback
 * )) before or use
 * reno_interface__action__TrajectoryExecution_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Feedback__init(reno_interface__action__TrajectoryExecution_Feedback * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Feedback__fini(reno_interface__action__TrajectoryExecution_Feedback * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_Feedback *
reno_interface__action__TrajectoryExecution_Feedback__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Feedback__destroy(reno_interface__action__TrajectoryExecution_Feedback * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Feedback__are_equal(const reno_interface__action__TrajectoryExecution_Feedback * lhs, const reno_interface__action__TrajectoryExecution_Feedback * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Feedback__copy(
  const reno_interface__action__TrajectoryExecution_Feedback * input,
  reno_interface__action__TrajectoryExecution_Feedback * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Feedback__Sequence__init(reno_interface__action__TrajectoryExecution_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Feedback__Sequence__fini(reno_interface__action__TrajectoryExecution_Feedback__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_Feedback__Sequence *
reno_interface__action__TrajectoryExecution_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_Feedback__Sequence__destroy(reno_interface__action__TrajectoryExecution_Feedback__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Feedback__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_Feedback__Sequence * lhs, const reno_interface__action__TrajectoryExecution_Feedback__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_Feedback__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_Feedback__Sequence * input,
  reno_interface__action__TrajectoryExecution_Feedback__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_SendGoal_Request
 * )) before or use
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__init(reno_interface__action__TrajectoryExecution_SendGoal_Request * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(reno_interface__action__TrajectoryExecution_SendGoal_Request * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_SendGoal_Request *
reno_interface__action__TrajectoryExecution_SendGoal_Request__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Request__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Request * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Request * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Request * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Request * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Request * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__init(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__fini(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence *
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_SendGoal_Response
 * )) before or use
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__init(reno_interface__action__TrajectoryExecution_SendGoal_Response * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(reno_interface__action__TrajectoryExecution_SendGoal_Response * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_SendGoal_Response *
reno_interface__action__TrajectoryExecution_SendGoal_Response__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Response__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Response * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Response * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Response * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Response * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Response * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__init(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__fini(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence *
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__destroy(reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * lhs, const reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * input,
  reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_GetResult_Request
 * )) before or use
 * reno_interface__action__TrajectoryExecution_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Request__init(reno_interface__action__TrajectoryExecution_GetResult_Request * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Request__fini(reno_interface__action__TrajectoryExecution_GetResult_Request * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_GetResult_Request *
reno_interface__action__TrajectoryExecution_GetResult_Request__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Request__destroy(reno_interface__action__TrajectoryExecution_GetResult_Request * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Request__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Request * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Request * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Request__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Request * input,
  reno_interface__action__TrajectoryExecution_GetResult_Request * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__init(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__fini(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence *
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__destroy(reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * input,
  reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_GetResult_Response
 * )) before or use
 * reno_interface__action__TrajectoryExecution_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Response__init(reno_interface__action__TrajectoryExecution_GetResult_Response * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Response__fini(reno_interface__action__TrajectoryExecution_GetResult_Response * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_GetResult_Response *
reno_interface__action__TrajectoryExecution_GetResult_Response__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Response__destroy(reno_interface__action__TrajectoryExecution_GetResult_Response * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Response__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Response * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Response * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Response__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Response * input,
  reno_interface__action__TrajectoryExecution_GetResult_Response * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__init(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__fini(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence *
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__destroy(reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * lhs, const reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * input,
  reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence * output);

/// Initialize action/TrajectoryExecution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__action__TrajectoryExecution_FeedbackMessage
 * )) before or use
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__init(reno_interface__action__TrajectoryExecution_FeedbackMessage * msg);

/// Finalize action/TrajectoryExecution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(reno_interface__action__TrajectoryExecution_FeedbackMessage * msg);

/// Create action/TrajectoryExecution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_FeedbackMessage *
reno_interface__action__TrajectoryExecution_FeedbackMessage__create();

/// Destroy action/TrajectoryExecution message.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_FeedbackMessage__destroy(reno_interface__action__TrajectoryExecution_FeedbackMessage * msg);

/// Check for action/TrajectoryExecution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__are_equal(const reno_interface__action__TrajectoryExecution_FeedbackMessage * lhs, const reno_interface__action__TrajectoryExecution_FeedbackMessage * rhs);

/// Copy a action/TrajectoryExecution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__copy(
  const reno_interface__action__TrajectoryExecution_FeedbackMessage * input,
  reno_interface__action__TrajectoryExecution_FeedbackMessage * output);

/// Initialize array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__init(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__fini(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array);

/// Create array of action/TrajectoryExecution messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence *
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryExecution messages.
/**
 * It calls
 * reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__destroy(reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * array);

/// Check for action/TrajectoryExecution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__are_equal(const reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * lhs, const reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TrajectoryExecution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence__copy(
  const reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * input,
  reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__FUNCTIONS_H_
