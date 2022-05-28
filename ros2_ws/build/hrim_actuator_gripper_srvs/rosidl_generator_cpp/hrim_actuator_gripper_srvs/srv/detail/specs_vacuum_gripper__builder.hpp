// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsVacuumGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__BUILDER_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/specs_vacuum_gripper__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request>()
{
  return ::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_actuator_gripper_srvs


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_SpecsVacuumGripper_Response_max_payload
{
public:
  explicit Init_SpecsVacuumGripper_Response_max_payload(::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response max_payload(::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response::_max_payload_type arg)
  {
    msg_.max_payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response msg_;
};

class Init_SpecsVacuumGripper_Response_max_force
{
public:
  explicit Init_SpecsVacuumGripper_Response_max_force(::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsVacuumGripper_Response_max_payload max_force(::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response::_max_force_type arg)
  {
    msg_.max_force = std::move(arg);
    return Init_SpecsVacuumGripper_Response_max_payload(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response msg_;
};

class Init_SpecsVacuumGripper_Response_cycle_time
{
public:
  Init_SpecsVacuumGripper_Response_cycle_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpecsVacuumGripper_Response_max_force cycle_time(::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response::_cycle_time_type arg)
  {
    msg_.cycle_time = std::move(arg);
    return Init_SpecsVacuumGripper_Response_max_force(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_SpecsVacuumGripper_Response_cycle_time();
}

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__BUILDER_HPP_
