// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_

#include "hrim_generic_msgs/msg/detail/power__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_generic_msgs
{

namespace msg
{

namespace builder
{

class Init_Power_power_surplus
{
public:
  explicit Init_Power_power_surplus(::hrim_generic_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  ::hrim_generic_msgs::msg::Power power_surplus(::hrim_generic_msgs::msg::Power::_power_surplus_type arg)
  {
    msg_.power_surplus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Power msg_;
};

class Init_Power_power_consumption
{
public:
  explicit Init_Power_power_consumption(::hrim_generic_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_power_surplus power_consumption(::hrim_generic_msgs::msg::Power::_power_consumption_type arg)
  {
    msg_.power_consumption = std::move(arg);
    return Init_Power_power_surplus(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Power msg_;
};

class Init_Power_current_surplus
{
public:
  explicit Init_Power_current_surplus(::hrim_generic_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_power_consumption current_surplus(::hrim_generic_msgs::msg::Power::_current_surplus_type arg)
  {
    msg_.current_surplus = std::move(arg);
    return Init_Power_power_consumption(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Power msg_;
};

class Init_Power_current_consumption
{
public:
  explicit Init_Power_current_consumption(::hrim_generic_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_current_surplus current_consumption(::hrim_generic_msgs::msg::Power::_current_consumption_type arg)
  {
    msg_.current_consumption = std::move(arg);
    return Init_Power_current_surplus(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Power msg_;
};

class Init_Power_voltage
{
public:
  explicit Init_Power_voltage(::hrim_generic_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_current_consumption voltage(::hrim_generic_msgs::msg::Power::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_Power_current_consumption(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Power msg_;
};

class Init_Power_header
{
public:
  Init_Power_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Power_voltage header(::hrim_generic_msgs::msg::Power::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Power_voltage(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Power msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_msgs::msg::Power>()
{
  return hrim_generic_msgs::msg::builder::Init_Power_header();
}

}  // namespace hrim_generic_msgs

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
