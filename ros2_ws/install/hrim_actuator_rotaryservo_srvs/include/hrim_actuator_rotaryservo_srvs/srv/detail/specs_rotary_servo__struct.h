// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__STRUCT_H_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SpecsRotaryServo in the package hrim_actuator_rotaryservo_srvs.
typedef struct hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request;

// Struct for a sequence of hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request.
typedef struct hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request__Sequence
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request__Sequence;


// Constants defined in the message

/// Constant 'CONTROL_TYPE_NONE'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_NONE = 0
};

/// Constant 'CONTROL_TYPE_POSITION'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_POSITION = 1
};

/// Constant 'CONTROL_TYPE_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_EFFORT = 2
};

/// Constant 'CONTROL_TYPE_VELOCITY'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_VELOCITY = 3
};

/// Constant 'CONTROL_TYPE_POSITION_VELOCITY'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_POSITION_VELOCITY = 4
};

/// Constant 'CONTROL_TYPE_POSITION_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_POSITION_EFFORT = 5
};

/// Constant 'CONTROL_TYPE_VELOCITY_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_VELOCITY_EFFORT = 6
};

/// Constant 'CONTROL_TYPE_POSITION_VELOCITY_EFFORT'.
enum
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__CONTROL_TYPE_POSITION_VELOCITY_EFFORT = 7
};

// Struct defined in srv/SpecsRotaryServo in the package hrim_actuator_rotaryservo_srvs.
typedef struct hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response
{
  uint8_t control_type;
  double range_min;
  double range_max;
  double precision;
  double rated_speed;
  double reachable_speed;
  double rated_torque;
  double reachable_torque;
  double temperature_range_min;
  double temperature_range_max;
} hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response;

// Struct for a sequence of hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response.
typedef struct hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__Sequence
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__STRUCT_H_
