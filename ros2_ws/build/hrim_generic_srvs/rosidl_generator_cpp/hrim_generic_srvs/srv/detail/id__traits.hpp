// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__ID__TRAITS_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__ID__TRAITS_HPP_

#include "hrim_generic_srvs/srv/detail/id__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_srvs::srv::ID_Request>()
{
  return "hrim_generic_srvs::srv::ID_Request";
}

template<>
inline const char * name<hrim_generic_srvs::srv::ID_Request>()
{
  return "hrim_generic_srvs/srv/ID_Request";
}

template<>
struct has_fixed_size<hrim_generic_srvs::srv::ID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_generic_srvs::srv::ID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_generic_srvs::srv::ID_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_srvs::srv::ID_Response>()
{
  return "hrim_generic_srvs::srv::ID_Response";
}

template<>
inline const char * name<hrim_generic_srvs::srv::ID_Response>()
{
  return "hrim_generic_srvs/srv/ID_Response";
}

template<>
struct has_fixed_size<hrim_generic_srvs::srv::ID_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_generic_srvs::srv::ID_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_generic_srvs::srv::ID_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_srvs::srv::ID>()
{
  return "hrim_generic_srvs::srv::ID";
}

template<>
inline const char * name<hrim_generic_srvs::srv::ID>()
{
  return "hrim_generic_srvs/srv/ID";
}

template<>
struct has_fixed_size<hrim_generic_srvs::srv::ID>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_generic_srvs::srv::ID_Request>::value &&
    has_fixed_size<hrim_generic_srvs::srv::ID_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_generic_srvs::srv::ID>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_generic_srvs::srv::ID_Request>::value &&
    has_bounded_size<hrim_generic_srvs::srv::ID_Response>::value
  >
{
};

template<>
struct is_service<hrim_generic_srvs::srv::ID>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_generic_srvs::srv::ID_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_generic_srvs::srv::ID_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__ID__TRAITS_HPP_
