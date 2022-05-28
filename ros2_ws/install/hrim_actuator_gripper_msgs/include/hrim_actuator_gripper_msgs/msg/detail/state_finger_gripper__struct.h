// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_gripper_msgs:msg/StateFingerGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__STRUCT_H_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__STRUCT_H_

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

// Struct defined in msg/StateFingerGripper in the package hrim_actuator_gripper_msgs.
typedef struct hrim_actuator_gripper_msgs__msg__StateFingerGripper
{
  std_msgs__msg__Header header;
  float angular_position;
  float linear_position;
} hrim_actuator_gripper_msgs__msg__StateFingerGripper;

// Struct for a sequence of hrim_actuator_gripper_msgs__msg__StateFingerGripper.
typedef struct hrim_actuator_gripper_msgs__msg__StateFingerGripper__Sequence
{
  hrim_actuator_gripper_msgs__msg__StateFingerGripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_msgs__msg__StateFingerGripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__STRUCT_H_
