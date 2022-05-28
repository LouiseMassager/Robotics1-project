// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__STRUCT_H_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__STRUCT_H_

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

// Struct defined in msg/Power in the package hrim_generic_msgs.
typedef struct hrim_generic_msgs__msg__Power
{
  std_msgs__msg__Header header;
  float voltage;
  float current_consumption;
  float current_surplus;
  float power_consumption;
  float power_surplus;
} hrim_generic_msgs__msg__Power;

// Struct for a sequence of hrim_generic_msgs__msg__Power.
typedef struct hrim_generic_msgs__msg__Power__Sequence
{
  hrim_generic_msgs__msg__Power * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_msgs__msg__Power__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__STRUCT_H_
