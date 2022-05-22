// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_srvs:srv/SpecsCommunication.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__STRUCT_H_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SpecsCommunication in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__SpecsCommunication_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_generic_srvs__srv__SpecsCommunication_Request;

// Struct for a sequence of hrim_generic_srvs__srv__SpecsCommunication_Request.
typedef struct hrim_generic_srvs__srv__SpecsCommunication_Request__Sequence
{
  hrim_generic_srvs__srv__SpecsCommunication_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__SpecsCommunication_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SpecsCommunication in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__SpecsCommunication_Response
{
  double min_comm_rate;
  double max_comm_rate;
  double max_size_msgs;
} hrim_generic_srvs__srv__SpecsCommunication_Response;

// Struct for a sequence of hrim_generic_srvs__srv__SpecsCommunication_Response.
typedef struct hrim_generic_srvs__srv__SpecsCommunication_Response__Sequence
{
  hrim_generic_srvs__srv__SpecsCommunication_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__SpecsCommunication_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__STRUCT_H_
