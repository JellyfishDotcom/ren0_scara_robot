// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces0:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__STRUCT_HPP_
#define CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces0__srv__MySrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces0__srv__MySrv_Request __declspec(deprecated)
#endif

namespace custom_interfaces0
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MySrv_Request_
{
  using Type = MySrv_Request_<ContainerAllocator>;

  explicit MySrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit MySrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces0::srv::MySrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces0::srv::MySrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces0::srv::MySrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces0::srv::MySrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces0__srv__MySrv_Request
    std::shared_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces0__srv__MySrv_Request
    std::shared_ptr<custom_interfaces0::srv::MySrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MySrv_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const MySrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MySrv_Request_

// alias to use template instance with default allocator
using MySrv_Request =
  custom_interfaces0::srv::MySrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces0


#ifndef _WIN32
# define DEPRECATED__custom_interfaces0__srv__MySrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces0__srv__MySrv_Response __declspec(deprecated)
#endif

namespace custom_interfaces0
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MySrv_Response_
{
  using Type = MySrv_Response_<ContainerAllocator>;

  explicit MySrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c = 0ll;
    }
  }

  explicit MySrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c = 0ll;
    }
  }

  // field types and members
  using _c_type =
    int64_t;
  _c_type c;

  // setters for named parameter idiom
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces0::srv::MySrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces0::srv::MySrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces0::srv::MySrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces0::srv::MySrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces0__srv__MySrv_Response
    std::shared_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces0__srv__MySrv_Response
    std::shared_ptr<custom_interfaces0::srv::MySrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MySrv_Response_ & other) const
  {
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const MySrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MySrv_Response_

// alias to use template instance with default allocator
using MySrv_Response =
  custom_interfaces0::srv::MySrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces0

namespace custom_interfaces0
{

namespace srv
{

struct MySrv
{
  using Request = custom_interfaces0::srv::MySrv_Request;
  using Response = custom_interfaces0::srv::MySrv_Response;
};

}  // namespace srv

}  // namespace custom_interfaces0

#endif  // CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__STRUCT_HPP_
