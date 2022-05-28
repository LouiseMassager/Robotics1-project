// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_

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

// Struct defined in msg/Temperature in the package hrim_actuator_rotaryservo_msgs.
typedef struct hrim_actuator_rotaryservo_msgs__msg__Temperature
{
  std_msgs__msg__Header header;
  double temperature;
  bool temperature_error;
} hrim_actuator_rotaryservo_msgs__msg__Temperature;

// Struct for a sequence of hrim_actuator_rotaryservo_msgs__msg__Temperature.
typedef struct hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence
{
  hrim_actuator_rotaryservo_msgs__msg__Temperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
