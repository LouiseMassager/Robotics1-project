// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsMagneticGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__BUILDER_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/specs_magnetic_gripper__struct.hpp"
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
auto build<::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request>()
{
  return ::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_actuator_gripper_srvs


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_SpecsMagneticGripper_Response_max_payload
{
public:
  explicit Init_SpecsMagneticGripper_Response_max_payload(::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response max_payload(::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response::_max_payload_type arg)
  {
    msg_.max_payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response msg_;
};

class Init_SpecsMagneticGripper_Response_magnetic_force
{
public:
  Init_SpecsMagneticGripper_Response_magnetic_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpecsMagneticGripper_Response_max_payload magnetic_force(::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response::_magnetic_force_type arg)
  {
    msg_.magnetic_force = std::move(arg);
    return Init_SpecsMagneticGripper_Response_max_payload(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::SpecsMagneticGripper_Response>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_SpecsMagneticGripper_Response_magnetic_force();
}

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__BUILDER_HPP_
