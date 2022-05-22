// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

#include "rosidl_runtime_c/string.h"  // joint_name
#include "rosidl_runtime_c/string_functions.h"  // joint_name
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"  // trajectory

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory)();


using _GoalJointTrajectory_Goal__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal;

static bool _GoalJointTrajectory_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_Goal__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_name
  {
    const rosidl_runtime_c__String * str = &ros_message->joint_name;
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

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_Goal__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint_name.data) {
      rosidl_runtime_c__String__init(&ros_message->joint_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint_name'\n");
      return false;
    }
  }

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_Goal__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint_name.size + 1);
  // field.name trajectory

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->trajectory), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joint_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_Goal = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_Goal",
  _GoalJointTrajectory_Goal__cdr_serialize,
  _GoalJointTrajectory_Goal__cdr_deserialize,
  _GoalJointTrajectory_Goal__get_serialized_size,
  _GoalJointTrajectory_Goal__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Goal)() {
  return &_GoalJointTrajectory_Goal__type_support;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // error_string
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_string

// forward declare type support functions


using _GoalJointTrajectory_Result__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result;

static bool _GoalJointTrajectory_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_Result__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: error_string
  {
    const rosidl_runtime_c__String * str = &ros_message->error_string;
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

static bool _GoalJointTrajectory_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_Result__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: error_string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_string.data) {
      rosidl_runtime_c__String__init(&ros_message->error_string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_string'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_Result__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_string.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error_string
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

static size_t _GoalJointTrajectory_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_Result = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_Result",
  _GoalJointTrajectory_Result__cdr_serialize,
  _GoalJointTrajectory_Result__cdr_deserialize,
  _GoalJointTrajectory_Result__get_serialized_size,
  _GoalJointTrajectory_Result__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Result)() {
  return &_GoalJointTrajectory_Result__type_support;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // joint_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // joint_name
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // actual, desired, error

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint)();


using _GoalJointTrajectory_Feedback__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback;

static bool _GoalJointTrajectory_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_Feedback__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: joint_name
  {
    const rosidl_runtime_c__String * str = &ros_message->joint_name;
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

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->desired, cdr))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->actual, cdr))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_Feedback__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: joint_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint_name.data) {
      rosidl_runtime_c__String__init(&ros_message->joint_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint_name'\n");
      return false;
    }
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->desired))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->actual))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_Feedback__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint_name.size + 1);
  // field.name desired

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->desired), current_alignment);
  // field.name actual

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->actual), current_alignment);
  // field.name error

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
    &(ros_message->error), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: joint_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_Feedback = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_Feedback",
  _GoalJointTrajectory_Feedback__cdr_serialize,
  _GoalJointTrajectory_Feedback__cdr_deserialize,
  _GoalJointTrajectory_Feedback__get_serialized_size,
  _GoalJointTrajectory_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Feedback)() {
  return &_GoalJointTrajectory_Feedback__type_support;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _GoalJointTrajectory_SendGoal_Request__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request;

static bool _GoalJointTrajectory_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_SendGoal_Request = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_SendGoal_Request",
  _GoalJointTrajectory_SendGoal_Request__cdr_serialize,
  _GoalJointTrajectory_SendGoal_Request__cdr_deserialize,
  _GoalJointTrajectory_SendGoal_Request__get_serialized_size,
  _GoalJointTrajectory_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Request)() {
  return &_GoalJointTrajectory_SendGoal_Request__type_support;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _GoalJointTrajectory_SendGoal_Response__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response;

static bool _GoalJointTrajectory_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_SendGoal_Response = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_SendGoal_Response",
  _GoalJointTrajectory_SendGoal_Response__cdr_serialize,
  _GoalJointTrajectory_SendGoal_Response__cdr_deserialize,
  _GoalJointTrajectory_SendGoal_Response__get_serialized_size,
  _GoalJointTrajectory_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Response)() {
  return &_GoalJointTrajectory_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_actuator_rotaryservo_actions/action/goal_joint_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GoalJointTrajectory_SendGoal__callbacks = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Response)(),
};

static rosidl_service_type_support_t GoalJointTrajectory_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GoalJointTrajectory_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal)() {
  return &GoalJointTrajectory_SendGoal__handle;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _GoalJointTrajectory_GetResult_Request__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request;

static bool _GoalJointTrajectory_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_GetResult_Request = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_GetResult_Request",
  _GoalJointTrajectory_GetResult_Request__cdr_serialize,
  _GoalJointTrajectory_GetResult_Request__cdr_deserialize,
  _GoalJointTrajectory_GetResult_Request__get_serialized_size,
  _GoalJointTrajectory_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Request)() {
  return &_GoalJointTrajectory_GetResult_Request__type_support;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Result)();


using _GoalJointTrajectory_GetResult_Response__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response;

static bool _GoalJointTrajectory_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_GetResult_Response = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_GetResult_Response",
  _GoalJointTrajectory_GetResult_Response__cdr_serialize,
  _GoalJointTrajectory_GetResult_Response__cdr_deserialize,
  _GoalJointTrajectory_GetResult_Response__get_serialized_size,
  _GoalJointTrajectory_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Response)() {
  return &_GoalJointTrajectory_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/goal_joint_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GoalJointTrajectory_GetResult__callbacks = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Response)(),
};

static rosidl_service_type_support_t GoalJointTrajectory_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GoalJointTrajectory_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult)() {
  return &GoalJointTrajectory_GetResult__handle;
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
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
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

// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _GoalJointTrajectory_FeedbackMessage__ros_msg_type = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage;

static bool _GoalJointTrajectory_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalJointTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoalJointTrajectory_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalJointTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<_GoalJointTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalJointTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _GoalJointTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalJointTrajectory_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_actuator_rotaryservo_actions
size_t max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalJointTrajectory_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalJointTrajectory_FeedbackMessage = {
  "hrim_actuator_rotaryservo_actions::action",
  "GoalJointTrajectory_FeedbackMessage",
  _GoalJointTrajectory_FeedbackMessage__cdr_serialize,
  _GoalJointTrajectory_FeedbackMessage__cdr_deserialize,
  _GoalJointTrajectory_FeedbackMessage__get_serialized_size,
  _GoalJointTrajectory_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _GoalJointTrajectory_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalJointTrajectory_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_FeedbackMessage)() {
  return &_GoalJointTrajectory_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
