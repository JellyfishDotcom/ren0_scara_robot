// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_H_
#define RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
} reno_interface__action__TrajectoryExecution_Goal;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_Goal.
typedef struct reno_interface__action__TrajectoryExecution_Goal__Sequence
{
  reno_interface__action__TrajectoryExecution_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_Result
{
  trajectory_msgs__msg__JointTrajectoryPoint final_point;
} reno_interface__action__TrajectoryExecution_Result;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_Result.
typedef struct reno_interface__action__TrajectoryExecution_Result__Sequence
{
  reno_interface__action__TrajectoryExecution_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'actual_point'
// already included above
// #include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_Feedback
{
  trajectory_msgs__msg__JointTrajectoryPoint actual_point;
} reno_interface__action__TrajectoryExecution_Feedback;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_Feedback.
typedef struct reno_interface__action__TrajectoryExecution_Feedback__Sequence
{
  reno_interface__action__TrajectoryExecution_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "reno_interface/action/detail/trajectory_execution__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  reno_interface__action__TrajectoryExecution_Goal goal;
} reno_interface__action__TrajectoryExecution_SendGoal_Request;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_SendGoal_Request.
typedef struct reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence
{
  reno_interface__action__TrajectoryExecution_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} reno_interface__action__TrajectoryExecution_SendGoal_Response;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_SendGoal_Response.
typedef struct reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence
{
  reno_interface__action__TrajectoryExecution_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} reno_interface__action__TrajectoryExecution_GetResult_Request;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_GetResult_Request.
typedef struct reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence
{
  reno_interface__action__TrajectoryExecution_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_GetResult_Response
{
  int8_t status;
  reno_interface__action__TrajectoryExecution_Result result;
} reno_interface__action__TrajectoryExecution_GetResult_Response;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_GetResult_Response.
typedef struct reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence
{
  reno_interface__action__TrajectoryExecution_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"

// Struct defined in action/TrajectoryExecution in the package reno_interface.
typedef struct reno_interface__action__TrajectoryExecution_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  reno_interface__action__TrajectoryExecution_Feedback feedback;
} reno_interface__action__TrajectoryExecution_FeedbackMessage;

// Struct for a sequence of reno_interface__action__TrajectoryExecution_FeedbackMessage.
typedef struct reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence
{
  reno_interface__action__TrajectoryExecution_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reno_interface__action__TrajectoryExecution_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_H_
