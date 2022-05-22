// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__STRUCT_H_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ControlVacuum in the package hrim_actuator_gripper_srvs.
typedef struct hrim_actuator_gripper_srvs__srv__ControlVacuum_Request
{
  float goal_percentage_suction;
} hrim_actuator_gripper_srvs__srv__ControlVacuum_Request;

// Struct for a sequence of hrim_actuator_gripper_srvs__srv__ControlVacuum_Request.
typedef struct hrim_actuator_gripper_srvs__srv__ControlVacuum_Request__Sequence
{
  hrim_actuator_gripper_srvs__srv__ControlVacuum_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_srvs__srv__ControlVacuum_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ControlVacuum in the package hrim_actuator_gripper_srvs.
typedef struct hrim_actuator_gripper_srvs__srv__ControlVacuum_Response
{
  bool goal_accepted;
} hrim_actuator_gripper_srvs__srv__ControlVacuum_Response;

// Struct for a sequence of hrim_actuator_gripper_srvs__srv__ControlVacuum_Response.
typedef struct hrim_actuator_gripper_srvs__srv__ControlVacuum_Response__Sequence
{
  hrim_actuator_gripper_srvs__srv__ControlVacuum_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_srvs__srv__ControlVacuum_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__STRUCT_H_
