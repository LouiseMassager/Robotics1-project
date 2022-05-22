// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_msgs:msg/StateCommunication.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__BUILDER_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__BUILDER_HPP_

#include "hrim_generic_msgs/msg/detail/state_communication__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_generic_msgs
{

namespace msg
{

namespace builder
{

class Init_StateCommunication_size_msgs
{
public:
  explicit Init_StateCommunication_size_msgs(::hrim_generic_msgs::msg::StateCommunication & msg)
  : msg_(msg)
  {}
  ::hrim_generic_msgs::msg::StateCommunication size_msgs(::hrim_generic_msgs::msg::StateCommunication::_size_msgs_type arg)
  {
    msg_.size_msgs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_msgs::msg::StateCommunication msg_;
};

class Init_StateCommunication_comm_rate
{
public:
  explicit Init_StateCommunication_comm_rate(::hrim_generic_msgs::msg::StateCommunication & msg)
  : msg_(msg)
  {}
  Init_StateCommunication_size_msgs comm_rate(::hrim_generic_msgs::msg::StateCommunication::_comm_rate_type arg)
  {
    msg_.comm_rate = std::move(arg);
    return Init_StateCommunication_size_msgs(msg_);
  }

private:
  ::hrim_generic_msgs::msg::StateCommunication msg_;
};

class Init_StateCommunication_header
{
public:
  Init_StateCommunication_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateCommunication_comm_rate header(::hrim_generic_msgs::msg::StateCommunication::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateCommunication_comm_rate(msg_);
  }

private:
  ::hrim_generic_msgs::msg::StateCommunication msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_msgs::msg::StateCommunication>()
{
  return hrim_generic_msgs::msg::builder::Init_StateCommunication_header();
}

}  // namespace hrim_generic_msgs

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__BUILDER_HPP_
