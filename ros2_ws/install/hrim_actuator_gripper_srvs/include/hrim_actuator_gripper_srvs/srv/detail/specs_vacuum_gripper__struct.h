// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsVacuumGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__STRUCT_H_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SpecsVacuumGripper in the package hrim_actuator_gripper_srvs.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request;

// Struct for a sequence of hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request__Sequence
{
  hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SpecsVacuumGripper in the package hrim_actuator_gripper_srvs.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response
{
  float cycle_time;
  float max_force;
  float max_payload;
} hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response;

// Struct for a sequence of hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response__Sequence
{
  hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__STRUCT_H_
