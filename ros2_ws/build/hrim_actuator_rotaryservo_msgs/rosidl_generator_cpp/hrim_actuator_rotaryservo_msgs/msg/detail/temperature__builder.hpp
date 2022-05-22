// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_msgs/msg/detail/temperature__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

namespace builder
{

class Init_Temperature_temperature_error
{
public:
  explicit Init_Temperature_temperature_error(::hrim_actuator_rotaryservo_msgs::msg::Temperature & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_msgs::msg::Temperature temperature_error(::hrim_actuator_rotaryservo_msgs::msg::Temperature::_temperature_error_type arg)
  {
    msg_.temperature_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::Temperature msg_;
};

class Init_Temperature_temperature
{
public:
  explicit Init_Temperature_temperature(::hrim_actuator_rotaryservo_msgs::msg::Temperature & msg)
  : msg_(msg)
  {}
  Init_Temperature_temperature_error temperature(::hrim_actuator_rotaryservo_msgs::msg::Temperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Temperature_temperature_error(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::Temperature msg_;
};

class Init_Temperature_header
{
public:
  Init_Temperature_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_temperature header(::hrim_actuator_rotaryservo_msgs::msg::Temperature::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Temperature_temperature(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_msgs::msg::Temperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_msgs::msg::Temperature>()
{
  return hrim_actuator_rotaryservo_msgs::msg::builder::Init_Temperature_header();
}

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
