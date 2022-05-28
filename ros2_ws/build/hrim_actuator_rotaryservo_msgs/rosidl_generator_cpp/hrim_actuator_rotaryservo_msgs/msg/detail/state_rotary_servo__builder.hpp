// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/StateRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

namespace builder
{

class Init_StateRotaryServo_control_type
{
public:
  explicit Init_StateRotaryServo_control_type(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo control_type(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_fault
{
public:
  explicit Init_StateRotaryServo_fault(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_control_type fault(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_fault_type arg)
  {
    msg_.fault = std::move(arg);
    return Init_StateRotaryServo_control_type(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_moving
{
public:
  explicit Init_StateRotaryServo_moving(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_fault moving(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_StateRotaryServo_fault(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_load
{
public:
  explicit Init_StateRotaryServo_load(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_moving load(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_StateRotaryServo_moving(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_effort
{
public:
  explicit Init_StateRotaryServo_effort(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_load effort(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_StateRotaryServo_load(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_velocity
{
public:
  explicit Init_StateRotaryServo_velocity(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_effort velocity(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_StateRotaryServo_effort(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_error
{
public:
  explicit Init_StateRotaryServo_error(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_velocity error(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_StateRotaryServo_velocity(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_position
{
public:
  explicit Init_StateRotaryServo_position(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_error position(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_StateRotaryServo_error(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_goal
{
public:
  explicit Init_StateRotaryServo_goal(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo & msg)
  : msg_(msg)
  {}
  Init_StateRotaryServo_position goal(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_StateRotaryServo_position(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

class Init_StateRotaryServo_header
{
public:
  Init_StateRotaryServo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateRotaryServo_goal header(::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateRotaryServo_goal(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo>()
{
  return hrim_actuator_rotaryservo_msgs::msg::builder::Init_StateRotaryServo_header();
}

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__BUILDER_HPP_
