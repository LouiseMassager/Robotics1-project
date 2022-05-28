// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsMagneticGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__STRUCT_H_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SpecsMagneticGripper in the package hrim_actuator_gripper_srvs.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Request
{
  uint8_t structure_needs_at_least_one_member;
} hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Request;

// Struct for a sequence of hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Request.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Request__Sequence
{
  hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SpecsMagneticGripper in the package hrim_actuator_gripper_srvs.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Response
{
  float magnetic_force;
  float max_payload;
} hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Response;

// Struct for a sequence of hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Response.
typedef struct hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Response__Sequence
{
  hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_gripper_srvs__srv__SpecsMagneticGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_MAGNETIC_GRIPPER__STRUCT_H_
