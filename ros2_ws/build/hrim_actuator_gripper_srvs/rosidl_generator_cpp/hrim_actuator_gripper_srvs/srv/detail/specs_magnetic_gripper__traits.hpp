// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsMagneticGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__TRAITS_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__TRAITS_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/specs_magnetic_gripper__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>()
{
  return "hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request";
}

template<>
inline const char * name<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>()
{
  return "hrim_actuator_gripper_srvs/srv/SpecsMagneticGripper_Request";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>()
{
  return "hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response";
}

template<>
inline const char * name<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>()
{
  return "hrim_actuator_gripper_srvs/srv/SpecsMagneticGripper_Response";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper>()
{
  return "hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper";
}

template<>
inline const char * name<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper>()
{
  return "hrim_actuator_gripper_srvs/srv/SpecsMagneticGripper";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>::value &&
    has_fixed_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>::value &&
    has_bounded_size<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>::value
  >
{
};

template<>
struct is_service<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__TRAITS_HPP_
