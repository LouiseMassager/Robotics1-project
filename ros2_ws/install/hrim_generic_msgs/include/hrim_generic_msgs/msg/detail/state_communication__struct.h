// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_msgs:msg/StateCommunication.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__STRUCT_H_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__STRUCT_H_

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

// Struct defined in msg/StateCommunication in the package hrim_generic_msgs.
typedef struct hrim_generic_msgs__msg__StateCommunication
{
  std_msgs__msg__Header header;
  double comm_rate;
  double size_msgs;
} hrim_generic_msgs__msg__StateCommunication;

// Struct for a sequence of hrim_generic_msgs__msg__StateCommunication.
typedef struct hrim_generic_msgs__msg__StateCommunication__Sequence
{
  hrim_generic_msgs__msg__StateCommunication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_msgs__msg__StateCommunication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__STRUCT_H_
