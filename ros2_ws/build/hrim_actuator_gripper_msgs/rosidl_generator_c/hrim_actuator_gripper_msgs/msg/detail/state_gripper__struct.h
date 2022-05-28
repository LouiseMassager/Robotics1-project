// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_gripper_msgs:msg/StateGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_GRIPPER__STRUCT_H_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/StateGripper in the package hrim_actuator_gripper_msgs.
typedef struct hrim_actuator_gripper_msgs__msg__StateGripper
{
  std_msgs__msg__Header header;
  bool on_off;
} hrim_actuator_gripper_msgs__msg__StateGripper;

// Struct for a sequence of hrim_actuator_gripper_msgs__msg__StateGripper.
typedef struct hrim_actuator_gripper_msgs__msg__StateGripper__Sequence
{
  hrim_actuator_gripper_msgs__msg__StateGripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_msgs__msg__StateGripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_GRIPPER__STRUCT_H_
