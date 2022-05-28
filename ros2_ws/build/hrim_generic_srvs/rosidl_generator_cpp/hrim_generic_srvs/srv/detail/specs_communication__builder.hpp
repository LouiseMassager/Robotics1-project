// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_srvs:srv/SpecsCommunication.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__BUILDER_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__BUILDER_HPP_

#include "hrim_generic_srvs/srv/detail/specs_communication__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_generic_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_srvs::srv::SpecsCommunication_Request>()
{
  return ::hrim_generic_srvs::srv::SpecsCommunication_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_generic_srvs


namespace hrim_generic_srvs
{

namespace srv
{

namespace builder
{

class Init_SpecsCommunication_Response_max_size_msgs
{
public:
  explicit Init_SpecsCommunication_Response_max_size_msgs(::hrim_generic_srvs::srv::SpecsCommunication_Response & msg)
  : msg_(msg)
  {}
  ::hrim_generic_srvs::srv::SpecsCommunication_Response max_size_msgs(::hrim_generic_srvs::srv::SpecsCommunication_Response::_max_size_msgs_type arg)
  {
    msg_.max_size_msgs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_srvs::srv::SpecsCommunication_Response msg_;
};

class Init_SpecsCommunication_Response_max_comm_rate
{
public:
  explicit Init_SpecsCommunication_Response_max_comm_rate(::hrim_generic_srvs::srv::SpecsCommunication_Response & msg)
  : msg_(msg)
  {}
  Init_SpecsCommunication_Response_max_size_msgs max_comm_rate(::hrim_generic_srvs::srv::SpecsCommunication_Response::_max_comm_rate_type arg)
  {
    msg_.max_comm_rate = std::move(arg);
    return Init_SpecsCommunication_Response_max_size_msgs(msg_);
  }

private:
  ::hrim_generic_srvs::srv::SpecsCommunication_Response msg_;
};

class Init_SpecsCommunication_Response_min_comm_rate
{
public:
  Init_SpecsCommunication_Response_min_comm_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpecsCommunication_Response_max_comm_rate min_comm_rate(::hrim_generic_srvs::srv::SpecsCommunication_Response::_min_comm_rate_type arg)
  {
    msg_.min_comm_rate = std::move(arg);
    return Init_SpecsCommunication_Response_max_comm_rate(msg_);
  }

private:
  ::hrim_generic_srvs::srv::SpecsCommunication_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_srvs::srv::SpecsCommunication_Response>()
{
  return hrim_generic_srvs::srv::builder::Init_SpecsCommunication_Response_min_comm_rate();
}

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__BUILDER_HPP_
