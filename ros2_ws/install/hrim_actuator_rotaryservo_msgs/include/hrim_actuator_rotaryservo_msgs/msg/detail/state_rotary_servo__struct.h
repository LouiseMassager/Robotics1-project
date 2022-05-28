// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_rotaryservo_msgs:msg/StateRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__STRUCT_H_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FAULT_NONE'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__FAULT_NONE = 0
};

/// Constant 'FAULT_CURRENT'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__FAULT_CURRENT = 1
};

/// Constant 'FAULT_TEMPERATURE'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__FAULT_TEMPERATURE = 2
};

/// Constant 'FAULT_BUS_VOLTAGE'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__FAULT_BUS_VOLTAGE = 3
};

/// Constant 'FAULT_BRIDGE_DRIVER'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__FAULT_BRIDGE_DRIVER = 4
};

/// Constant 'CONTROL_TYPE_NONE'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_NONE = 0
};

/// Constant 'CONTROL_TYPE_POSITION'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_POSITION = 1
};

/// Constant 'CONTROL_TYPE_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_EFFORT = 2
};

/// Constant 'CONTROL_TYPE_VELOCITY'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_VELOCITY = 3
};

/// Constant 'CONTROL_TYPE_POSITION_VELOCITY'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_POSITION_VELOCITY = 4
};

/// Constant 'CONTROL_TYPE_POSITION_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_POSITION_EFFORT = 5
};

/// Constant 'CONTROL_TYPE_VELOCITY_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_VELOCITY_EFFORT = 6
};

/// Constant 'CONTROL_TYPE_POSITION_VELOCITY_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__CONTROL_TYPE_POSITION_VELOCITY_EFFORT = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/StateRotaryServo in the package hrim_actuator_rotaryservo_msgs.
typedef struct hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo
{
  std_msgs__msg__Header header;
  double goal;
  double position;
  double error;
  double velocity;
  double effort;
  double load;
  bool moving;
  uint8_t fault;
  uint8_t control_type;
} hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo;

// Struct for a sequence of hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo.
typedef struct hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__Sequence
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__STRUCT_H_
