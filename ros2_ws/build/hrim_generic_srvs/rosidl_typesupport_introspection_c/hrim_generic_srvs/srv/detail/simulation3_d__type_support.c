// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_generic_srvs/srv/detail/simulation3_d__rosidl_typesupport_introspection_c.h"
#include "hrim_generic_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_generic_srvs/srv/detail/simulation3_d__functions.h"
#include "hrim_generic_srvs/srv/detail/simulation3_d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_generic_srvs__srv__Simulation3D_Request__init(message_memory);
}

void Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_fini_function(void * message_memory)
{
  hrim_generic_srvs__srv__Simulation3D_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_generic_srvs__srv__Simulation3D_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_members = {
  "hrim_generic_srvs__srv",  // message namespace
  "Simulation3D_Request",  // message name
  1,  // number of fields
  sizeof(hrim_generic_srvs__srv__Simulation3D_Request),
  Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_member_array,  // message members
  Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_type_support_handle = {
  0,
  &Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_generic_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D_Request)() {
  if (!Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_type_support_handle.typesupport_identifier) {
    Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Simulation3D_Request__rosidl_typesupport_introspection_c__Simulation3D_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_generic_srvs/srv/detail/simulation3_d__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_generic_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/simulation3_d__functions.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/simulation3_d__struct.h"


// Include directives for member types
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `model`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_generic_srvs__srv__Simulation3D_Response__init(message_memory);
}

void Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_fini_function(void * message_memory)
{
  hrim_generic_srvs__srv__Simulation3D_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_member_array[2] = {
  {
    "model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_generic_srvs__srv__Simulation3D_Response, model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_generic_srvs__srv__Simulation3D_Response, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_members = {
  "hrim_generic_srvs__srv",  // message namespace
  "Simulation3D_Response",  // message name
  2,  // number of fields
  sizeof(hrim_generic_srvs__srv__Simulation3D_Response),
  Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_member_array,  // message members
  Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_type_support_handle = {
  0,
  &Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_generic_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D_Response)() {
  if (!Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_type_support_handle.typesupport_identifier) {
    Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Simulation3D_Response__rosidl_typesupport_introspection_c__Simulation3D_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrim_generic_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/simulation3_d__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_members = {
  "hrim_generic_srvs__srv",  // service namespace
  "Simulation3D",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_Request_message_type_support_handle,
  NULL  // response message
  // hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_type_support_handle = {
  0,
  &hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_generic_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D)() {
  if (!hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_type_support_handle.typesupport_identifier) {
    hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_generic_srvs, srv, Simulation3D_Response)()->data;
  }

  return &hrim_generic_srvs__srv__detail__simulation3_d__rosidl_typesupport_introspection_c__Simulation3D_service_type_support_handle;
}
