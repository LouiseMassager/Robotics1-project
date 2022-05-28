// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/GoalTactilePressure.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__GOAL_TACTILE_PRESSURE__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__GOAL_TACTILE_PRESSURE__BUILDER_HPP_

#include "hrim_actuator_gripper_msgs/msg/detail/goal_tactile_pressure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalTactilePressure_goal_pressure
{
public:
  explicit Init_GoalTactilePressure_goal_pressure(::hrim_actuator_gripper_msgs::msg::GoalTactilePressure & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_msgs::msg::GoalTactilePressure goal_pressure(::hrim_actuator_gripper_msgs::msg::GoalTactilePressure::_goal_pressure_type arg)
  {
    msg_.goal_pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::GoalTactilePressure msg_;
};

class Init_GoalTactilePressure_header
{
public:
  Init_GoalTactilePressure_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalTactilePressure_goal_pressure header(::hrim_actuator_gripper_msgs::msg::GoalTactilePressure::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GoalTactilePressure_goal_pressure(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::GoalTactilePressure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_msgs::msg::GoalTactilePressure>()
{
  return hrim_actuator_gripper_msgs::msg::builder::Init_GoalTactilePressure_header();
}

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__GOAL_TACTILE_PRESSURE__BUILDER_HPP_
