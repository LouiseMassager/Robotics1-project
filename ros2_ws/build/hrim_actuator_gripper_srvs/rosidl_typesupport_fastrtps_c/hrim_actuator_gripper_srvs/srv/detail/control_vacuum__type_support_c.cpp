// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__struct.h"
#include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ControlVacuum_Request__ros_msg_type = hrim_actuator_gripper_srvs__srv__ControlVacuum_Request;

static bool _ControlVacuum_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlVacuum_Request__ros_msg_type * ros_message = static_cast<const _ControlVacuum_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_percentage_suction
  {
    cdr << ros_message->goal_percentage_suction;
  }

  return true;
}

static bool _ControlVacuum_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlVacuum_Request__ros_msg_type * ros_message = static_cast<_ControlVacuum_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_percentage_suction
  {
    cdr >> ros_message->goal_percentage_suction;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlVacuum_Request__ros_msg_type * ros_message = static_cast<const _ControlVacuum_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_percentage_suction
  {
    size_t item_size = sizeof(ros_message->goal_percentage_suction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlVacuum_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_percentage_suction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ControlVacuum_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ControlVacuum_Request = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlVacuum_Request",
  _ControlVacuum_Request__cdr_serialize,
  _ControlVacuum_Request__cdr_deserialize,
  _ControlVacuum_Request__get_serialized_size,
  _ControlVacuum_Request__max_serialized_size
};

static rosidl_message_type_support_t _ControlVacuum_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlVacuum_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Request)() {
  return &_ControlVacuum_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ControlVacuum_Response__ros_msg_type = hrim_actuator_gripper_srvs__srv__ControlVacuum_Response;

static bool _ControlVacuum_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlVacuum_Response__ros_msg_type * ros_message = static_cast<const _ControlVacuum_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_accepted
  {
    cdr << (ros_message->goal_accepted ? true : false);
  }

  return true;
}

static bool _ControlVacuum_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlVacuum_Response__ros_msg_type * ros_message = static_cast<_ControlVacuum_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->goal_accepted = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlVacuum_Response__ros_msg_type * ros_message = static_cast<const _ControlVacuum_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_accepted
  {
    size_t item_size = sizeof(ros_message->goal_accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlVacuum_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ControlVacuum_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlVacuum_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ControlVacuum_Response = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlVacuum_Response",
  _ControlVacuum_Response__cdr_serialize,
  _ControlVacuum_Response__cdr_deserialize,
  _ControlVacuum_Response__get_serialized_size,
  _ControlVacuum_Response__max_serialized_size
};

static rosidl_message_type_support_t _ControlVacuum_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlVacuum_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Response)() {
  return &_ControlVacuum_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_gripper_srvs/srv/control_vacuum.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ControlVacuum__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlVacuum",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Response)(),
};

static rosidl_service_type_support_t ControlVacuum__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ControlVacuum__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum)() {
  return &ControlVacuum__handle;
}

#if defined(__cplusplus)
}
#endif
