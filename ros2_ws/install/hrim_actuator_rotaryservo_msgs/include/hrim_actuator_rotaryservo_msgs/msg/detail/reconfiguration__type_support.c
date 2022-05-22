// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Reconfiguration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__rosidl_typesupport_introspection_c.h"
#include "hrim_actuator_rotaryservo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__functions.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_msgs__msg__Reconfiguration__init(message_memory);
}

void Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_msgs__msg__Reconfiguration__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, orientation_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, angular_velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration, linear_acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_members = {
  "hrim_actuator_rotaryservo_msgs__msg",  // message namespace
  "Reconfiguration",  // message name
  7,  // number of fields
  sizeof(hrim_actuator_rotaryservo_msgs__msg__Reconfiguration),
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_member_array,  // message members
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_type_support_handle = {
  0,
  &Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_msgs, msg, Reconfiguration)() {
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_type_support_handle.typesupport_identifier) {
    Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconfiguration__rosidl_typesupport_introspection_c__Reconfiguration_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
