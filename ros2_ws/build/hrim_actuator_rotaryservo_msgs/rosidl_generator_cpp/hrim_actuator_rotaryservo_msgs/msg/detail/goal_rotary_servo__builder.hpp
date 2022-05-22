// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/GoalRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_rotary_servo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalRotaryServo_effort
{
public:
  explicit Init_GoalRotaryServo_effort(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo effort(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo msg_;
};

class Init_GoalRotaryServo_acceleration
{
public:
  explicit Init_GoalRotaryServo_acceleration(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo & msg)
  : msg_(msg)
  {}
  Init_GoalRotaryServo_effort acceleration(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_GoalRotaryServo_effort(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo msg_;
};

class Init_GoalRotaryServo_velocity
{
public:
  explicit Init_GoalRotaryServo_velocity(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo & msg)
  : msg_(msg)
  {}
  Init_GoalRotaryServo_acceleration velocity(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GoalRotaryServo_acceleration(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo msg_;
};

class Init_GoalRotaryServo_position
{
public:
  explicit Init_GoalRotaryServo_position(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo & msg)
  : msg_(msg)
  {}
  Init_GoalRotaryServo_velocity position(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GoalRotaryServo_velocity(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo msg_;
};

class Init_GoalRotaryServo_control_type
{
public:
  explicit Init_GoalRotaryServo_control_type(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo & msg)
  : msg_(msg)
  {}
  Init_GoalRotaryServo_position control_type(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_GoalRotaryServo_position(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo msg_;
};

class Init_GoalRotaryServo_header
{
public:
  Init_GoalRotaryServo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalRotaryServo_control_type header(::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GoalRotaryServo_control_type(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo>()
{
  return hrim_actuator_rotaryservo_msgs::msg::builder::Init_GoalRotaryServo_header();
}

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__BUILDER_HPP_
