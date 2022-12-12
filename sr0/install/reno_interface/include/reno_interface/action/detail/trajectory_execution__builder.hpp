// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__BUILDER_HPP_
#define RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__BUILDER_HPP_

#include "reno_interface/action/detail/trajectory_execution__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_Goal_trajectory
{
public:
  Init_TrajectoryExecution_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reno_interface::action::TrajectoryExecution_Goal trajectory(::reno_interface::action::TrajectoryExecution_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_Goal>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_Goal_trajectory();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_Result_final_point
{
public:
  Init_TrajectoryExecution_Result_final_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reno_interface::action::TrajectoryExecution_Result final_point(::reno_interface::action::TrajectoryExecution_Result::_final_point_type arg)
  {
    msg_.final_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_Result>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_Result_final_point();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_Feedback_actual_point
{
public:
  Init_TrajectoryExecution_Feedback_actual_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reno_interface::action::TrajectoryExecution_Feedback actual_point(::reno_interface::action::TrajectoryExecution_Feedback::_actual_point_type arg)
  {
    msg_.actual_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_Feedback>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_Feedback_actual_point();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_SendGoal_Request_goal
{
public:
  explicit Init_TrajectoryExecution_SendGoal_Request_goal(::reno_interface::action::TrajectoryExecution_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::reno_interface::action::TrajectoryExecution_SendGoal_Request goal(::reno_interface::action::TrajectoryExecution_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_SendGoal_Request msg_;
};

class Init_TrajectoryExecution_SendGoal_Request_goal_id
{
public:
  Init_TrajectoryExecution_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryExecution_SendGoal_Request_goal goal_id(::reno_interface::action::TrajectoryExecution_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrajectoryExecution_SendGoal_Request_goal(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_SendGoal_Request>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_SendGoal_Request_goal_id();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_SendGoal_Response_stamp
{
public:
  explicit Init_TrajectoryExecution_SendGoal_Response_stamp(::reno_interface::action::TrajectoryExecution_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::reno_interface::action::TrajectoryExecution_SendGoal_Response stamp(::reno_interface::action::TrajectoryExecution_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_SendGoal_Response msg_;
};

class Init_TrajectoryExecution_SendGoal_Response_accepted
{
public:
  Init_TrajectoryExecution_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryExecution_SendGoal_Response_stamp accepted(::reno_interface::action::TrajectoryExecution_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TrajectoryExecution_SendGoal_Response_stamp(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_SendGoal_Response>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_SendGoal_Response_accepted();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_GetResult_Request_goal_id
{
public:
  Init_TrajectoryExecution_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::reno_interface::action::TrajectoryExecution_GetResult_Request goal_id(::reno_interface::action::TrajectoryExecution_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_GetResult_Request>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_GetResult_Request_goal_id();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_GetResult_Response_result
{
public:
  explicit Init_TrajectoryExecution_GetResult_Response_result(::reno_interface::action::TrajectoryExecution_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::reno_interface::action::TrajectoryExecution_GetResult_Response result(::reno_interface::action::TrajectoryExecution_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_GetResult_Response msg_;
};

class Init_TrajectoryExecution_GetResult_Response_status
{
public:
  Init_TrajectoryExecution_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryExecution_GetResult_Response_result status(::reno_interface::action::TrajectoryExecution_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrajectoryExecution_GetResult_Response_result(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_GetResult_Response>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_GetResult_Response_status();
}

}  // namespace reno_interface


namespace reno_interface
{

namespace action
{

namespace builder
{

class Init_TrajectoryExecution_FeedbackMessage_feedback
{
public:
  explicit Init_TrajectoryExecution_FeedbackMessage_feedback(::reno_interface::action::TrajectoryExecution_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::reno_interface::action::TrajectoryExecution_FeedbackMessage feedback(::reno_interface::action::TrajectoryExecution_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_FeedbackMessage msg_;
};

class Init_TrajectoryExecution_FeedbackMessage_goal_id
{
public:
  Init_TrajectoryExecution_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryExecution_FeedbackMessage_feedback goal_id(::reno_interface::action::TrajectoryExecution_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrajectoryExecution_FeedbackMessage_feedback(msg_);
  }

private:
  ::reno_interface::action::TrajectoryExecution_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::reno_interface::action::TrajectoryExecution_FeedbackMessage>()
{
  return reno_interface::action::builder::Init_TrajectoryExecution_FeedbackMessage_goal_id();
}

}  // namespace reno_interface

#endif  // RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__BUILDER_HPP_
