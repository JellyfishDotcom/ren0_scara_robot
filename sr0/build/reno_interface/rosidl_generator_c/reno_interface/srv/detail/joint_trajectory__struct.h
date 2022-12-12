// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'initial_point'
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in srv/JointTrajectory in the package reno_interface.
typedef struct reno_interface__srv__JointTrajectory_Request
{
  trajectory_msgs__msg__JointTrajectoryPoint initial_point;
  trajectory_msgs__msg__JointTrajectoryPoint final_point;
} reno_interface__srv__JointTrajectory_Request;

// Struct for a sequence of reno_interface__srv__JointTrajectory_Request.
typedef struct reno_interface__srv__JointTrajectory_Request__Sequence
{
  reno_interface__srv__JointTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__srv__JointTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

// Struct defined in srv/JointTrajectory in the package reno_interface.
typedef struct reno_interface__srv__JointTrajectory_Response
{
  trajectory_msgs__msg__JointTrajectory trajectory;
} reno_interface__srv__JointTrajectory_Response;

// Struct for a sequence of reno_interface__srv__JointTrajectory_Response.
typedef struct reno_interface__srv__JointTrajectory_Response__Sequence
{
  reno_interface__srv__JointTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__srv__JointTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
