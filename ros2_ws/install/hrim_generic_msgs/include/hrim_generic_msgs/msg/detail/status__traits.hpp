// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include "hrim_generic_msgs/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_msgs::msg::Status>()
{
  return "hrim_generic_msgs::msg::Status";
}

template<>
inline const char * name<hrim_generic_msgs::msg::Status>()
{
  return "hrim_generic_msgs/msg/Status";
}

template<>
struct has_fixed_size<hrim_generic_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_generic_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_generic_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
