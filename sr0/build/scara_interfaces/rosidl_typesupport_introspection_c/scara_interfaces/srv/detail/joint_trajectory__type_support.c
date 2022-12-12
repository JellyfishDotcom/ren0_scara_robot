// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scara_interfaces:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scara_interfaces/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "scara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scara_interfaces/srv/detail/joint_trajectory__functions.h"
#include "scara_interfaces/srv/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `initial_point`
// Member `final_point`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `initial_point`
// Member `final_point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scara_interfaces__srv__JointTrajectory_Request__init(message_memory);
}

void JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_fini_function(void * message_memory)
{
  scara_interfaces__srv__JointTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array[2] = {
  {
    "initial_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scara_interfaces__srv__JointTrajectory_Request, initial_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scara_interfaces__srv__JointTrajectory_Request, final_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_members = {
  "scara_interfaces__srv",  // message namespace
  "JointTrajectory_Request",  // message name
  2,  // number of fields
  sizeof(scara_interfaces__srv__JointTrajectory_Request),
  JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array,  // message members
  JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle = {
  0,
  &JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory_Request)() {
  JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "scara_interfaces/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "scara_interfaces/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "scara_interfaces/srv/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scara_interfaces__srv__JointTrajectory_Response__init(message_memory);
}

void JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_fini_function(void * message_memory)
{
  scara_interfaces__srv__JointTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_member_array[1] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scara_interfaces__srv__JointTrajectory_Response, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_members = {
  "scara_interfaces__srv",  // message namespace
  "JointTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(scara_interfaces__srv__JointTrajectory_Response),
  JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_member_array,  // message members
  JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle = {
  0,
  &JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory_Response)() {
  JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "scara_interfaces/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_members = {
  "scara_interfaces__srv",  // service namespace
  "JointTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle = {
  0,
  &scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scara_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory)() {
  if (!scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle.typesupport_identifier) {
    scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, srv, JointTrajectory_Response)()->data;
  }

  return &scara_interfaces__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle;
}
