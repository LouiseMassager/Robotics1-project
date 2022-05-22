// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_srvs:srv/SimulationURDF.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION_URDF__STRUCT_H_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION_URDF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SimulationURDF in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__SimulationURDF_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_generic_srvs__srv__SimulationURDF_Request;

// Struct for a sequence of hrim_generic_srvs__srv__SimulationURDF_Request.
typedef struct hrim_generic_srvs__srv__SimulationURDF_Request__Sequence
{
  hrim_generic_srvs__srv__SimulationURDF_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__SimulationURDF_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'urdf_model'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SimulationURDF in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__SimulationURDF_Response
{
  rosidl_runtime_c__String urdf_model;
} hrim_generic_srvs__srv__SimulationURDF_Response;

// Struct for a sequence of hrim_generic_srvs__srv__SimulationURDF_Response.
typedef struct hrim_generic_srvs__srv__SimulationURDF_Response__Sequence
{
  hrim_generic_srvs__srv__SimulationURDF_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__SimulationURDF_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION_URDF__STRUCT_H_
