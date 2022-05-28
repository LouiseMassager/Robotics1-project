// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice
#include "hrim_generic_srvs/srv/detail/simulation3_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_generic_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_generic_srvs/srv/detail/simulation3_d__struct.h"
#include "hrim_generic_srvs/srv/detail/simulation3_d__functions.h"
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


using _Simulation3D_Request__ros_msg_type = hrim_generic_srvs__srv__Simulation3D_Request;

static bool _Simulation3D_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Simulation3D_Request__ros_msg_type * ros_message = static_cast<const _Simulation3D_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Simulation3D_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Simulation3D_Request__ros_msg_type * ros_message = static_cast<_Simulation3D_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t get_serialized_size_hrim_generic_srvs__srv__Simulation3D_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Simulation3D_Request__ros_msg_type * ros_message = static_cast<const _Simulation3D_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Simulation3D_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_generic_srvs__srv__Simulation3D_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t max_serialized_size_hrim_generic_srvs__srv__Simulation3D_Request(
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

static size_t _Simulation3D_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_generic_srvs__srv__Simulation3D_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Simulation3D_Request = {
  "hrim_generic_srvs::srv",
  "Simulation3D_Request",
  _Simulation3D_Request__cdr_serialize,
  _Simulation3D_Request__cdr_deserialize,
  _Simulation3D_Request__get_serialized_size,
  _Simulation3D_Request__max_serialized_size
};

static rosidl_message_type_support_t _Simulation3D_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Simulation3D_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, Simulation3D_Request)() {
  return &_Simulation3D_Request__type_support;
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
// #include "hrim_generic_srvs/srv/detail/simulation3_d__struct.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/simulation3_d__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // model
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // model
#include "rosidl_runtime_c/string.h"  // model_name
#include "rosidl_runtime_c/string_functions.h"  // model_name

// forward declare type support functions


using _Simulation3D_Response__ros_msg_type = hrim_generic_srvs__srv__Simulation3D_Response;

static bool _Simulation3D_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Simulation3D_Response__ros_msg_type * ros_message = static_cast<const _Simulation3D_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: model_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model_name;
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

  // Field name: model
  {
    size_t size = ros_message->model.size;
    auto array_ptr = ros_message->model.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Simulation3D_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Simulation3D_Response__ros_msg_type * ros_message = static_cast<_Simulation3D_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: model_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_name.data) {
      rosidl_runtime_c__String__init(&ros_message->model_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_name'\n");
      return false;
    }
  }

  // Field name: model
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->model.data) {
      rosidl_runtime_c__octet__Sequence__fini(&ros_message->model);
    }
    if (!rosidl_runtime_c__octet__Sequence__init(&ros_message->model, size)) {
      return "failed to create array for field 'model'";
    }
    auto array_ptr = ros_message->model.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t get_serialized_size_hrim_generic_srvs__srv__Simulation3D_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Simulation3D_Response__ros_msg_type * ros_message = static_cast<const _Simulation3D_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name model_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_name.size + 1);
  // field.name model
  {
    size_t array_size = ros_message->model.size;
    auto array_ptr = ros_message->model.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Simulation3D_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_generic_srvs__srv__Simulation3D_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_srvs
size_t max_serialized_size_hrim_generic_srvs__srv__Simulation3D_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: model_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: model
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Simulation3D_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_generic_srvs__srv__Simulation3D_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Simulation3D_Response = {
  "hrim_generic_srvs::srv",
  "Simulation3D_Response",
  _Simulation3D_Response__cdr_serialize,
  _Simulation3D_Response__cdr_deserialize,
  _Simulation3D_Response__get_serialized_size,
  _Simulation3D_Response__max_serialized_size
};

static rosidl_message_type_support_t _Simulation3D_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Simulation3D_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, Simulation3D_Response)() {
  return &_Simulation3D_Response__type_support;
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
#include "hrim_generic_srvs/srv/simulation3_d.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Simulation3D__callbacks = {
  "hrim_generic_srvs::srv",
  "Simulation3D",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, Simulation3D_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, Simulation3D_Response)(),
};

static rosidl_service_type_support_t Simulation3D__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Simulation3D__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_srvs, srv, Simulation3D)() {
  return &Simulation3D__handle;
}

#if defined(__cplusplus)
}
#endif
