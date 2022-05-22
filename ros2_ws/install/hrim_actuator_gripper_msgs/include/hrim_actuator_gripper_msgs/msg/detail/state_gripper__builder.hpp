// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/StateGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_GRIPPER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_GRIPPER__BUILDER_HPP_

#include "hrim_actuator_gripper_msgs/msg/detail/state_gripper__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_msgs
{

namespace msg
{

namespace builder
{

class Init_StateGripper_on_off
{
public:
  explicit Init_StateGripper_on_off(::hrim_actuator_gripper_msgs::msg::StateGripper & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_msgs::msg::StateGripper on_off(::hrim_actuator_gripper_msgs::msg::StateGripper::_on_off_type arg)
  {
    msg_.on_off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::StateGripper msg_;
};

class Init_StateGripper_header
{
public:
  Init_StateGripper_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateGripper_on_off header(::hrim_actuator_gripper_msgs::msg::StateGripper::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateGripper_on_off(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::StateGripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_msgs::msg::StateGripper>()
{
  return hrim_actuator_gripper_msgs::msg::builder::Init_StateGripper_header();
}

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_GRIPPER__BUILDER_HPP_
