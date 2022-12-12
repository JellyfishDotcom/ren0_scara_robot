// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces0:action/Myaction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES0__ACTION__DETAIL__MYACTION__TRAITS_HPP_
#define CUSTOM_INTERFACES0__ACTION__DETAIL__MYACTION__TRAITS_HPP_

#include "custom_interfaces0/action/detail/myaction__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_position.size() == 0) {
      out << "goal_position: []\n";
    } else {
      out << "goal_position:\n";
      for (auto item : msg.goal_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces0::action::Myaction_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_Goal>()
{
  return "custom_interfaces0::action::Myaction_Goal";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_Goal>()
{
  return "custom_interfaces0/action/Myaction_Goal";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_position.size() == 0) {
      out << "result_position: []\n";
    } else {
      out << "result_position:\n";
      for (auto item : msg.result_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces0::action::Myaction_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_Result>()
{
  return "custom_interfaces0::action::Myaction_Result";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_Result>()
{
  return "custom_interfaces0/action/Myaction_Result";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_position.size() == 0) {
      out << "current_position: []\n";
    } else {
      out << "current_position:\n";
      for (auto item : msg.current_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces0::action::Myaction_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_Feedback>()
{
  return "custom_interfaces0::action::Myaction_Feedback";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_Feedback>()
{
  return "custom_interfaces0/action/Myaction_Feedback";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "custom_interfaces0/action/detail/myaction__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_SendGoal_Request & msg,
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

inline std::string to_yaml(const custom_interfaces0::action::Myaction_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_SendGoal_Request>()
{
  return "custom_interfaces0::action::Myaction_SendGoal_Request";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_SendGoal_Request>()
{
  return "custom_interfaces0/action/Myaction_SendGoal_Request";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<custom_interfaces0::action::Myaction_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<custom_interfaces0::action::Myaction_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_SendGoal_Response & msg,
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

inline std::string to_yaml(const custom_interfaces0::action::Myaction_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_SendGoal_Response>()
{
  return "custom_interfaces0::action::Myaction_SendGoal_Response";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_SendGoal_Response>()
{
  return "custom_interfaces0/action/Myaction_SendGoal_Response";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_SendGoal>()
{
  return "custom_interfaces0::action::Myaction_SendGoal";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_SendGoal>()
{
  return "custom_interfaces0/action/Myaction_SendGoal";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces0::action::Myaction_SendGoal_Request>::value &&
    has_fixed_size<custom_interfaces0::action::Myaction_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces0::action::Myaction_SendGoal_Request>::value &&
    has_bounded_size<custom_interfaces0::action::Myaction_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces0::action::Myaction_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces0::action::Myaction_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces0::action::Myaction_SendGoal_Response>
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
  const custom_interfaces0::action::Myaction_GetResult_Request & msg,
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

inline std::string to_yaml(const custom_interfaces0::action::Myaction_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_GetResult_Request>()
{
  return "custom_interfaces0::action::Myaction_GetResult_Request";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_GetResult_Request>()
{
  return "custom_interfaces0/action/Myaction_GetResult_Request";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_interfaces0/action/detail/myaction__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_GetResult_Response & msg,
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

inline std::string to_yaml(const custom_interfaces0::action::Myaction_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_GetResult_Response>()
{
  return "custom_interfaces0::action::Myaction_GetResult_Response";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_GetResult_Response>()
{
  return "custom_interfaces0/action/Myaction_GetResult_Response";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<custom_interfaces0::action::Myaction_Result>::value> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<custom_interfaces0::action::Myaction_Result>::value> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_GetResult>()
{
  return "custom_interfaces0::action::Myaction_GetResult";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_GetResult>()
{
  return "custom_interfaces0/action/Myaction_GetResult";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces0::action::Myaction_GetResult_Request>::value &&
    has_fixed_size<custom_interfaces0::action::Myaction_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces0::action::Myaction_GetResult_Request>::value &&
    has_bounded_size<custom_interfaces0::action::Myaction_GetResult_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces0::action::Myaction_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces0::action::Myaction_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces0::action::Myaction_GetResult_Response>
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
// #include "custom_interfaces0/action/detail/myaction__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::action::Myaction_FeedbackMessage & msg,
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

inline std::string to_yaml(const custom_interfaces0::action::Myaction_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::action::Myaction_FeedbackMessage>()
{
  return "custom_interfaces0::action::Myaction_FeedbackMessage";
}

template<>
inline const char * name<custom_interfaces0::action::Myaction_FeedbackMessage>()
{
  return "custom_interfaces0/action/Myaction_FeedbackMessage";
}

template<>
struct has_fixed_size<custom_interfaces0::action::Myaction_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<custom_interfaces0::action::Myaction_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_interfaces0::action::Myaction_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<custom_interfaces0::action::Myaction_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_interfaces0::action::Myaction_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<custom_interfaces0::action::Myaction>
  : std::true_type
{
};

template<>
struct is_action_goal<custom_interfaces0::action::Myaction_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<custom_interfaces0::action::Myaction_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<custom_interfaces0::action::Myaction_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CUSTOM_INTERFACES0__ACTION__DETAIL__MYACTION__TRAITS_HPP_
