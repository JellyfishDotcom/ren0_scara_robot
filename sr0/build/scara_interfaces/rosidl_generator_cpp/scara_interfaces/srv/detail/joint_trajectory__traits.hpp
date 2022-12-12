// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scara_interfaces:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
#define SCARA_INTERFACES__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_

#include "scara_interfaces/srv/detail/joint_trajectory__struct.hpp"
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
  const scara_interfaces::srv::JointTrajectory_Request & msg,
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

inline std::string to_yaml(const scara_interfaces::srv::JointTrajectory_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<scara_interfaces::srv::JointTrajectory_Request>()
{
  return "scara_interfaces::srv::JointTrajectory_Request";
}

template<>
inline const char * name<scara_interfaces::srv::JointTrajectory_Request>()
{
  return "scara_interfaces/srv/JointTrajectory_Request";
}

template<>
struct has_fixed_size<scara_interfaces::srv::JointTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct has_bounded_size<scara_interfaces::srv::JointTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct is_message<scara_interfaces::srv::JointTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const scara_interfaces::srv::JointTrajectory_Response & msg,
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

inline std::string to_yaml(const scara_interfaces::srv::JointTrajectory_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<scara_interfaces::srv::JointTrajectory_Response>()
{
  return "scara_interfaces::srv::JointTrajectory_Response";
}

template<>
inline const char * name<scara_interfaces::srv::JointTrajectory_Response>()
{
  return "scara_interfaces/srv/JointTrajectory_Response";
}

template<>
struct has_fixed_size<scara_interfaces::srv::JointTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<scara_interfaces::srv::JointTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct is_message<scara_interfaces::srv::JointTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scara_interfaces::srv::JointTrajectory>()
{
  return "scara_interfaces::srv::JointTrajectory";
}

template<>
inline const char * name<scara_interfaces::srv::JointTrajectory>()
{
  return "scara_interfaces/srv/JointTrajectory";
}

template<>
struct has_fixed_size<scara_interfaces::srv::JointTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<scara_interfaces::srv::JointTrajectory_Request>::value &&
    has_fixed_size<scara_interfaces::srv::JointTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<scara_interfaces::srv::JointTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<scara_interfaces::srv::JointTrajectory_Request>::value &&
    has_bounded_size<scara_interfaces::srv::JointTrajectory_Response>::value
  >
{
};

template<>
struct is_service<scara_interfaces::srv::JointTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<scara_interfaces::srv::JointTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<scara_interfaces::srv::JointTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCARA_INTERFACES__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
