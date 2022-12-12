// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces0:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__TRAITS_HPP_
#define CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__TRAITS_HPP_

#include "custom_interfaces0/srv/detail/my_srv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::srv::MySrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces0::srv::MySrv_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::srv::MySrv_Request>()
{
  return "custom_interfaces0::srv::MySrv_Request";
}

template<>
inline const char * name<custom_interfaces0::srv::MySrv_Request>()
{
  return "custom_interfaces0/srv/MySrv_Request";
}

template<>
struct has_fixed_size<custom_interfaces0::srv::MySrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces0::srv::MySrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces0::srv::MySrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces0::srv::MySrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces0::srv::MySrv_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces0::srv::MySrv_Response>()
{
  return "custom_interfaces0::srv::MySrv_Response";
}

template<>
inline const char * name<custom_interfaces0::srv::MySrv_Response>()
{
  return "custom_interfaces0/srv/MySrv_Response";
}

template<>
struct has_fixed_size<custom_interfaces0::srv::MySrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces0::srv::MySrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces0::srv::MySrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces0::srv::MySrv>()
{
  return "custom_interfaces0::srv::MySrv";
}

template<>
inline const char * name<custom_interfaces0::srv::MySrv>()
{
  return "custom_interfaces0/srv/MySrv";
}

template<>
struct has_fixed_size<custom_interfaces0::srv::MySrv>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces0::srv::MySrv_Request>::value &&
    has_fixed_size<custom_interfaces0::srv::MySrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces0::srv::MySrv>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces0::srv::MySrv_Request>::value &&
    has_bounded_size<custom_interfaces0::srv::MySrv_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces0::srv::MySrv>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces0::srv::MySrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces0::srv::MySrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES0__SRV__DETAIL__MY_SRV__TRAITS_HPP_
