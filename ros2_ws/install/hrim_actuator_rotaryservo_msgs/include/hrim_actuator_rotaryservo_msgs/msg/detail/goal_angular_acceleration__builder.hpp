// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/GoalAngularAcceleration.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ANGULAR_ACCELERATION__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ANGULAR_ACCELERATION__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_angular_acceleration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalAngularAcceleration_acceleration
{
public:
  explicit Init_GoalAngularAcceleration_acceleration(::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration acceleration(::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration msg_;
};

class Init_GoalAngularAcceleration_header
{
public:
  Init_GoalAngularAcceleration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalAngularAcceleration_acceleration header(::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GoalAngularAcceleration_acceleration(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration>()
{
  return hrim_actuator_rotaryservo_msgs::msg::builder::Init_GoalAngularAcceleration_header();
}

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ANGULAR_ACCELERATION__BUILDER_HPP_
