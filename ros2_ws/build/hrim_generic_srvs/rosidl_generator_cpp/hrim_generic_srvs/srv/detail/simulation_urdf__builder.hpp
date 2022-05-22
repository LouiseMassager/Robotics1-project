// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_srvs:srv/SimulationURDF.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION_URDF__BUILDER_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION_URDF__BUILDER_HPP_

#include "hrim_generic_srvs/srv/detail/simulation_urdf__struct.hpp"
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
auto build<::hrim_generic_srvs::srv::SimulationURDF_Request>()
{
  return ::hrim_generic_srvs::srv::SimulationURDF_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_generic_srvs


namespace hrim_generic_srvs
{

namespace srv
{

namespace builder
{

class Init_SimulationURDF_Response_urdf_model
{
public:
  Init_SimulationURDF_Response_urdf_model()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_generic_srvs::srv::SimulationURDF_Response urdf_model(::hrim_generic_srvs::srv::SimulationURDF_Response::_urdf_model_type arg)
  {
    msg_.urdf_model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_srvs::srv::SimulationURDF_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_srvs::srv::SimulationURDF_Response>()
{
  return hrim_generic_srvs::srv::builder::Init_SimulationURDF_Response_urdf_model();
}

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION_URDF__BUILDER_HPP_
