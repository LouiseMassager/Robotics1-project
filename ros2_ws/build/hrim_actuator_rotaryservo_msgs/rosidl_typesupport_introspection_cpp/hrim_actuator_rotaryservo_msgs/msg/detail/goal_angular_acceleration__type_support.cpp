// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/GoalAngularAcceleration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_angular_acceleration__struct.hpp"
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

void GoalAngularAcceleration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration(_init);
}

void GoalAngularAcceleration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration *>(message_memory);
  typed_message->~GoalAngularAcceleration();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoalAngularAcceleration_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration, acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoalAngularAcceleration_message_members = {
  "hrim_actuator_rotaryservo_msgs::msg",  // message namespace
  "GoalAngularAcceleration",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration),
  GoalAngularAcceleration_message_member_array,  // message members
  GoalAngularAcceleration_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalAngularAcceleration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoalAngularAcceleration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoalAngularAcceleration_message_members,
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
get_message_type_support_handle<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration>()
{
  return &::hrim_actuator_rotaryservo_msgs::msg::rosidl_typesupport_introspection_cpp::GoalAngularAcceleration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrim_actuator_rotaryservo_msgs, msg, GoalAngularAcceleration)() {
  return &::hrim_actuator_rotaryservo_msgs::msg::rosidl_typesupport_introspection_cpp::GoalAngularAcceleration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
