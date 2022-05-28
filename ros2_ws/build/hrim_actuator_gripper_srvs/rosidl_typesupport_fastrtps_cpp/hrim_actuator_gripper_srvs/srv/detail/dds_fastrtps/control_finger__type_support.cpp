// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__struct.hpp"

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

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_serialize(
  const hrim_actuator_gripper_srvs::srv::ControlFinger_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_linearposition
  cdr << ros_message.goal_linearposition;
  // Member: goal_angularposition
  cdr << ros_message.goal_angularposition;
  // Member: goal_effort
  cdr << ros_message.goal_effort;
  // Member: goal_velocity
  cdr << ros_message.goal_velocity;
  // Member: goal_acceleration
  cdr << ros_message.goal_acceleration;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_gripper_srvs::srv::ControlFinger_Request & ros_message)
{
  // Member: goal_linearposition
  cdr >> ros_message.goal_linearposition;

  // Member: goal_angularposition
  cdr >> ros_message.goal_angularposition;

  // Member: goal_effort
  cdr >> ros_message.goal_effort;

  // Member: goal_velocity
  cdr >> ros_message.goal_velocity;

  // Member: goal_acceleration
  cdr >> ros_message.goal_acceleration;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
get_serialized_size(
  const hrim_actuator_gripper_srvs::srv::ControlFinger_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_linearposition
  {
    size_t item_size = sizeof(ros_message.goal_linearposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_angularposition
  {
    size_t item_size = sizeof(ros_message.goal_angularposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_effort
  {
    size_t item_size = sizeof(ros_message.goal_effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_velocity
  {
    size_t item_size = sizeof(ros_message.goal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_acceleration
  {
    size_t item_size = sizeof(ros_message.goal_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
max_serialized_size_ControlFinger_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_linearposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_angularposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ControlFinger_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::ControlFinger_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlFinger_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_gripper_srvs::srv::ControlFinger_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlFinger_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::ControlFinger_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlFinger_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ControlFinger_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ControlFinger_Request__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlFinger_Request",
  _ControlFinger_Request__cdr_serialize,
  _ControlFinger_Request__cdr_deserialize,
  _ControlFinger_Request__get_serialized_size,
  _ControlFinger_Request__max_serialized_size
};

static rosidl_message_type_support_t _ControlFinger_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlFinger_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_gripper_srvs::srv::ControlFinger_Request>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_ControlFinger_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, ControlFinger_Request)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_ControlFinger_Request__handle;
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

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_serialize(
  const hrim_actuator_gripper_srvs::srv::ControlFinger_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_accepted
  cdr << (ros_message.goal_accepted ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_gripper_srvs::srv::ControlFinger_Response & ros_message)
{
  // Member: goal_accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.goal_accepted = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
get_serialized_size(
  const hrim_actuator_gripper_srvs::srv::ControlFinger_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_accepted
  {
    size_t item_size = sizeof(ros_message.goal_accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
max_serialized_size_ControlFinger_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ControlFinger_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::ControlFinger_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlFinger_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_gripper_srvs::srv::ControlFinger_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlFinger_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::ControlFinger_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlFinger_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ControlFinger_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ControlFinger_Response__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlFinger_Response",
  _ControlFinger_Response__cdr_serialize,
  _ControlFinger_Response__cdr_deserialize,
  _ControlFinger_Response__get_serialized_size,
  _ControlFinger_Response__max_serialized_size
};

static rosidl_message_type_support_t _ControlFinger_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlFinger_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_gripper_srvs::srv::ControlFinger_Response>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_ControlFinger_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, ControlFinger_Response)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_ControlFinger_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ControlFinger__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "ControlFinger",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, ControlFinger_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, ControlFinger_Response)(),
};

static rosidl_service_type_support_t _ControlFinger__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlFinger__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_gripper_srvs
const rosidl_service_type_support_t *
get_service_type_support_handle<hrim_actuator_gripper_srvs::srv::ControlFinger>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_ControlFinger__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, ControlFinger)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_ControlFinger__handle;
}

#ifdef __cplusplus
}
#endif
