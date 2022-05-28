// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__ID__BUILDER_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__ID__BUILDER_HPP_

#include "hrim_generic_srvs/srv/detail/id__struct.hpp"
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
auto build<::hrim_generic_srvs::srv::ID_Request>()
{
  return ::hrim_generic_srvs::srv::ID_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hrim_generic_srvs


namespace hrim_generic_srvs
{

namespace srv
{

namespace builder
{

class Init_ID_Response_hros_version
{
public:
  explicit Init_ID_Response_hros_version(::hrim_generic_srvs::srv::ID_Response & msg)
  : msg_(msg)
  {}
  ::hrim_generic_srvs::srv::ID_Response hros_version(::hrim_generic_srvs::srv::ID_Response::_hros_version_type arg)
  {
    msg_.hros_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

class Init_ID_Response_hrim_version
{
public:
  explicit Init_ID_Response_hrim_version(::hrim_generic_srvs::srv::ID_Response & msg)
  : msg_(msg)
  {}
  Init_ID_Response_hros_version hrim_version(::hrim_generic_srvs::srv::ID_Response::_hrim_version_type arg)
  {
    msg_.hrim_version = std::move(arg);
    return Init_ID_Response_hros_version(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

class Init_ID_Response_instance_id
{
public:
  explicit Init_ID_Response_instance_id(::hrim_generic_srvs::srv::ID_Response & msg)
  : msg_(msg)
  {}
  Init_ID_Response_hrim_version instance_id(::hrim_generic_srvs::srv::ID_Response::_instance_id_type arg)
  {
    msg_.instance_id = std::move(arg);
    return Init_ID_Response_hrim_version(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

class Init_ID_Response_product_id
{
public:
  explicit Init_ID_Response_product_id(::hrim_generic_srvs::srv::ID_Response & msg)
  : msg_(msg)
  {}
  Init_ID_Response_instance_id product_id(::hrim_generic_srvs::srv::ID_Response::_product_id_type arg)
  {
    msg_.product_id = std::move(arg);
    return Init_ID_Response_instance_id(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

class Init_ID_Response_vendor_id
{
public:
  explicit Init_ID_Response_vendor_id(::hrim_generic_srvs::srv::ID_Response & msg)
  : msg_(msg)
  {}
  Init_ID_Response_product_id vendor_id(::hrim_generic_srvs::srv::ID_Response::_vendor_id_type arg)
  {
    msg_.vendor_id = std::move(arg);
    return Init_ID_Response_product_id(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

class Init_ID_Response_device_name
{
public:
  explicit Init_ID_Response_device_name(::hrim_generic_srvs::srv::ID_Response & msg)
  : msg_(msg)
  {}
  Init_ID_Response_vendor_id device_name(::hrim_generic_srvs::srv::ID_Response::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_ID_Response_vendor_id(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

class Init_ID_Response_device_kind_id
{
public:
  Init_ID_Response_device_kind_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ID_Response_device_name device_kind_id(::hrim_generic_srvs::srv::ID_Response::_device_kind_id_type arg)
  {
    msg_.device_kind_id = std::move(arg);
    return Init_ID_Response_device_name(msg_);
  }

private:
  ::hrim_generic_srvs::srv::ID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_srvs::srv::ID_Response>()
{
  return hrim_generic_srvs::srv::builder::Init_ID_Response_device_kind_id();
}

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__ID__BUILDER_HPP_
