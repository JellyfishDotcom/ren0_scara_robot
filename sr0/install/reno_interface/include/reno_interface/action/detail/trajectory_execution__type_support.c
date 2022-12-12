// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
#include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "reno_interface/action/detail/trajectory_execution__functions.h"
#include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_Goal__init(message_memory);
}

void TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_member_array[1] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_Goal",  // message name
  1,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_Goal),
  TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_member_array,  // message members
  TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_type_support_handle = {
  0,
  &TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_Goal)() {
  TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_Goal__rosidl_typesupport_introspection_c__TrajectoryExecution_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `final_point`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `final_point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_Result__init(message_memory);
}

void TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_member_array[1] = {
  {
    "final_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_Result, final_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_Result",  // message name
  1,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_Result),
  TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_member_array,  // message members
  TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_type_support_handle = {
  0,
  &TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_Result)() {
  TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_Result__rosidl_typesupport_introspection_c__TrajectoryExecution_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `actual_point`
// already included above
// #include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `actual_point`
// already included above
// #include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_Feedback__init(message_memory);
}

void TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_member_array[1] = {
  {
    "actual_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_Feedback, actual_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_Feedback",  // message name
  1,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_Feedback),
  TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_member_array,  // message members
  TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_type_support_handle = {
  0,
  &TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_Feedback)() {
  TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_Feedback__rosidl_typesupport_introspection_c__TrajectoryExecution_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "reno_interface/action/trajectory_execution.h"
// Member `goal`
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_SendGoal_Request__init(message_memory);
}

void TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Request),
  TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_member_array,  // message members
  TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_type_support_handle = {
  0,
  &TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal_Request)() {
  TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_Goal)();
  if (!TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_SendGoal_Response__init(message_memory);
}

void TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_SendGoal_Response),
  TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_member_array,  // message members
  TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_type_support_handle = {
  0,
  &TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal_Response)() {
  TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_members = {
  "reno_interface__action",  // service namespace
  "TrajectoryExecution_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_type_support_handle = {
  0,
  &reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal)() {
  if (!reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_type_support_handle.typesupport_identifier) {
    reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_SendGoal_Response)()->data;
  }

  return &reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_GetResult_Request__init(message_memory);
}

void TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_GetResult_Request),
  TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_member_array,  // message members
  TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_type_support_handle = {
  0,
  &TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult_Request)() {
  TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "reno_interface/action/trajectory_execution.h"
// Member `result`
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_GetResult_Response__init(message_memory);
}

void TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_GetResult_Response),
  TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_member_array,  // message members
  TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_type_support_handle = {
  0,
  &TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult_Response)() {
  TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_Result)();
  if (!TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_members = {
  "reno_interface__action",  // service namespace
  "TrajectoryExecution_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_type_support_handle = {
  0,
  &reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult)() {
  if (!reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_type_support_handle.typesupport_identifier) {
    reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_GetResult_Response)()->data;
  }

  return &reno_interface__action__detail__trajectory_execution__rosidl_typesupport_introspection_c__TrajectoryExecution_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__functions.h"
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "reno_interface/action/trajectory_execution.h"
// Member `feedback`
// already included above
// #include "reno_interface/action/detail/trajectory_execution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  reno_interface__action__TrajectoryExecution_FeedbackMessage__init(message_memory);
}

void TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_fini_function(void * message_memory)
{
  reno_interface__action__TrajectoryExecution_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reno_interface__action__TrajectoryExecution_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_members = {
  "reno_interface__action",  // message namespace
  "TrajectoryExecution_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(reno_interface__action__TrajectoryExecution_FeedbackMessage),
  TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_member_array,  // message members
  TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_type_support_handle = {
  0,
  &TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reno_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_FeedbackMessage)() {
  TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reno_interface, action, TrajectoryExecution_Feedback)();
  if (!TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryExecution_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryExecution_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
