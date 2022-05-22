// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__STOP__TRAITS_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__STOP__TRAITS_HPP_

#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>()
{
  return "hrim_actuator_rotaryservo_srvs::srv::Stop_Request";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>()
{
  return "hrim_actuator_rotaryservo_srvs/srv/Stop_Request";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>()
{
  return "hrim_actuator_rotaryservo_srvs::srv::Stop_Response";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>()
{
  return "hrim_actuator_rotaryservo_srvs/srv/Stop_Response";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_srvs::srv::Stop>()
{
  return "hrim_actuator_rotaryservo_srvs::srv::Stop";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_srvs::srv::Stop>()
{
  return "hrim_actuator_rotaryservo_srvs/srv/Stop";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::Stop>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>::value &&
    has_fixed_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::Stop>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>::value &&
    has_bounded_size<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>::value
  >
{
};

template<>
struct is_service<hrim_actuator_rotaryservo_srvs::srv::Stop>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_actuator_rotaryservo_srvs::srv::Stop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_actuator_rotaryservo_srvs::srv::Stop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__STOP__TRAITS_HPP_
