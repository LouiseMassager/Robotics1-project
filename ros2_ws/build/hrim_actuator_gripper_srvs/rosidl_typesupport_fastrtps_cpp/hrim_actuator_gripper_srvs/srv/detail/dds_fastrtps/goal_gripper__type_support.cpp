// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/GoalGripper.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.hpp"

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
  const hrim_actuator_gripper_srvs::srv::GoalGripper_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: on_off
  cdr << (ros_message.on_off ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_gripper_srvs::srv::GoalGripper_Request & ros_message)
{
  // Member: on_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.on_off = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
get_serialized_size(
  const hrim_actuator_gripper_srvs::srv::GoalGripper_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: on_off
  {
    size_t item_size = sizeof(ros_message.on_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
max_serialized_size_GoalGripper_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: on_off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GoalGripper_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::GoalGripper_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GoalGripper_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_gripper_srvs::srv::GoalGripper_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GoalGripper_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::GoalGripper_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GoalGripper_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GoalGripper_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GoalGripper_Request__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "GoalGripper_Request",
  _GoalGripper_Request__cdr_serialize,
  _GoalGripper_Request__cdr_deserialize,
  _GoalGripper_Request__get_serialized_size,
  _GoalGripper_Request__max_serialized_size
};

static rosidl_message_type_support_t _GoalGripper_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GoalGripper_Request__callbacks,
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
get_message_type_support_handle<hrim_actuator_gripper_srvs::srv::GoalGripper_Request>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_GoalGripper_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_GoalGripper_Request__handle;
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
  const hrim_actuator_gripper_srvs::srv::GoalGripper_Response & ros_message,
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
  hrim_actuator_gripper_srvs::srv::GoalGripper_Response & ros_message)
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
  const hrim_actuator_gripper_srvs::srv::GoalGripper_Response & ros_message,
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
max_serialized_size_GoalGripper_Response(
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

static bool _GoalGripper_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::GoalGripper_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GoalGripper_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_gripper_srvs::srv::GoalGripper_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GoalGripper_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::GoalGripper_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GoalGripper_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GoalGripper_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GoalGripper_Response__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "GoalGripper_Response",
  _GoalGripper_Response__cdr_serialize,
  _GoalGripper_Response__cdr_deserialize,
  _GoalGripper_Response__get_serialized_size,
  _GoalGripper_Response__max_serialized_size
};

static rosidl_message_type_support_t _GoalGripper_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GoalGripper_Response__callbacks,
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
get_message_type_support_handle<hrim_actuator_gripper_srvs::srv::GoalGripper_Response>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_GoalGripper_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_GoalGripper_Response__handle;
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

static service_type_support_callbacks_t _GoalGripper__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "GoalGripper",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)(),
};

static rosidl_service_type_support_t _GoalGripper__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GoalGripper__callbacks,
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
get_service_type_support_handle<hrim_actuator_gripper_srvs::srv::GoalGripper>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_GoalGripper__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, GoalGripper)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_GoalGripper__handle;
}

#ifdef __cplusplus
}
#endif
