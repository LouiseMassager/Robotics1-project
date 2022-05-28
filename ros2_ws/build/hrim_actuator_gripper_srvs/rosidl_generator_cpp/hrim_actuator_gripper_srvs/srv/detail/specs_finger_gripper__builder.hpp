// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsFingerGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_FINGER_GRIPPER__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_FINGER_GRIPPER__BUILDER_HPP_

#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__struct.hpp"
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
auto build<::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request>()
{
  return ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_actuator_gripper_srvs


namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace builder
{

class Init_SpecsFingerGripper_Response_repeatability
{
public:
  explicit Init_SpecsFingerGripper_Response_repeatability(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response repeatability(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_repeatability_type arg)
  {
    msg_.repeatability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_max_angle
{
public:
  explicit Init_SpecsFingerGripper_Response_max_angle(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_repeatability max_angle(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_max_angle_type arg)
  {
    msg_.max_angle = std::move(arg);
    return Init_SpecsFingerGripper_Response_repeatability(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_max_length
{
public:
  explicit Init_SpecsFingerGripper_Response_max_length(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_max_angle max_length(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_max_length_type arg)
  {
    msg_.max_length = std::move(arg);
    return Init_SpecsFingerGripper_Response_max_angle(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_max_acceleration
{
public:
  explicit Init_SpecsFingerGripper_Response_max_acceleration(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_max_length max_acceleration(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_SpecsFingerGripper_Response_max_length(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_max_speed
{
public:
  explicit Init_SpecsFingerGripper_Response_max_speed(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_max_acceleration max_speed(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_SpecsFingerGripper_Response_max_acceleration(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_min_speed
{
public:
  explicit Init_SpecsFingerGripper_Response_min_speed(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_max_speed min_speed(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_min_speed_type arg)
  {
    msg_.min_speed = std::move(arg);
    return Init_SpecsFingerGripper_Response_max_speed(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_max_payload
{
public:
  explicit Init_SpecsFingerGripper_Response_max_payload(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_min_speed max_payload(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_max_payload_type arg)
  {
    msg_.max_payload = std::move(arg);
    return Init_SpecsFingerGripper_Response_min_speed(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_max_force
{
public:
  explicit Init_SpecsFingerGripper_Response_max_force(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsFingerGripper_Response_max_payload max_force(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_max_force_type arg)
  {
    msg_.max_force = std::move(arg);
    return Init_SpecsFingerGripper_Response_max_payload(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

class Init_SpecsFingerGripper_Response_min_force
{
public:
  Init_SpecsFingerGripper_Response_min_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpecsFingerGripper_Response_max_force min_force(::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response::_min_force_type arg)
  {
    msg_.min_force = std::move(arg);
    return Init_SpecsFingerGripper_Response_max_force(msg_);
  }

private:
  ::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response>()
{
  return hrim_actuator_gripper_srvs::srv::builder::Init_SpecsFingerGripper_Response_min_force();
}

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_FINGER_GRIPPER__BUILDER_HPP_
