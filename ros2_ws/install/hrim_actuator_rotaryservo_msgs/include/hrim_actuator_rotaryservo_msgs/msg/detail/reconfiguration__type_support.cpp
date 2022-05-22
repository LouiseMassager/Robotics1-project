// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Reconfiguration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Reconfiguration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hrim_actuator_rotaryservo_msgs::msg::Reconfiguration(_init);
}

void Reconfiguration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration *>(message_memory);
  typed_message->~Reconfiguration();
}

size_t size_function__Reconfiguration__orientation_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Reconfiguration__orientation_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Reconfiguration__orientation_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

size_t size_function__Reconfiguration__angular_velocity_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Reconfiguration__angular_velocity_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Reconfiguration__angular_velocity_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

size_t size_function__Reconfiguration__linear_acceleration_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Reconfiguration__linear_acceleration_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Reconfiguration__linear_acceleration_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Reconfiguration_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, orientation_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Reconfiguration__orientation_covariance,  // size() function pointer
    get_const_function__Reconfiguration__orientation_covariance,  // get_const(index) function pointer
    get_function__Reconfiguration__orientation_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, angular_velocity_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Reconfiguration__angular_velocity_covariance,  // size() function pointer
    get_const_function__Reconfiguration__angular_velocity_covariance,  // get_const(index) function pointer
    get_function__Reconfiguration__angular_velocity_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, linear_acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration, linear_acceleration_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Reconfiguration__linear_acceleration_covariance,  // size() function pointer
    get_const_function__Reconfiguration__linear_acceleration_covariance,  // get_const(index) function pointer
    get_function__Reconfiguration__linear_acceleration_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Reconfiguration_message_members = {
  "hrim_actuator_rotaryservo_msgs::msg",  // message namespace
  "Reconfiguration",  // message name
  7,  // number of fields
  sizeof(hrim_actuator_rotaryservo_msgs::msg::Reconfiguration),
  Reconfiguration_message_member_array,  // message members
  Reconfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  Reconfiguration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Reconfiguration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Reconfiguration_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hrim_actuator_rotaryservo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration>()
{
  return &::hrim_actuator_rotaryservo_msgs::msg::rosidl_typesupport_introspection_cpp::Reconfiguration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrim_actuator_rotaryservo_msgs, msg, Reconfiguration)() {
  return &::hrim_actuator_rotaryservo_msgs::msg::rosidl_typesupport_introspection_cpp::Reconfiguration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
