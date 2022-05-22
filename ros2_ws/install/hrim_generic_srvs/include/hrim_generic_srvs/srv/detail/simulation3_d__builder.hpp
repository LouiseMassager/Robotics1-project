// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__BUILDER_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__BUILDER_HPP_

#include "hrim_generic_srvs/srv/detail/simulation3_d__struct.hpp"
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
auto build<::hrim_generic_srvs::srv::Simulation3D_Request>()
{
  return ::hrim_generic_srvs::srv::Simulation3D_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_generic_srvs


namespace hrim_generic_srvs
{

namespace srv
{

namespace builder
{

class Init_Simulation3D_Response_model
{
public:
  explicit Init_Simulation3D_Response_model(::hrim_generic_srvs::srv::Simulation3D_Response & msg)
  : msg_(msg)
  {}
  ::hrim_generic_srvs::srv::Simulation3D_Response model(::hrim_generic_srvs::srv::Simulation3D_Response::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_srvs::srv::Simulation3D_Response msg_;
};

class Init_Simulation3D_Response_model_name
{
public:
  Init_Simulation3D_Response_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Simulation3D_Response_model model_name(::hrim_generic_srvs::srv::Simulation3D_Response::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_Simulation3D_Response_model(msg_);
  }

private:
  ::hrim_generic_srvs::srv::Simulation3D_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_srvs::srv::Simulation3D_Response>()
{
  return hrim_generic_srvs::srv::builder::Init_Simulation3D_Response_model_name();
}

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__BUILDER_HPP_
