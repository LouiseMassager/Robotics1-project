// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__STOP__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__STOP__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__struct.hpp"
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
auto build<::hrim_actuator_rotaryservo_srvs::srv::Stop_Request>()
{
  return ::hrim_actuator_rotaryservo_srvs::srv::Stop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_actuator_rotaryservo_srvs


namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace builder
{

class Init_Stop_Response_message
{
public:
  explicit Init_Stop_Response_message(::hrim_actuator_rotaryservo_srvs::srv::Stop_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_srvs::srv::Stop_Response message(::hrim_actuator_rotaryservo_srvs::srv::Stop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::Stop_Response msg_;
};

class Init_Stop_Response_success
{
public:
  Init_Stop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_Response_message success(::hrim_actuator_rotaryservo_srvs::srv::Stop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Stop_Response_message(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_srvs::srv::Stop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_srvs::srv::Stop_Response>()
{
  return hrim_actuator_rotaryservo_srvs::srv::builder::Init_Stop_Response_success();
}

}  // namespace hrim_actuator_rotaryservo_srvs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__STOP__BUILDER_HPP_
