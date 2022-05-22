// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
cdr_serialize(
  const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
get_serialized_size(
  const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
max_serialized_size_SpecsRotaryServo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SpecsRotaryServo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpecsRotaryServo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpecsRotaryServo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpecsRotaryServo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpecsRotaryServo_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SpecsRotaryServo_Request__callbacks = {
  "hrim_actuator_rotaryservo_srvs::srv",
  "SpecsRotaryServo_Request",
  _SpecsRotaryServo_Request__cdr_serialize,
  _SpecsRotaryServo_Request__cdr_deserialize,
  _SpecsRotaryServo_Request__get_serialized_size,
  _SpecsRotaryServo_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpecsRotaryServo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpecsRotaryServo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_rotaryservo_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request>()
{
  return &hrim_actuator_rotaryservo_srvs::srv::typesupport_fastrtps_cpp::_SpecsRotaryServo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Request)() {
  return &hrim_actuator_rotaryservo_srvs::srv::typesupport_fastrtps_cpp::_SpecsRotaryServo_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
cdr_serialize(
  const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: control_type
  cdr << ros_message.control_type;
  // Member: range_min
  cdr << ros_message.range_min;
  // Member: range_max
  cdr << ros_message.range_max;
  // Member: precision
  cdr << ros_message.precision;
  // Member: rated_speed
  cdr << ros_message.rated_speed;
  // Member: reachable_speed
  cdr << ros_message.reachable_speed;
  // Member: rated_torque
  cdr << ros_message.rated_torque;
  // Member: reachable_torque
  cdr << ros_message.reachable_torque;
  // Member: temperature_range_min
  cdr << ros_message.temperature_range_min;
  // Member: temperature_range_max
  cdr << ros_message.temperature_range_max;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & ros_message)
{
  // Member: control_type
  cdr >> ros_message.control_type;

  // Member: range_min
  cdr >> ros_message.range_min;

  // Member: range_max
  cdr >> ros_message.range_max;

  // Member: precision
  cdr >> ros_message.precision;

  // Member: rated_speed
  cdr >> ros_message.rated_speed;

  // Member: reachable_speed
  cdr >> ros_message.reachable_speed;

  // Member: rated_torque
  cdr >> ros_message.rated_torque;

  // Member: reachable_torque
  cdr >> ros_message.reachable_torque;

  // Member: temperature_range_min
  cdr >> ros_message.temperature_range_min;

  // Member: temperature_range_max
  cdr >> ros_message.temperature_range_max;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
get_serialized_size(
  const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: control_type
  {
    size_t item_size = sizeof(ros_message.control_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_min
  {
    size_t item_size = sizeof(ros_message.range_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_max
  {
    size_t item_size = sizeof(ros_message.range_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: precision
  {
    size_t item_size = sizeof(ros_message.precision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rated_speed
  {
    size_t item_size = sizeof(ros_message.rated_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reachable_speed
  {
    size_t item_size = sizeof(ros_message.reachable_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rated_torque
  {
    size_t item_size = sizeof(ros_message.rated_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reachable_torque
  {
    size_t item_size = sizeof(ros_message.reachable_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_range_min
  {
    size_t item_size = sizeof(ros_message.temperature_range_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_range_max
  {
    size_t item_size = sizeof(ros_message.temperature_range_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_rotaryservo_srvs
max_serialized_size_SpecsRotaryServo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: control_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: range_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: range_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: precision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rated_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reachable_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rated_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reachable_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature_range_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature_range_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SpecsRotaryServo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpecsRotaryServo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpecsRotaryServo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpecsRotaryServo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpecsRotaryServo_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SpecsRotaryServo_Response__callbacks = {
  "hrim_actuator_rotaryservo_srvs::srv",
  "SpecsRotaryServo_Response",
  _SpecsRotaryServo_Response__cdr_serialize,
  _SpecsRotaryServo_Response__cdr_deserialize,
  _SpecsRotaryServo_Response__get_serialized_size,
  _SpecsRotaryServo_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpecsRotaryServo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpecsRotaryServo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_rotaryservo_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response>()
{
  return &hrim_actuator_rotaryservo_srvs::srv::typesupport_fastrtps_cpp::_SpecsRotaryServo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Response)() {
  return &hrim_actuator_rotaryservo_srvs::srv::typesupport_fastrtps_cpp::_SpecsRotaryServo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SpecsRotaryServo__callbacks = {
  "hrim_actuator_rotaryservo_srvs::srv",
  "SpecsRotaryServo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Response)(),
};

static rosidl_service_type_support_t _SpecsRotaryServo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpecsRotaryServo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_rotaryservo_srvs
const rosidl_service_type_support_t *
get_service_type_support_handle<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo>()
{
  return &hrim_actuator_rotaryservo_srvs::srv::typesupport_fastrtps_cpp::_SpecsRotaryServo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo)() {
  return &hrim_actuator_rotaryservo_srvs::srv::typesupport_fastrtps_cpp::_SpecsRotaryServo__handle;
}

#ifdef __cplusplus
}
#endif
