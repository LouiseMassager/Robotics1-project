// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_FINGER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_FINGER__BUILDER_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_ControlFinger_Request_goal_acceleration
{
public:
  explicit Init_ControlFinger_Request_goal_acceleration(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Request goal_acceleration(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request::_goal_acceleration_type arg)
  {
    msg_.goal_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Request msg_;
};

class Init_ControlFinger_Request_goal_velocity
{
public:
  explicit Init_ControlFinger_Request_goal_velocity(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request & msg)
  : msg_(msg)
  {}
  Init_ControlFinger_Request_goal_acceleration goal_velocity(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request::_goal_velocity_type arg)
  {
    msg_.goal_velocity = std::move(arg);
    return Init_ControlFinger_Request_goal_acceleration(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Request msg_;
};

class Init_ControlFinger_Request_goal_effort
{
public:
  explicit Init_ControlFinger_Request_goal_effort(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request & msg)
  : msg_(msg)
  {}
  Init_ControlFinger_Request_goal_velocity goal_effort(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request::_goal_effort_type arg)
  {
    msg_.goal_effort = std::move(arg);
    return Init_ControlFinger_Request_goal_velocity(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Request msg_;
};

class Init_ControlFinger_Request_goal_angularposition
{
public:
  explicit Init_ControlFinger_Request_goal_angularposition(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request & msg)
  : msg_(msg)
  {}
  Init_ControlFinger_Request_goal_effort goal_angularposition(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request::_goal_angularposition_type arg)
  {
    msg_.goal_angularposition = std::move(arg);
    return Init_ControlFinger_Request_goal_effort(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Request msg_;
};

class Init_ControlFinger_Request_goal_linearposition
{
public:
  Init_ControlFinger_Request_goal_linearposition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlFinger_Request_goal_angularposition goal_linearposition(::hrim_actuator_gripper_srvs::srv::ControlFinger_Request::_goal_linearposition_type arg)
  {
    msg_.goal_linearposition = std::move(arg);
    return Init_ControlFinger_Request_goal_angularposition(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::ControlFinger_Request>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_ControlFinger_Request_goal_linearposition();
}

}  // namespace hrim_actuator_gripper_srvs


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_ControlFinger_Response_goal_accepted
{
public:
  Init_ControlFinger_Response_goal_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Response goal_accepted(::hrim_actuator_gripper_srvs::srv::ControlFinger_Response::_goal_accepted_type arg)
  {
    msg_.goal_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::ControlFinger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::ControlFinger_Response>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_ControlFinger_Response_goal_accepted();
}

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_FINGER__BUILDER_HPP_
