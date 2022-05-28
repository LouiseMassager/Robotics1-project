// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__BUILDER_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_ControlVacuum_Request_goal_percentage_suction
{
public:
  Init_ControlVacuum_Request_goal_percentage_suction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_gripper_srvs::srv::ControlVacuum_Request goal_percentage_suction(::hrim_actuator_gripper_srvs::srv::ControlVacuum_Request::_goal_percentage_suction_type arg)
  {
    msg_.goal_percentage_suction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlVacuum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::ControlVacuum_Request>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_ControlVacuum_Request_goal_percentage_suction();
}

}  // namespace hrim_actuator_gripper_srvs


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_ControlVacuum_Response_goal_accepted
{
public:
  Init_ControlVacuum_Response_goal_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_gripper_srvs::srv::ControlVacuum_Response goal_accepted(::hrim_actuator_gripper_srvs::srv::ControlVacuum_Response::_goal_accepted_type arg)
  {
    msg_.goal_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlVacuum_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::ControlVacuum_Response>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_ControlVacuum_Response_goal_accepted();
}

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__BUILDER_HPP_
