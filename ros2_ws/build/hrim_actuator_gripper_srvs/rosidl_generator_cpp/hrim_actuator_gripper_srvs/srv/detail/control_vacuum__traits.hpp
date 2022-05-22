// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__TRAITS_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__TRAITS_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>()
{
  return "hrim_actuator_gripper_srvs::srv::ControlVacuum_Request";
}

template<>
inline const char * name<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>()
{
  return "hrim_actuator_gripper_srvs/srv/ControlVacuum_Request";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>()
{
  return "hrim_actuator_gripper_srvs::srv::ControlVacuum_Response";
}

template<>
inline const char * name<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>()
{
  return "hrim_actuator_gripper_srvs/srv/ControlVacuum_Response";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_srvs::srv::ControlVacuum>()
{
  return "hrim_actuator_gripper_srvs::srv::ControlVacuum";
}

template<>
inline const char * name<hrim_actuator_gripper_srvs::srv::ControlVacuum>()
{
  return "hrim_actuator_gripper_srvs/srv/ControlVacuum";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_srvs::srv::ControlVacuum>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>::value &&
    has_fixed_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_actuator_gripper_srvs::srv::ControlVacuum>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>::value &&
    has_bounded_size<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>::value
  >
{
};

template<>
struct is_service<hrim_actuator_gripper_srvs::srv::ControlVacuum>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__TRAITS_HPP_
