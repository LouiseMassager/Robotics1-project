// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_rotaryservo_srvs:srv/OpenCloseBrake.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__STRUCT_H_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/OpenCloseBrake in the package hrim_actuator_rotaryservo_srvs.
typedef struct hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request
{
  bool open;
} hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request;

// Struct for a sequence of hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request.
typedef struct hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request__Sequence
{
  hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/OpenCloseBrake in the package hrim_actuator_rotaryservo_srvs.
typedef struct hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response
{
  bool success;
  rosidl_runtime_c__String message;
} hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response;

// Struct for a sequence of hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response.
typedef struct hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response__Sequence
{
  hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__STRUCT_H_
