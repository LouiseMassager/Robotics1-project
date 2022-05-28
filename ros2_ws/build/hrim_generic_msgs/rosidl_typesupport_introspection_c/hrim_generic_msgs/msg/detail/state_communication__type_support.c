// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_generic_msgs:msg/StateCommunication.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_generic_msgs/msg/detail/state_communication__rosidl_typesupport_introspection_c.h"
#include "hrim_generic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_generic_msgs/msg/detail/state_communication__functions.h"
#include "hrim_generic_msgs/msg/detail/state_communication__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_generic_msgs__msg__StateCommunication__init(message_memory);
}

void StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_fini_function(void * message_memory)
{
  hrim_generic_msgs__msg__StateCommunication__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_generic_msgs__msg__StateCommunication, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "comm_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_generic_msgs__msg__StateCommunication, comm_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size_msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_generic_msgs__msg__StateCommunication, size_msgs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_members = {
  "hrim_generic_msgs__msg",  // message namespace
  "StateCommunication",  // message name
  3,  // number of fields
  sizeof(hrim_generic_msgs__msg__StateCommunication),
  StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_member_array,  // message members
  StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_init_function,  // function to initialize message memory (memory has to be allocated)
  StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_type_support_handle = {
  0,
  &StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_generic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_msgs, msg, StateCommunication)() {
  StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_type_support_handle.typesupport_identifier) {
    StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StateCommunication__rosidl_typesupport_introspection_c__StateCommunication_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
