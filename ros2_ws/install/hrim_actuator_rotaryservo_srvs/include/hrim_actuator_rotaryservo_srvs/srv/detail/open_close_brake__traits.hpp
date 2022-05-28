// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/OpenCloseBrake.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__TRAITS_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__TRAITS_HPP_

#include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>()
{
  return "hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>()
{
  return "hrim_actuator_rotaryservo_srvs/srv/OpenCloseBrake_Request";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>()
{
  return "hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>()
{
  return "hrim_actuator_rotaryservo_srvs/srv/OpenCloseBrake_Response";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake>()
{
  return "hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake>()
{
  return "hrim_actuator_rotaryservo_srvs/srv/OpenCloseBrake";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>::value &&
    has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>::value &&
    has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>::value
  >
{
};

template<>
struct is_service<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__TRAITS_HPP_
