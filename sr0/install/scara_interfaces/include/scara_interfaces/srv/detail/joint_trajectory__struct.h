// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scara_interfaces:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define SCARA_INTERFACES__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

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

// Struct defined in srv/JointTrajectory in the package scara_interfaces.
typedef struct scara_interfaces__srv__JointTrajectory_Request
{
  trajectory_msgs__msg__JointTrajectoryPoint initial_point;
  trajectory_msgs__msg__JointTrajectoryPoint final_point;
} scara_interfaces__srv__JointTrajectory_Request;

// Struct for a sequence of scara_interfaces__srv__JointTrajectory_Request.
typedef struct scara_interfaces__srv__JointTrajectory_Request__Sequence
{
  scara_interfaces__srv__JointTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__srv__JointTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

// Struct defined in srv/JointTrajectory in the package scara_interfaces.
typedef struct scara_interfaces__srv__JointTrajectory_Response
{
  trajectory_msgs__msg__JointTrajectory trajectory;
} scara_interfaces__srv__JointTrajectory_Response;

// Struct for a sequence of scara_interfaces__srv__JointTrajectory_Response.
typedef struct scara_interfaces__srv__JointTrajectory_Response__Sequence
{
  scara_interfaces__srv__JointTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__srv__JointTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCARA_INTERFACES__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
