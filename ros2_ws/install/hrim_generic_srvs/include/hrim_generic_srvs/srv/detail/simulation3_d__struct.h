// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__STRUCT_H_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Simulation3D in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__Simulation3D_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_generic_srvs__srv__Simulation3D_Request;

// Struct for a sequence of hrim_generic_srvs__srv__Simulation3D_Request.
typedef struct hrim_generic_srvs__srv__Simulation3D_Request__Sequence
{
  hrim_generic_srvs__srv__Simulation3D_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__Simulation3D_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'model_name'
#include "rosidl_runtime_c/string.h"
// Member 'model'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/Simulation3D in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__Simulation3D_Response
{
  rosidl_runtime_c__String model_name;
  rosidl_runtime_c__octet__Sequence model;
} hrim_generic_srvs__srv__Simulation3D_Response;

// Struct for a sequence of hrim_generic_srvs__srv__Simulation3D_Response.
typedef struct hrim_generic_srvs__srv__Simulation3D_Response__Sequence
{
  hrim_generic_srvs__srv__Simulation3D_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__Simulation3D_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__STRUCT_H_
