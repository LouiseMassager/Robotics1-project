// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request>()
{
  return ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_actuator_rotaryservo_srvs


namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace builder
{

class Init_SpecsRotaryServo_Response_temperature_range_max
{
public:
  explicit Init_SpecsRotaryServo_Response_temperature_range_max(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response temperature_range_max(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_temperature_range_max_type arg)
  {
    msg_.temperature_range_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_temperature_range_min
{
public:
  explicit Init_SpecsRotaryServo_Response_temperature_range_min(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_temperature_range_max temperature_range_min(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_temperature_range_min_type arg)
  {
    msg_.temperature_range_min = std::move(arg);
    return Init_SpecsRotaryServo_Response_temperature_range_max(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_reachable_torque
{
public:
  explicit Init_SpecsRotaryServo_Response_reachable_torque(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_temperature_range_min reachable_torque(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_reachable_torque_type arg)
  {
    msg_.reachable_torque = std::move(arg);
    return Init_SpecsRotaryServo_Response_temperature_range_min(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_rated_torque
{
public:
  explicit Init_SpecsRotaryServo_Response_rated_torque(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_reachable_torque rated_torque(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_rated_torque_type arg)
  {
    msg_.rated_torque = std::move(arg);
    return Init_SpecsRotaryServo_Response_reachable_torque(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_reachable_speed
{
public:
  explicit Init_SpecsRotaryServo_Response_reachable_speed(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_rated_torque reachable_speed(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_reachable_speed_type arg)
  {
    msg_.reachable_speed = std::move(arg);
    return Init_SpecsRotaryServo_Response_rated_torque(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_rated_speed
{
public:
  explicit Init_SpecsRotaryServo_Response_rated_speed(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_reachable_speed rated_speed(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_rated_speed_type arg)
  {
    msg_.rated_speed = std::move(arg);
    return Init_SpecsRotaryServo_Response_reachable_speed(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_precision
{
public:
  explicit Init_SpecsRotaryServo_Response_precision(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_rated_speed precision(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_precision_type arg)
  {
    msg_.precision = std::move(arg);
    return Init_SpecsRotaryServo_Response_rated_speed(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_range_max
{
public:
  explicit Init_SpecsRotaryServo_Response_range_max(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_precision range_max(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_range_max_type arg)
  {
    msg_.range_max = std::move(arg);
    return Init_SpecsRotaryServo_Response_precision(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_range_min
{
public:
  explicit Init_SpecsRotaryServo_Response_range_min(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsRotaryServo_Response_range_max range_min(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_range_min_type arg)
  {
    msg_.range_min = std::move(arg);
    return Init_SpecsRotaryServo_Response_range_max(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

class Init_SpecsRotaryServo_Response_control_type
{
public:
  Init_SpecsRotaryServo_Response_control_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpecsRotaryServo_Response_range_min control_type(::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_SpecsRotaryServo_Response_range_min(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response>()
{
  return hrim_actuator_rotaryservo_srvs::srv::builder::Init_SpecsRotaryServo_Response_control_type();
}

}  // namespace hrim_actuator_rotaryservo_srvs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__BUILDER_HPP_
