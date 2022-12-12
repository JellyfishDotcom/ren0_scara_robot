// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scara_interfaces:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_H_
#define SCARA_INTERFACES__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_H_

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

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
} scara_interfaces__action__TrajectoryExecution_Goal;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_Goal.
typedef struct scara_interfaces__action__TrajectoryExecution_Goal__Sequence
{
  scara_interfaces__action__TrajectoryExecution_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_Result
{
  trajectory_msgs__msg__JointTrajectoryPoint final_point;
} scara_interfaces__action__TrajectoryExecution_Result;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_Result.
typedef struct scara_interfaces__action__TrajectoryExecution_Result__Sequence
{
  scara_interfaces__action__TrajectoryExecution_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'actual_point'
// already included above
// #include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_Feedback
{
  trajectory_msgs__msg__JointTrajectoryPoint actual_point;
} scara_interfaces__action__TrajectoryExecution_Feedback;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_Feedback.
typedef struct scara_interfaces__action__TrajectoryExecution_Feedback__Sequence
{
  scara_interfaces__action__TrajectoryExecution_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "scara_interfaces/action/detail/trajectory_execution__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  scara_interfaces__action__TrajectoryExecution_Goal goal;
} scara_interfaces__action__TrajectoryExecution_SendGoal_Request;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_SendGoal_Request.
typedef struct scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence
{
  scara_interfaces__action__TrajectoryExecution_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} scara_interfaces__action__TrajectoryExecution_SendGoal_Response;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_SendGoal_Response.
typedef struct scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence
{
  scara_interfaces__action__TrajectoryExecution_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} scara_interfaces__action__TrajectoryExecution_GetResult_Request;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_GetResult_Request.
typedef struct scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence
{
  scara_interfaces__action__TrajectoryExecution_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_GetResult_Response
{
  int8_t status;
  scara_interfaces__action__TrajectoryExecution_Result result;
} scara_interfaces__action__TrajectoryExecution_GetResult_Response;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_GetResult_Response.
typedef struct scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence
{
  scara_interfaces__action__TrajectoryExecution_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"

// Struct defined in action/TrajectoryExecution in the package scara_interfaces.
typedef struct scara_interfaces__action__TrajectoryExecution_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  scara_interfaces__action__TrajectoryExecution_Feedback feedback;
} scara_interfaces__action__TrajectoryExecution_FeedbackMessage;

// Struct for a sequence of scara_interfaces__action__TrajectoryExecution_FeedbackMessage.
typedef struct scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence
{
  scara_interfaces__action__TrajectoryExecution_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__action__TrajectoryExecution_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCARA_INTERFACES__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_H_
