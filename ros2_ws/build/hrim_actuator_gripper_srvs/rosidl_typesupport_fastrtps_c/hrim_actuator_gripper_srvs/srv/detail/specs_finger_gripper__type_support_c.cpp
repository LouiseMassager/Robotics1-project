// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsFingerGripper.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__struct.h"
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__functions.h"
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


using _SpecsFingerGripper_Request__ros_msg_type = hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Request;

static bool _SpecsFingerGripper_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpecsFingerGripper_Request__ros_msg_type * ros_message = static_cast<const _SpecsFingerGripper_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SpecsFingerGripper_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpecsFingerGripper_Request__ros_msg_type * ros_message = static_cast<_SpecsFingerGripper_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpecsFingerGripper_Request__ros_msg_type * ros_message = static_cast<const _SpecsFingerGripper_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SpecsFingerGripper_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Request(
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

static size_t _SpecsFingerGripper_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpecsFingerGripper_Request = {
  "hrim_actuator_gripper_srvs::srv",
  "SpecsFingerGripper_Request",
  _SpecsFingerGripper_Request__cdr_serialize,
  _SpecsFingerGripper_Request__cdr_deserialize,
  _SpecsFingerGripper_Request__get_serialized_size,
  _SpecsFingerGripper_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpecsFingerGripper_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpecsFingerGripper_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Request)() {
  return &_SpecsFingerGripper_Request__type_support;
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
// #include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__functions.h"
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


using _SpecsFingerGripper_Response__ros_msg_type = hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response;

static bool _SpecsFingerGripper_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpecsFingerGripper_Response__ros_msg_type * ros_message = static_cast<const _SpecsFingerGripper_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: min_force
  {
    cdr << ros_message->min_force;
  }

  // Field name: max_force
  {
    cdr << ros_message->max_force;
  }

  // Field name: max_payload
  {
    cdr << ros_message->max_payload;
  }

  // Field name: min_speed
  {
    cdr << ros_message->min_speed;
  }

  // Field name: max_speed
  {
    cdr << ros_message->max_speed;
  }

  // Field name: max_acceleration
  {
    cdr << ros_message->max_acceleration;
  }

  // Field name: max_length
  {
    cdr << ros_message->max_length;
  }

  // Field name: max_angle
  {
    cdr << ros_message->max_angle;
  }

  // Field name: repeatability
  {
    cdr << ros_message->repeatability;
  }

  return true;
}

static bool _SpecsFingerGripper_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpecsFingerGripper_Response__ros_msg_type * ros_message = static_cast<_SpecsFingerGripper_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: min_force
  {
    cdr >> ros_message->min_force;
  }

  // Field name: max_force
  {
    cdr >> ros_message->max_force;
  }

  // Field name: max_payload
  {
    cdr >> ros_message->max_payload;
  }

  // Field name: min_speed
  {
    cdr >> ros_message->min_speed;
  }

  // Field name: max_speed
  {
    cdr >> ros_message->max_speed;
  }

  // Field name: max_acceleration
  {
    cdr >> ros_message->max_acceleration;
  }

  // Field name: max_length
  {
    cdr >> ros_message->max_length;
  }

  // Field name: max_angle
  {
    cdr >> ros_message->max_angle;
  }

  // Field name: repeatability
  {
    cdr >> ros_message->repeatability;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t get_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpecsFingerGripper_Response__ros_msg_type * ros_message = static_cast<const _SpecsFingerGripper_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name min_force
  {
    size_t item_size = sizeof(ros_message->min_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_force
  {
    size_t item_size = sizeof(ros_message->max_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_payload
  {
    size_t item_size = sizeof(ros_message->max_payload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_speed
  {
    size_t item_size = sizeof(ros_message->min_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_speed
  {
    size_t item_size = sizeof(ros_message->max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration
  {
    size_t item_size = sizeof(ros_message->max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_length
  {
    size_t item_size = sizeof(ros_message->max_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_angle
  {
    size_t item_size = sizeof(ros_message->max_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name repeatability
  {
    size_t item_size = sizeof(ros_message->repeatability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpecsFingerGripper_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_gripper_srvs
size_t max_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: min_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_payload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: repeatability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SpecsFingerGripper_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpecsFingerGripper_Response = {
  "hrim_actuator_gripper_srvs::srv",
  "SpecsFingerGripper_Response",
  _SpecsFingerGripper_Response__cdr_serialize,
  _SpecsFingerGripper_Response__cdr_deserialize,
  _SpecsFingerGripper_Response__get_serialized_size,
  _SpecsFingerGripper_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpecsFingerGripper_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpecsFingerGripper_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Response)() {
  return &_SpecsFingerGripper_Response__type_support;
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
#include "hrim_actuator_gripper_srvs/srv/specs_finger_gripper.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SpecsFingerGripper__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "SpecsFingerGripper",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Response)(),
};

static rosidl_service_type_support_t SpecsFingerGripper__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SpecsFingerGripper__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper)() {
  return &SpecsFingerGripper__handle;
}

#if defined(__cplusplus)
}
#endif
