// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/OpenCloseBrake.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace builder
{

class Init_OpenCloseBrake_Request_open
{
public:
  Init_OpenCloseBrake_Request_open()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request open(::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request::_open_type arg)
  {
    msg_.open = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request>()
{
  return hrim_actuator_rotaryservo_srvs::srv::builder::Init_OpenCloseBrake_Request_open();
}

}  // namespace hrim_actuator_rotaryservo_srvs


namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace builder
{

class Init_OpenCloseBrake_Response_message
{
public:
  explicit Init_OpenCloseBrake_Response_message(::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response message(::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response msg_;
};

class Init_OpenCloseBrake_Response_success
{
public:
  Init_OpenCloseBrake_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenCloseBrake_Response_message success(::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_OpenCloseBrake_Response_message(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response>()
{
  return hrim_actuator_rotaryservo_srvs::srv::builder::Init_OpenCloseBrake_Response_success();
}

}  // namespace hrim_actuator_rotaryservo_srvs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__BUILDER_HPP_
