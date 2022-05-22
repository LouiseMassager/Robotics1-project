// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Reconfiguration.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__RECONFIGURATION__STRUCT_H_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__RECONFIGURATION__STRUCT_H_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/Reconfiguration in the package hrim_actuator_rotaryservo_msgs.
typedef struct hrim_actuator_rotaryservo_msgs__msg__Reconfiguration
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  double orientation_covariance[9];
  geometry_msgs__msg__Vector3 angular_velocity;
  double angular_velocity_covariance[9];
  geometry_msgs__msg__Vector3 linear_acceleration;
  double linear_acceleration_covariance[9];
} hrim_actuator_rotaryservo_msgs__msg__Reconfiguration;

// Struct for a sequence of hrim_actuator_rotaryservo_msgs__msg__Reconfiguration.
typedef struct hrim_actuator_rotaryservo_msgs__msg__Reconfiguration__Sequence
{
  hrim_actuator_rotaryservo_msgs__msg__Reconfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_msgs__msg__Reconfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__RECONFIGURATION__STRUCT_H_
