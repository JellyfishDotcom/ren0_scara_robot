// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
#define RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_

#include "reno_interface/srv/detail/joint_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'initial_point'
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::srv::JointTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initial_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_point:\n";
    to_yaml(msg.initial_point, out, indentation + 2);
  }

  // member: final_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_point:\n";
    to_yaml(msg.final_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const reno_interface::srv::JointTrajectory_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::srv::JointTrajectory_Request>()
{
  return "reno_interface::srv::JointTrajectory_Request";
}

template<>
inline const char * name<reno_interface::srv::JointTrajectory_Request>()
{
  return "reno_interface/srv/JointTrajectory_Request";
}

template<>
struct has_fixed_size<reno_interface::srv::JointTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct has_bounded_size<reno_interface::srv::JointTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct is_message<reno_interface::srv::JointTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const reno_interface::srv::JointTrajectory_Response & msg,
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

inline std::string to_yaml(const reno_interface::srv::JointTrajectory_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<reno_interface::srv::JointTrajectory_Response>()
{
  return "reno_interface::srv::JointTrajectory_Response";
}

template<>
inline const char * name<reno_interface::srv::JointTrajectory_Response>()
{
  return "reno_interface/srv/JointTrajectory_Response";
}

template<>
struct has_fixed_size<reno_interface::srv::JointTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<reno_interface::srv::JointTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct is_message<reno_interface::srv::JointTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reno_interface::srv::JointTrajectory>()
{
  return "reno_interface::srv::JointTrajectory";
}

template<>
inline const char * name<reno_interface::srv::JointTrajectory>()
{
  return "reno_interface/srv/JointTrajectory";
}

template<>
struct has_fixed_size<reno_interface::srv::JointTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<reno_interface::srv::JointTrajectory_Request>::value &&
    has_fixed_size<reno_interface::srv::JointTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<reno_interface::srv::JointTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<reno_interface::srv::JointTrajectory_Request>::value &&
    has_bounded_size<reno_interface::srv::JointTrajectory_Response>::value
  >
{
};

template<>
struct is_service<reno_interface::srv::JointTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<reno_interface::srv::JointTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<reno_interface::srv::JointTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
