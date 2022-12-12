// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from reno_interface:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_HPP_
#define RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'initial_point'
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__srv__JointTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__srv__JointTrajectory_Request __declspec(deprecated)
#endif

namespace reno_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointTrajectory_Request_
{
  using Type = JointTrajectory_Request_<ContainerAllocator>;

  explicit JointTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_point(_init),
    final_point(_init)
  {
    (void)_init;
  }

  explicit JointTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_point(_alloc, _init),
    final_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _initial_point_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _initial_point_type initial_point;
  using _final_point_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _final_point_type final_point;

  // setters for named parameter idiom
  Type & set__initial_point(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->initial_point = _arg;
    return *this;
  }
  Type & set__final_point(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->final_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::srv::JointTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::srv::JointTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::srv::JointTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::srv::JointTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__srv__JointTrajectory_Request
    std::shared_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__srv__JointTrajectory_Request
    std::shared_ptr<reno_interface::srv::JointTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTrajectory_Request_ & other) const
  {
    if (this->initial_point != other.initial_point) {
      return false;
    }
    if (this->final_point != other.final_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTrajectory_Request_

// alias to use template instance with default allocator
using JointTrajectory_Request =
  reno_interface::srv::JointTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace reno_interface


// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__srv__JointTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__srv__JointTrajectory_Response __declspec(deprecated)
#endif

namespace reno_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointTrajectory_Response_
{
  using Type = JointTrajectory_Response_<ContainerAllocator>;

  explicit JointTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    (void)_init;
  }

  explicit JointTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::srv::JointTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::srv::JointTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::srv::JointTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::srv::JointTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__srv__JointTrajectory_Response
    std::shared_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__srv__JointTrajectory_Response
    std::shared_ptr<reno_interface::srv::JointTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTrajectory_Response_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTrajectory_Response_

// alias to use template instance with default allocator
using JointTrajectory_Response =
  reno_interface::srv::JointTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace reno_interface

namespace reno_interface
{

namespace srv
{

struct JointTrajectory
{
  using Request = reno_interface::srv::JointTrajectory_Request;
  using Response = reno_interface::srv::JointTrajectory_Response;
};

}  // namespace srv

}  // namespace reno_interface

#endif  // RENO_INTERFACE__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_HPP_
