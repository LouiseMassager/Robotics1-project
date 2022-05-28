// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/GoalGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__GOAL_GRIPPER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__GOAL_GRIPPER__BUILDER_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_GoalGripper_Request_on_off
{
public:
  Init_GoalGripper_Request_on_off()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_gripper_srvs::srv::GoalGripper_Request on_off(::hrim_actuator_gripper_srvs::srv::GoalGripper_Request::_on_off_type arg)
  {
    msg_.on_off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::GoalGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::GoalGripper_Request>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_GoalGripper_Request_on_off();
}

}  // namespace hrim_actuator_gripper_srvs


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_GoalGripper_Response_goal_accepted
{
public:
  Init_GoalGripper_Response_goal_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_gripper_srvs::srv::GoalGripper_Response goal_accepted(::hrim_actuator_gripper_srvs::srv::GoalGripper_Response::_goal_accepted_type arg)
  {
    msg_.goal_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::GoalGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::GoalGripper_Response>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_GoalGripper_Response_goal_accepted();
}

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__GOAL_GRIPPER__BUILDER_HPP_
