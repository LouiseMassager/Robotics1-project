// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_actuator_rotaryservo_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__functions.h"
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


using _SpecsRotaryServo_Request__ros_msg_type = hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request;

static bool _SpecsRotaryServo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpecsRotaryServo_Request__ros_msg_type * ros_message = static_cast<const _SpecsRotaryServo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SpecsRotaryServo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpecsRotaryServo_Request__ros_msg_type * ros_message = static_cast<_SpecsRotaryServo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_srvs
size_t get_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpecsRotaryServo_Request__ros_msg_type * ros_message = static_cast<const _SpecsRotaryServo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpecsRotaryServo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_srvs
size_t max_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SpecsRotaryServo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpecsRotaryServo_Request = {
  "hrim_actuator_rotaryservo_srvs::srv",
  "SpecsRotaryServo_Request",
  _SpecsRotaryServo_Request__cdr_serialize,
  _SpecsRotaryServo_Request__cdr_deserialize,
  _SpecsRotaryServo_Request__get_serialized_size,
  _SpecsRotaryServo_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpecsRotaryServo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpecsRotaryServo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Request)() {
  return &_SpecsRotaryServo_Request__type_support;
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
// #include "hrim_actuator_rotaryservo_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__functions.h"
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


using _SpecsRotaryServo_Response__ros_msg_type = hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response;

static bool _SpecsRotaryServo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpecsRotaryServo_Response__ros_msg_type * ros_message = static_cast<const _SpecsRotaryServo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: control_type
  {
    cdr << ros_message->control_type;
  }

  // Field name: range_min
  {
    cdr << ros_message->range_min;
  }

  // Field name: range_max
  {
    cdr << ros_message->range_max;
  }

  // Field name: precision
  {
    cdr << ros_message->precision;
  }

  // Field name: rated_speed
  {
    cdr << ros_message->rated_speed;
  }

  // Field name: reachable_speed
  {
    cdr << ros_message->reachable_speed;
  }

  // Field name: rated_torque
  {
    cdr << ros_message->rated_torque;
  }

  // Field name: reachable_torque
  {
    cdr << ros_message->reachable_torque;
  }

  // Field name: temperature_range_min
  {
    cdr << ros_message->temperature_range_min;
  }

  // Field name: temperature_range_max
  {
    cdr << ros_message->temperature_range_max;
  }

  return true;
}

static bool _SpecsRotaryServo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpecsRotaryServo_Response__ros_msg_type * ros_message = static_cast<_SpecsRotaryServo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: control_type
  {
    cdr >> ros_message->control_type;
  }

  // Field name: range_min
  {
    cdr >> ros_message->range_min;
  }

  // Field name: range_max
  {
    cdr >> ros_message->range_max;
  }

  // Field name: precision
  {
    cdr >> ros_message->precision;
  }

  // Field name: rated_speed
  {
    cdr >> ros_message->rated_speed;
  }

  // Field name: reachable_speed
  {
    cdr >> ros_message->reachable_speed;
  }

  // Field name: rated_torque
  {
    cdr >> ros_message->rated_torque;
  }

  // Field name: reachable_torque
  {
    cdr >> ros_message->reachable_torque;
  }

  // Field name: temperature_range_min
  {
    cdr >> ros_message->temperature_range_min;
  }

  // Field name: temperature_range_max
  {
    cdr >> ros_message->temperature_range_max;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_srvs
size_t get_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpecsRotaryServo_Response__ros_msg_type * ros_message = static_cast<const _SpecsRotaryServo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name control_type
  {
    size_t item_size = sizeof(ros_message->control_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_min
  {
    size_t item_size = sizeof(ros_message->range_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_max
  {
    size_t item_size = sizeof(ros_message->range_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name precision
  {
    size_t item_size = sizeof(ros_message->precision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rated_speed
  {
    size_t item_size = sizeof(ros_message->rated_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reachable_speed
  {
    size_t item_size = sizeof(ros_message->reachable_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rated_torque
  {
    size_t item_size = sizeof(ros_message->rated_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reachable_torque
  {
    size_t item_size = sizeof(ros_message->reachable_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_range_min
  {
    size_t item_size = sizeof(ros_message->temperature_range_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_range_max
  {
    size_t item_size = sizeof(ros_message->temperature_range_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpecsRotaryServo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_srvs
size_t max_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: control_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: range_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: range_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: precision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rated_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reachable_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rated_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reachable_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temperature_range_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temperature_range_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SpecsRotaryServo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpecsRotaryServo_Response = {
  "hrim_actuator_rotaryservo_srvs::srv",
  "SpecsRotaryServo_Response",
  _SpecsRotaryServo_Response__cdr_serialize,
  _SpecsRotaryServo_Response__cdr_deserialize,
  _SpecsRotaryServo_Response__get_serialized_size,
  _SpecsRotaryServo_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpecsRotaryServo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpecsRotaryServo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Response)() {
  return &_SpecsRotaryServo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_rotaryservo_srvs/srv/specs_rotary_servo.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SpecsRotaryServo__callbacks = {
  "hrim_actuator_rotaryservo_srvs::srv",
  "SpecsRotaryServo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Response)(),
};

static rosidl_service_type_support_t SpecsRotaryServo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SpecsRotaryServo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo)() {
  return &SpecsRotaryServo__handle;
}

#if defined(__cplusplus)
}
#endif
