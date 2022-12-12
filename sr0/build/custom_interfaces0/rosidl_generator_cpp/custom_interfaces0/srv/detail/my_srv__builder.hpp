// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces0:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__BUILDER_HPP_
#define CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__BUILDER_HPP_

#include "custom_interfaces0/srv/detail/my_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces0
{

namespace srv
{

namespace builder
{

class Init_MySrv_Request_b
{
public:
  explicit Init_MySrv_Request_b(::custom_interfaces0::srv::MySrv_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces0::srv::MySrv_Request b(::custom_interfaces0::srv::MySrv_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::srv::MySrv_Request msg_;
};

class Init_MySrv_Request_a
{
public:
  Init_MySrv_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MySrv_Request_b a(::custom_interfaces0::srv::MySrv_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MySrv_Request_b(msg_);
  }

private:
  ::custom_interfaces0::srv::MySrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::srv::MySrv_Request>()
{
  return custom_interfaces0::srv::builder::Init_MySrv_Request_a();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace srv
{

namespace builder
{

class Init_MySrv_Response_c
{
public:
  Init_MySrv_Response_c()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces0::srv::MySrv_Response c(::custom_interfaces0::srv::MySrv_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::srv::MySrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::srv::MySrv_Response>()
{
  return custom_interfaces0::srv::builder::Init_MySrv_Response_c();
}

}  // namespace custom_interfaces0

#endif  // CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__BUILDER_HPP_
