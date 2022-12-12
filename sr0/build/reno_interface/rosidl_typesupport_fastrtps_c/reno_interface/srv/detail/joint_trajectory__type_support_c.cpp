// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice
#include "reno_interface/srv/detail/joint_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "reno_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "reno_interface/srv/detail/joint_trajectory__struct.h"
#include "reno_interface/srv/detail/joint_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // final_point, initial_point

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_reno_interface
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_reno_interface
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_reno_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint)();


using _JointTrajectory_Request__ros_msg_type = reno_interface__srv__JointTrajectory_Request;

static bool _JointTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointTrajectory_Request__ros_msg_type * ros_message = static_cast<const _JointTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_point, cdr))
    {
      return false;
    }
  }

  // Field name: final_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->final_point, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointTrajectory_Request__ros_msg_type * ros_message = static_cast<_JointTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_point))
    {
      return false;
    }
  }

  // Field name: final_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->final_point))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reno_interface
size_t get_serialized_size_reno_interface__srv__JointTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointTrajectory_Request__ros_msg_type * ros_message = static_cast<const _JointTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name initial_point

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->initial_point), current_alignment);
  // field.name final_point

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->final_point), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_reno_interface__srv__JointTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reno_interface
size_t max_serialized_size_reno_interface__srv__JointTrajectory_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: initial_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: final_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _JointTrajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_reno_interface__srv__JointTrajectory_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointTrajectory_Request = {
  "reno_interface::srv",
  "JointTrajectory_Request",
  _JointTrajectory_Request__cdr_serialize,
  _JointTrajectory_Request__cdr_deserialize,
  _JointTrajectory_Request__get_serialized_size,
  _JointTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reno_interface, srv, JointTrajectory_Request)() {
  return &_JointTrajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "reno_interface/srv/detail/joint_trajectory__struct.h"
// already included above
// #include "reno_interface/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"  // trajectory

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_reno_interface
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_reno_interface
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_reno_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory)();


using _JointTrajectory_Response__ros_msg_type = reno_interface__srv__JointTrajectory_Response;

static bool _JointTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointTrajectory_Response__ros_msg_type * ros_message = static_cast<const _JointTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointTrajectory_Response__ros_msg_type * ros_message = static_cast<_JointTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reno_interface
size_t get_serialized_size_reno_interface__srv__JointTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointTrajectory_Response__ros_msg_type * ros_message = static_cast<const _JointTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->trajectory), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_reno_interface__srv__JointTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_reno_interface
size_t max_serialized_size_reno_interface__srv__JointTrajectory_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _JointTrajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_reno_interface__srv__JointTrajectory_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointTrajectory_Response = {
  "reno_interface::srv",
  "JointTrajectory_Response",
  _JointTrajectory_Response__cdr_serialize,
  _JointTrajectory_Response__cdr_deserialize,
  _JointTrajectory_Response__get_serialized_size,
  _JointTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reno_interface, srv, JointTrajectory_Response)() {
  return &_JointTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "reno_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "reno_interface/srv/joint_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t JointTrajectory__callbacks = {
  "reno_interface::srv",
  "JointTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reno_interface, srv, JointTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reno_interface, srv, JointTrajectory_Response)(),
};

static rosidl_service_type_support_t JointTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &JointTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, reno_interface, srv, JointTrajectory)() {
  return &JointTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
