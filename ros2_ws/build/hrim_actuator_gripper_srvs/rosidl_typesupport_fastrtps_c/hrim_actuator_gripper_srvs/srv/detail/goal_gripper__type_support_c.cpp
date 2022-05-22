// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/GoalGripper.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.h"
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__functions.h"
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


using _GoalGripper_Request__ros_msg_type = hrim_actuator_gripper_srvs__srv__GoalGripper_Request;

static bool _GoalGripper_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalGripper_Request__ros_msg_type * ros_message = static_cast<const _GoalGripper_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: on_off
  {
    cdr << (ros_message->on_off ? true : false);
  }

  return true;
}

static bool _GoalGripper_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalGripper_Request__ros_msg_type * ros_message = static_cast<_GoalGripper_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: on_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->on_off = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalGripper_Request__ros_msg_type * ros_message = static_cast<const _GoalGripper_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name on_off
  {
    size_t item_size = sizeof(ros_message->on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoalGripper_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: on_off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalGripper_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalGripper_Request = {
  "hrim_actuator_gripper_srvs::srv",
  "GoalGripper_Request",
  _GoalGripper_Request__cdr_serialize,
  _GoalGripper_Request__cdr_deserialize,
  _GoalGripper_Request__get_serialized_size,
  _GoalGripper_Request__max_serialized_size
};

static rosidl_message_type_support_t _GoalGripper_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalGripper_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)() {
  return &_GoalGripper_Request__type_support;
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
// #include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__functions.h"
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


using _GoalGripper_Response__ros_msg_type = hrim_actuator_gripper_srvs__srv__GoalGripper_Response;

static bool _GoalGripper_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalGripper_Response__ros_msg_type * ros_message = static_cast<const _GoalGripper_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_accepted
  {
    cdr << (ros_message->goal_accepted ? true : false);
  }

  return true;
}

static bool _GoalGripper_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalGripper_Response__ros_msg_type * ros_message = static_cast<_GoalGripper_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->goal_accepted = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalGripper_Response__ros_msg_type * ros_message = static_cast<const _GoalGripper_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GoalGripper_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Response(
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

static size_t _GoalGripper_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__GoalGripper_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalGripper_Response = {
  "hrim_actuator_gripper_srvs::srv",
  "GoalGripper_Response",
  _GoalGripper_Response__cdr_serialize,
  _GoalGripper_Response__cdr_deserialize,
  _GoalGripper_Response__get_serialized_size,
  _GoalGripper_Response__max_serialized_size
};

static rosidl_message_type_support_t _GoalGripper_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalGripper_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)() {
  return &_GoalGripper_Response__type_support;
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
#include "hrim_actuator_gripper_srvs/srv/goal_gripper.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GoalGripper__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "GoalGripper",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)(),
};

static rosidl_service_type_support_t GoalGripper__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GoalGripper__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, GoalGripper)() {
  return &GoalGripper__handle;
}

#if defined(__cplusplus)
}
#endif
