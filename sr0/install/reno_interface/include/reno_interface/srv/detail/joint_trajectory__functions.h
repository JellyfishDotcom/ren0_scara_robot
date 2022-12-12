// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_
#define RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "reno_interface/msg/rosidl_generator_c__visibility_control.h"

#include "reno_interface/srv/detail/joint_trajectory__struct.h"

/// Initialize srv/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__srv__JointTrajectory_Request
 * )) before or use
 * reno_interface__srv__JointTrajectory_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Request__init(reno_interface__srv__JointTrajectory_Request * msg);

/// Finalize srv/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Request__fini(reno_interface__srv__JointTrajectory_Request * msg);

/// Create srv/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__srv__JointTrajectory_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__srv__JointTrajectory_Request *
reno_interface__srv__JointTrajectory_Request__create();

/// Destroy srv/JointTrajectory message.
/**
 * It calls
 * reno_interface__srv__JointTrajectory_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Request__destroy(reno_interface__srv__JointTrajectory_Request * msg);

/// Check for srv/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Request__are_equal(const reno_interface__srv__JointTrajectory_Request * lhs, const reno_interface__srv__JointTrajectory_Request * rhs);

/// Copy a srv/JointTrajectory message.
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
reno_interface__srv__JointTrajectory_Request__copy(
  const reno_interface__srv__JointTrajectory_Request * input,
  reno_interface__srv__JointTrajectory_Request * output);

/// Initialize array of srv/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__srv__JointTrajectory_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Request__Sequence__init(reno_interface__srv__JointTrajectory_Request__Sequence * array, size_t size);

/// Finalize array of srv/JointTrajectory messages.
/**
 * It calls
 * reno_interface__srv__JointTrajectory_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Request__Sequence__fini(reno_interface__srv__JointTrajectory_Request__Sequence * array);

/// Create array of srv/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__srv__JointTrajectory_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__srv__JointTrajectory_Request__Sequence *
reno_interface__srv__JointTrajectory_Request__Sequence__create(size_t size);

/// Destroy array of srv/JointTrajectory messages.
/**
 * It calls
 * reno_interface__srv__JointTrajectory_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Request__Sequence__destroy(reno_interface__srv__JointTrajectory_Request__Sequence * array);

/// Check for srv/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Request__Sequence__are_equal(const reno_interface__srv__JointTrajectory_Request__Sequence * lhs, const reno_interface__srv__JointTrajectory_Request__Sequence * rhs);

/// Copy an array of srv/JointTrajectory messages.
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
reno_interface__srv__JointTrajectory_Request__Sequence__copy(
  const reno_interface__srv__JointTrajectory_Request__Sequence * input,
  reno_interface__srv__JointTrajectory_Request__Sequence * output);

/// Initialize srv/JointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reno_interface__srv__JointTrajectory_Response
 * )) before or use
 * reno_interface__srv__JointTrajectory_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Response__init(reno_interface__srv__JointTrajectory_Response * msg);

/// Finalize srv/JointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Response__fini(reno_interface__srv__JointTrajectory_Response * msg);

/// Create srv/JointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reno_interface__srv__JointTrajectory_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__srv__JointTrajectory_Response *
reno_interface__srv__JointTrajectory_Response__create();

/// Destroy srv/JointTrajectory message.
/**
 * It calls
 * reno_interface__srv__JointTrajectory_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Response__destroy(reno_interface__srv__JointTrajectory_Response * msg);

/// Check for srv/JointTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Response__are_equal(const reno_interface__srv__JointTrajectory_Response * lhs, const reno_interface__srv__JointTrajectory_Response * rhs);

/// Copy a srv/JointTrajectory message.
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
reno_interface__srv__JointTrajectory_Response__copy(
  const reno_interface__srv__JointTrajectory_Response * input,
  reno_interface__srv__JointTrajectory_Response * output);

/// Initialize array of srv/JointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * reno_interface__srv__JointTrajectory_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Response__Sequence__init(reno_interface__srv__JointTrajectory_Response__Sequence * array, size_t size);

/// Finalize array of srv/JointTrajectory messages.
/**
 * It calls
 * reno_interface__srv__JointTrajectory_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Response__Sequence__fini(reno_interface__srv__JointTrajectory_Response__Sequence * array);

/// Create array of srv/JointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * reno_interface__srv__JointTrajectory_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
reno_interface__srv__JointTrajectory_Response__Sequence *
reno_interface__srv__JointTrajectory_Response__Sequence__create(size_t size);

/// Destroy array of srv/JointTrajectory messages.
/**
 * It calls
 * reno_interface__srv__JointTrajectory_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
void
reno_interface__srv__JointTrajectory_Response__Sequence__destroy(reno_interface__srv__JointTrajectory_Response__Sequence * array);

/// Check for srv/JointTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_reno_interface
bool
reno_interface__srv__JointTrajectory_Response__Sequence__are_equal(const reno_interface__srv__JointTrajectory_Response__Sequence * lhs, const reno_interface__srv__JointTrajectory_Response__Sequence * rhs);

/// Copy an array of srv/JointTrajectory messages.
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
reno_interface__srv__JointTrajectory_Response__Sequence__copy(
  const reno_interface__srv__JointTrajectory_Response__Sequence * input,
  reno_interface__srv__JointTrajectory_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__FUNCTIONS_H_
