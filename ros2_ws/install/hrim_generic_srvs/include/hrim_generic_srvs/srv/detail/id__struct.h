// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__ID__STRUCT_H_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ID in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__ID_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_generic_srvs__srv__ID_Request;

// Struct for a sequence of hrim_generic_srvs__srv__ID_Request.
typedef struct hrim_generic_srvs__srv__ID_Request__Sequence
{
  hrim_generic_srvs__srv__ID_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__ID_Request__Sequence;


// Constants defined in the message

/// Constant 'HRIM_COMM'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_COMM = 0
};

/// Constant 'HRIM_SENSOR'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_SENSOR = 1
};

/// Constant 'HRIM_ACTUATOR'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_ACTUATOR = 2
};

/// Constant 'HRIM_COGNITION'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_COGNITION = 3
};

/// Constant 'HRIM_UI'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_UI = 4
};

/// Constant 'HRIM_POWER'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_POWER = 5
};

/// Constant 'HRIM_COMPOSITE'.
enum
{
  hrim_generic_srvs__srv__ID_Response__HRIM_COMPOSITE = 6
};

// Include directives for member types
// Member 'device_name'
// Member 'hrim_version'
// Member 'hros_version'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ID in the package hrim_generic_srvs.
typedef struct hrim_generic_srvs__srv__ID_Response
{
  uint8_t device_kind_id;
  rosidl_runtime_c__String device_name;
  uint32_t vendor_id;
  uint32_t product_id;
  uint32_t instance_id;
  rosidl_runtime_c__String hrim_version;
  rosidl_runtime_c__String hros_version;
} hrim_generic_srvs__srv__ID_Response;

// Struct for a sequence of hrim_generic_srvs__srv__ID_Response.
typedef struct hrim_generic_srvs__srv__ID_Response__Sequence
{
  hrim_generic_srvs__srv__ID_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_srvs__srv__ID_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__ID__STRUCT_H_
