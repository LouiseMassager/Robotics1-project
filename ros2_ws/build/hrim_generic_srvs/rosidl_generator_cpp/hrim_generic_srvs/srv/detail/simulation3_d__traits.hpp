// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__TRAITS_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__TRAITS_HPP_

#include "hrim_generic_srvs/srv/detail/simulation3_d__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_srvs::srv::Simulation3D_Request>()
{
  return "hrim_generic_srvs::srv::Simulation3D_Request";
}

template<>
inline const char * name<hrim_generic_srvs::srv::Simulation3D_Request>()
{
  return "hrim_generic_srvs/srv/Simulation3D_Request";
}

template<>
struct has_fixed_size<hrim_generic_srvs::srv::Simulation3D_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_generic_srvs::srv::Simulation3D_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_generic_srvs::srv::Simulation3D_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_srvs::srv::Simulation3D_Response>()
{
  return "hrim_generic_srvs::srv::Simulation3D_Response";
}

template<>
inline const char * name<hrim_generic_srvs::srv::Simulation3D_Response>()
{
  return "hrim_generic_srvs/srv/Simulation3D_Response";
}

template<>
struct has_fixed_size<hrim_generic_srvs::srv::Simulation3D_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_generic_srvs::srv::Simulation3D_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_generic_srvs::srv::Simulation3D_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_generic_srvs::srv::Simulation3D>()
{
  return "hrim_generic_srvs::srv::Simulation3D";
}

template<>
inline const char * name<hrim_generic_srvs::srv::Simulation3D>()
{
  return "hrim_generic_srvs/srv/Simulation3D";
}

template<>
struct has_fixed_size<hrim_generic_srvs::srv::Simulation3D>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_generic_srvs::srv::Simulation3D_Request>::value &&
    has_fixed_size<hrim_generic_srvs::srv::Simulation3D_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_generic_srvs::srv::Simulation3D>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_generic_srvs::srv::Simulation3D_Request>::value &&
    has_bounded_size<hrim_generic_srvs::srv::Simulation3D_Response>::value
  >
{
};

template<>
struct is_service<hrim_generic_srvs::srv::Simulation3D>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_generic_srvs::srv::Simulation3D_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_generic_srvs::srv::Simulation3D_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__TRAITS_HPP_
