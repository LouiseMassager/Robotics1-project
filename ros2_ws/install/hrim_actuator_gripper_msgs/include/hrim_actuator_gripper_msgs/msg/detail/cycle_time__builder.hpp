// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/CycleTime.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__CYCLE_TIME__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__CYCLE_TIME__BUILDER_HPP_

#include "hrim_actuator_gripper_msgs/msg/detail/cycle_time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_msgs
{

namespace msg
{

namespace builder
{

class Init_CycleTime_cycle_time
{
public:
  explicit Init_CycleTime_cycle_time(::hrim_actuator_gripper_msgs::msg::CycleTime & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_msgs::msg::CycleTime cycle_time(::hrim_actuator_gripper_msgs::msg::CycleTime::_cycle_time_type arg)
  {
    msg_.cycle_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::CycleTime msg_;
};

class Init_CycleTime_header
{
public:
  Init_CycleTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CycleTime_cycle_time header(::hrim_actuator_gripper_msgs::msg::CycleTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CycleTime_cycle_time(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::CycleTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_msgs::msg::CycleTime>()
{
  return hrim_actuator_gripper_msgs::msg::builder::Init_CycleTime_header();
}

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__CYCLE_TIME__BUILDER_HPP_
