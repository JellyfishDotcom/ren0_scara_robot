// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
#define RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_

#include "reno_interface/srv/detail/joint_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace reno_interface
{

namespace srv
{

namespace builder
{

class Init_JointTrajectory_Request_final_point
{
public:
  explicit Init_JointTrajectory_Request_final_point(::reno_interface::srv::JointTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::reno_interface::srv::JointTrajectory_Request final_point(::reno_interface::srv::JointTrajectory_Request::_final_point_type arg)
  {
    msg_.final_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::srv::JointTrajectory_Request msg_;
};

class Init_JointTrajectory_Request_initial_point
{
public:
  Init_JointTrajectory_Request_initial_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Request_final_point initial_point(::reno_interface::srv::JointTrajectory_Request::_initial_point_type arg)
  {
    msg_.initial_point = std::move(arg);
    return Init_JointTrajectory_Request_final_point(msg_);
  }

private:
  ::reno_interface::srv::JointTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::srv::JointTrajectory_Request>()
{
  return reno_interface::srv::builder::Init_JointTrajectory_Request_initial_point();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace srv
{

namespace builder
{

class Init_JointTrajectory_Response_trajectory
{
public:
  Init_JointTrajectory_Response_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reno_interface::srv::JointTrajectory_Response trajectory(::reno_interface::srv::JointTrajectory_Response::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::srv::JointTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::srv::JointTrajectory_Response>()
{
  return reno_interface::srv::builder::Init_JointTrajectory_Response_trajectory();
}

}  // namespace reno_interface

#endif  // RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
