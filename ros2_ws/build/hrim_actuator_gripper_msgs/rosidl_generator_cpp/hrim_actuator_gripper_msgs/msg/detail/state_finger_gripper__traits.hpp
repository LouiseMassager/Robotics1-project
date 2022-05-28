// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/StateFingerGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__TRAITS_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__TRAITS_HPP_

#include "hrim_actuator_gripper_msgs/msg/detail/state_finger_gripper__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_gripper_msgs::msg::StateFingerGripper>()
{
  return "hrim_actuator_gripper_msgs::msg::StateFingerGripper";
}

template<>
inline const char * name<hrim_actuator_gripper_msgs::msg::StateFingerGripper>()
{
  return "hrim_actuator_gripper_msgs/msg/StateFingerGripper";
}

template<>
struct has_fixed_size<hrim_actuator_gripper_msgs::msg::StateFingerGripper>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<hrim_actuator_gripper_msgs::msg::StateFingerGripper>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<hrim_actuator_gripper_msgs::msg::StateFingerGripper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__TRAITS_HPP_
