// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_actuator_rotaryservo_msgs:msg/StateRotaryServo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__rosidl_typesupport_introspection_c.h"
#include "hrim_actuator_rotaryservo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__functions.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__init(message_memory);
}

void StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moving",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, moving),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, fault),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo, control_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_members = {
  "hrim_actuator_rotaryservo_msgs__msg",  // message namespace
  "StateRotaryServo",  // message name
  10,  // number of fields
  sizeof(hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo),
  StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_member_array,  // message members
  StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_init_function,  // function to initialize message memory (memory has to be allocated)
  StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_type_support_handle = {
  0,
  &StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_msgs, msg, StateRotaryServo)() {
  StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_type_support_handle.typesupport_identifier) {
    StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StateRotaryServo__rosidl_typesupport_introspection_c__StateRotaryServo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
