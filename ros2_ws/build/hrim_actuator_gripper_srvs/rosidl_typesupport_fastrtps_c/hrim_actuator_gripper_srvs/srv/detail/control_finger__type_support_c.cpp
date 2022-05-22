// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__struct.h"
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__functions.h"
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


using _ControlFinger_Request__ros_msg_type = hrim_actuator_gripper_srvs__srv__ControlFinger_Request;

static bool _ControlFinger_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlFinger_Request__ros_msg_type * ros_message = static_cast<const _ControlFinger_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_linearposition
  {
    cdr << ros_message->goal_linearposition;
  }

  // Field name: goal_angularposition
  {
    cdr << ros_message->goal_angularposition;
  }

  // Field name: goal_effort
  {
    cdr << ros_message->goal_effort;
  }

  // Field name: goal_velocity
  {
    cdr << ros_message->goal_velocity;
  }

  // Field name: goal_acceleration
  {
    cdr << ros_message->goal_acceleration;
  }

  return true;
}

static bool _ControlFinger_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlFinger_Request__ros_msg_type * ros_message = static_cast<_ControlFinger_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_linearposition
  {
    cdr >> ros_message->goal_linearposition;
  }

  // Field name: goal_angularposition
  {
    cdr >> ros_message->goal_angularposition;
  }

  // Field name: goal_effort
  {
    cdr >> ros_message->goal_effort;
  }

  // Field name: goal_velocity
  {
    cdr >> ros_message->goal_velocity;
  }

  // Field name: goal_acceleration
  {
    cdr >> ros_message->goal_acceleration;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlFinger_Request__ros_msg_type * ros_message = static_cast<const _ControlFinger_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_linearposition
  {
    size_t item_size = sizeof(ros_message->goal_linearposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_angularposition
  {
    size_t item_size = sizeof(ros_message->goal_angularposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_effort
  {
    size_t item_size = sizeof(ros_message->goal_effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_velocity
  {
    size_t item_size = sizeof(ros_message->goal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_acceleration
  {
    size_t item_size = sizeof(ros_message->goal_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlFinger_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_linearposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goal_angularposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goal_effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goal_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goal_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ControlFinger_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ControlFinger_Request = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlFinger_Request",
  _ControlFinger_Request__cdr_serialize,
  _ControlFinger_Request__cdr_deserialize,
  _ControlFinger_Request__get_serialized_size,
  _ControlFinger_Request__max_serialized_size
};

static rosidl_message_type_support_t _ControlFinger_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlFinger_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlFinger_Request)() {
  return &_ControlFinger_Request__type_support;
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
// #include "hrim_actuator_gripper_srvs/srv/detail/control_finger__struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/control_finger__functions.h"
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


using _ControlFinger_Response__ros_msg_type = hrim_actuator_gripper_srvs__srv__ControlFinger_Response;

static bool _ControlFinger_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlFinger_Response__ros_msg_type * ros_message = static_cast<const _ControlFinger_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_accepted
  {
    cdr << (ros_message->goal_accepted ? true : false);
  }

  return true;
}

static bool _ControlFinger_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlFinger_Response__ros_msg_type * ros_message = static_cast<_ControlFinger_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->goal_accepted = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlFinger_Response__ros_msg_type * ros_message = static_cast<const _ControlFinger_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ControlFinger_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Response(
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

static size_t _ControlFinger_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__ControlFinger_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ControlFinger_Response = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlFinger_Response",
  _ControlFinger_Response__cdr_serialize,
  _ControlFinger_Response__cdr_deserialize,
  _ControlFinger_Response__get_serialized_size,
  _ControlFinger_Response__max_serialized_size
};

static rosidl_message_type_support_t _ControlFinger_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlFinger_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlFinger_Response)() {
  return &_ControlFinger_Response__type_support;
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
#include "hrim_actuator_gripper_srvs/srv/control_finger.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ControlFinger__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlFinger",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlFinger_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlFinger_Response)(),
};

static rosidl_service_type_support_t ControlFinger__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ControlFinger__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlFinger)() {
  return &ControlFinger__handle;
}

#if defined(__cplusplus)
}
#endif
