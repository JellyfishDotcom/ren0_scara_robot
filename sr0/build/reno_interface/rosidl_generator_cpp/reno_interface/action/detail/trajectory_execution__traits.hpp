// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__TRAITS_HPP_
#define RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__TRAITS_HPP_

#include "reno_interface/action/detail/trajectory_execution__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_yaml(msg.trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_Goal>()
{
  return "reno_interface::action::TrajectoryExecution_Goal";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_Goal>()
{
  return "reno_interface/action/TrajectoryExecution_Goal";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_Goal>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_Goal>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_point:\n";
    to_yaml(msg.final_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_Result>()
{
  return "reno_interface::action::TrajectoryExecution_Result";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_Result>()
{
  return "reno_interface/action/TrajectoryExecution_Result";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_Result>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_Result>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'actual_point'
// already included above
// #include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actual_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_point:\n";
    to_yaml(msg.actual_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_Feedback>()
{
  return "reno_interface::action::TrajectoryExecution_Feedback";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_Feedback>()
{
  return "reno_interface/action/TrajectoryExecution_Feedback";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_Feedback>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_Feedback>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "reno_interface/action/detail/trajectory_execution__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_SendGoal_Request>()
{
  return "reno_interface::action::TrajectoryExecution_SendGoal_Request";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_SendGoal_Request>()
{
  return "reno_interface/action/TrajectoryExecution_SendGoal_Request";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<reno_interface::action::TrajectoryExecution_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<reno_interface::action::TrajectoryExecution_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_SendGoal_Response>()
{
  return "reno_interface::action::TrajectoryExecution_SendGoal_Response";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_SendGoal_Response>()
{
  return "reno_interface/action/TrajectoryExecution_SendGoal_Response";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_SendGoal>()
{
  return "reno_interface::action::TrajectoryExecution_SendGoal";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_SendGoal>()
{
  return "reno_interface/action/TrajectoryExecution_SendGoal";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<reno_interface::action::TrajectoryExecution_SendGoal_Request>::value &&
    has_fixed_size<reno_interface::action::TrajectoryExecution_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<reno_interface::action::TrajectoryExecution_SendGoal_Request>::value &&
    has_bounded_size<reno_interface::action::TrajectoryExecution_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<reno_interface::action::TrajectoryExecution_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<reno_interface::action::TrajectoryExecution_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<reno_interface::action::TrajectoryExecution_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_GetResult_Request>()
{
  return "reno_interface::action::TrajectoryExecution_GetResult_Request";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_GetResult_Request>()
{
  return "reno_interface/action/TrajectoryExecution_GetResult_Request";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "reno_interface/action/detail/trajectory_execution__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_GetResult_Response>()
{
  return "reno_interface::action::TrajectoryExecution_GetResult_Response";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_GetResult_Response>()
{
  return "reno_interface/action/TrajectoryExecution_GetResult_Response";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<reno_interface::action::TrajectoryExecution_Result>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<reno_interface::action::TrajectoryExecution_Result>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_GetResult>()
{
  return "reno_interface::action::TrajectoryExecution_GetResult";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_GetResult>()
{
  return "reno_interface/action/TrajectoryExecution_GetResult";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<reno_interface::action::TrajectoryExecution_GetResult_Request>::value &&
    has_fixed_size<reno_interface::action::TrajectoryExecution_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<reno_interface::action::TrajectoryExecution_GetResult_Request>::value &&
    has_bounded_size<reno_interface::action::TrajectoryExecution_GetResult_Response>::value
  >
{
};

template<>
struct is_service<reno_interface::action::TrajectoryExecution_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<reno_interface::action::TrajectoryExecution_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<reno_interface::action::TrajectoryExecution_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "reno_interface/action/detail/trajectory_execution__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::action::TrajectoryExecution_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::action::TrajectoryExecution_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::action::TrajectoryExecution_FeedbackMessage>()
{
  return "reno_interface::action::TrajectoryExecution_FeedbackMessage";
}

template<>
inline const char * name<reno_interface::action::TrajectoryExecution_FeedbackMessage>()
{
  return "reno_interface/action/TrajectoryExecution_FeedbackMessage";
}

template<>
struct has_fixed_size<reno_interface::action::TrajectoryExecution_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<reno_interface::action::TrajectoryExecution_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<reno_interface::action::TrajectoryExecution_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<reno_interface::action::TrajectoryExecution_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<reno_interface::action::TrajectoryExecution_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<reno_interface::action::TrajectoryExecution>
  : std::true_type
{
};

template<>
struct is_action_goal<reno_interface::action::TrajectoryExecution_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<reno_interface::action::TrajectoryExecution_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<reno_interface::action::TrajectoryExecution_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__TRAITS_HPP_
