// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_gripper_msgs:msg/CycleTime.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hrim_actuator_gripper_msgs/msg/detail/cycle_time__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hrim_actuator_gripper_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CycleTime_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hrim_actuator_gripper_msgs::msg::CycleTime(_init);
}

void CycleTime_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hrim_actuator_gripper_msgs::msg::CycleTime *>(message_memory);
  typed_message->~CycleTime();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CycleTime_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_gripper_msgs::msg::CycleTime, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cycle_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_gripper_msgs::msg::CycleTime, cycle_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CycleTime_message_members = {
  "hrim_actuator_gripper_msgs::msg",  // message namespace
  "CycleTime",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_gripper_msgs::msg::CycleTime),
  CycleTime_message_member_array,  // message members
  CycleTime_init_function,  // function to initialize message memory (memory has to be allocated)
  CycleTime_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CycleTime_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CycleTime_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hrim_actuator_gripper_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_gripper_msgs::msg::CycleTime>()
{
  return &::hrim_actuator_gripper_msgs::msg::rosidl_typesupport_introspection_cpp::CycleTime_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrim_actuator_gripper_msgs, msg, CycleTime)() {
  return &::hrim_actuator_gripper_msgs::msg::rosidl_typesupport_introspection_cpp::CycleTime_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
