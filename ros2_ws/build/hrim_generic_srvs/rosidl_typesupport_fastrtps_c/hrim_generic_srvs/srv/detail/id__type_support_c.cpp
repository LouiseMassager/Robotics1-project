// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice
#include "hrim_generic_srvs/srv/detail/id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_generic_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_generic_srvs/srv/detail/id__struct.h"
#include "hrim_generic_srvs/srv/detail/id__functions.h"
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


using _ID_Request__ros_msg_type = hrim_generic_srvs__srv__ID_Request;

static bool _ID_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ID_Request__ros_msg_type * ros_message = static_cast<const _ID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ID_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ID_Request__ros_msg_type * ros_message = static_cast<_ID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t get_serialized_size_hrim_generic_srvs__srv__ID_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ID_Request__ros_msg_type * ros_message = static_cast<const _ID_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ID_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_generic_srvs__srv__ID_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t max_serialized_size_hrim_generic_srvs__srv__ID_Request(
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

static size_t _ID_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_generic_srvs__srv__ID_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ID_Request = {
  "hrim_generic_srvs::srv",
  "ID_Request",
  _ID_Request__cdr_serialize,
  _ID_Request__cdr_deserialize,
  _ID_Request__get_serialized_size,
  _ID_Request__max_serialized_size
};

static rosidl_message_type_support_t _ID_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ID_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, ID_Request)() {
  return &_ID_Request__type_support;
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
// #include "hrim_generic_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/id__struct.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/id__functions.h"
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

#include "rosidl_runtime_c/string.h"  // device_name, hrim_version, hros_version
#include "rosidl_runtime_c/string_functions.h"  // device_name, hrim_version, hros_version

// forward declare type support functions


using _ID_Response__ros_msg_type = hrim_generic_srvs__srv__ID_Response;

static bool _ID_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ID_Response__ros_msg_type * ros_message = static_cast<const _ID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: device_kind_id
  {
    cdr << ros_message->device_kind_id;
  }

  // Field name: device_name
  {
    const rosidl_runtime_c__String * str = &ros_message->device_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: vendor_id
  {
    cdr << ros_message->vendor_id;
  }

  // Field name: product_id
  {
    cdr << ros_message->product_id;
  }

  // Field name: instance_id
  {
    cdr << ros_message->instance_id;
  }

  // Field name: hrim_version
  {
    const rosidl_runtime_c__String * str = &ros_message->hrim_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: hros_version
  {
    const rosidl_runtime_c__String * str = &ros_message->hros_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ID_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ID_Response__ros_msg_type * ros_message = static_cast<_ID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: device_kind_id
  {
    cdr >> ros_message->device_kind_id;
  }

  // Field name: device_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->device_name.data) {
      rosidl_runtime_c__String__init(&ros_message->device_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->device_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'device_name'\n");
      return false;
    }
  }

  // Field name: vendor_id
  {
    cdr >> ros_message->vendor_id;
  }

  // Field name: product_id
  {
    cdr >> ros_message->product_id;
  }

  // Field name: instance_id
  {
    cdr >> ros_message->instance_id;
  }

  // Field name: hrim_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hrim_version.data) {
      rosidl_runtime_c__String__init(&ros_message->hrim_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hrim_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hrim_version'\n");
      return false;
    }
  }

  // Field name: hros_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hros_version.data) {
      rosidl_runtime_c__String__init(&ros_message->hros_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hros_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hros_version'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t get_serialized_size_hrim_generic_srvs__srv__ID_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ID_Response__ros_msg_type * ros_message = static_cast<const _ID_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_kind_id
  {
    size_t item_size = sizeof(ros_message->device_kind_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device_name.size + 1);
  // field.name vendor_id
  {
    size_t item_size = sizeof(ros_message->vendor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name product_id
  {
    size_t item_size = sizeof(ros_message->product_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name instance_id
  {
    size_t item_size = sizeof(ros_message->instance_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hrim_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hrim_version.size + 1);
  // field.name hros_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hros_version.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ID_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_generic_srvs__srv__ID_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t max_serialized_size_hrim_generic_srvs__srv__ID_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: device_kind_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: device_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: vendor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: product_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: instance_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hrim_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: hros_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ID_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_generic_srvs__srv__ID_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ID_Response = {
  "hrim_generic_srvs::srv",
  "ID_Response",
  _ID_Response__cdr_serialize,
  _ID_Response__cdr_deserialize,
  _ID_Response__get_serialized_size,
  _ID_Response__max_serialized_size
};

static rosidl_message_type_support_t _ID_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ID_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, ID_Response)() {
  return &_ID_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrim_generic_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_generic_srvs/srv/id.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ID__callbacks = {
  "hrim_generic_srvs::srv",
  "ID",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, ID_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, ID_Response)(),
};

static rosidl_service_type_support_t ID__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ID__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, ID)() {
  return &ID__handle;
}

#if defined(__cplusplus)
}
#endif
