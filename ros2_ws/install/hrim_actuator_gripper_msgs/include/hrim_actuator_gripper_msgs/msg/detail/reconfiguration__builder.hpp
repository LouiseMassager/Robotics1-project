// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/Reconfiguration.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__RECONFIGURATION__BUILDER_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__RECONFIGURATION__BUILDER_HPP_

#include "hrim_actuator_gripper_msgs/msg/detail/reconfiguration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_gripper_msgs
{

namespace msg
{

namespace builder
{

class Init_Reconfiguration_linear_acceleration_covariance
{
public:
  explicit Init_Reconfiguration_linear_acceleration_covariance(::hrim_actuator_gripper_msgs::msg::Reconfiguration & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration linear_acceleration_covariance(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

class Init_Reconfiguration_linear_acceleration
{
public:
  explicit Init_Reconfiguration_linear_acceleration(::hrim_actuator_gripper_msgs::msg::Reconfiguration & msg)
  : msg_(msg)
  {}
  Init_Reconfiguration_linear_acceleration_covariance linear_acceleration(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Reconfiguration_linear_acceleration_covariance(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

class Init_Reconfiguration_angular_velocity_covariance
{
public:
  explicit Init_Reconfiguration_angular_velocity_covariance(::hrim_actuator_gripper_msgs::msg::Reconfiguration & msg)
  : msg_(msg)
  {}
  Init_Reconfiguration_linear_acceleration angular_velocity_covariance(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_angular_velocity_covariance_type arg)
  {
    msg_.angular_velocity_covariance = std::move(arg);
    return Init_Reconfiguration_linear_acceleration(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

class Init_Reconfiguration_angular_velocity
{
public:
  explicit Init_Reconfiguration_angular_velocity(::hrim_actuator_gripper_msgs::msg::Reconfiguration & msg)
  : msg_(msg)
  {}
  Init_Reconfiguration_angular_velocity_covariance angular_velocity(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Reconfiguration_angular_velocity_covariance(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

class Init_Reconfiguration_orientation_covariance
{
public:
  explicit Init_Reconfiguration_orientation_covariance(::hrim_actuator_gripper_msgs::msg::Reconfiguration & msg)
  : msg_(msg)
  {}
  Init_Reconfiguration_angular_velocity orientation_covariance(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_Reconfiguration_angular_velocity(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

class Init_Reconfiguration_orientation
{
public:
  explicit Init_Reconfiguration_orientation(::hrim_actuator_gripper_msgs::msg::Reconfiguration & msg)
  : msg_(msg)
  {}
  Init_Reconfiguration_orientation_covariance orientation(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Reconfiguration_orientation_covariance(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

class Init_Reconfiguration_header
{
public:
  Init_Reconfiguration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reconfiguration_orientation header(::hrim_actuator_gripper_msgs::msg::Reconfiguration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Reconfiguration_orientation(msg_);
  }

private:
  ::hrim_actuator_gripper_msgs::msg::Reconfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_gripper_msgs::msg::Reconfiguration>()
{
  return hrim_actuator_gripper_msgs::msg::builder::Init_Reconfiguration_header();
}

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__RECONFIGURATION__BUILDER_HPP_
