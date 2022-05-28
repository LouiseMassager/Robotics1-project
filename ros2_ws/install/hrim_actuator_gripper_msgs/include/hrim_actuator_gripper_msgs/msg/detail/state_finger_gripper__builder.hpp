// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/StateFingerGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__BUILDER_HPP_

#include "hrim_actuator_gripper_msgs/msg/detail/state_finger_gripper__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_msgs
{

namespace msg
{

namespace builder
{

class Init_StateFingerGripper_linear_position
{
public:
  explicit Init_StateFingerGripper_linear_position(::hrim_actuator_gripper_msgs::msg::StateFingerGripper & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_msgs::msg::StateFingerGripper linear_position(::hrim_actuator_gripper_msgs::msg::StateFingerGripper::_linear_position_type arg)
  {
    msg_.linear_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::StateFingerGripper msg_;
};

class Init_StateFingerGripper_angular_position
{
public:
  explicit Init_StateFingerGripper_angular_position(::hrim_actuator_gripper_msgs::msg::StateFingerGripper & msg)
  : msg_(msg)
  {}
  Init_StateFingerGripper_linear_position angular_position(::hrim_actuator_gripper_msgs::msg::StateFingerGripper::_angular_position_type arg)
  {
    msg_.angular_position = std::move(arg);
    return Init_StateFingerGripper_linear_position(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::StateFingerGripper msg_;
};

class Init_StateFingerGripper_header
{
public:
  Init_StateFingerGripper_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateFingerGripper_angular_position header(::hrim_actuator_gripper_msgs::msg::StateFingerGripper::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateFingerGripper_angular_position(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::StateFingerGripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_msgs::msg::StateFingerGripper>()
{
  return hrim_actuator_gripper_msgs::msg::builder::Init_StateFingerGripper_header();
}

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__BUILDER_HPP_
