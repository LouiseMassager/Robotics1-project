// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hrim_actuator_gripper_srvs:srv/GoalGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__GOAL_GRIPPER__FUNCTIONS_H_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__GOAL_GRIPPER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.h"

/// Initialize srv/GoalGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request
 * )) before or use
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
bool
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__init(hrim_actuator_gripper_srvs__srv__GoalGripper_Request * msg);

/// Finalize srv/GoalGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__fini(hrim_actuator_gripper_srvs__srv__GoalGripper_Request * msg);

/// Create srv/GoalGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
hrim_actuator_gripper_srvs__srv__GoalGripper_Request *
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__create();

/// Destroy srv/GoalGripper message.
/**
 * It calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__destroy(hrim_actuator_gripper_srvs__srv__GoalGripper_Request * msg);


/// Initialize array of srv/GoalGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
bool
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence__init(hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence * array, size_t size);

/// Finalize array of srv/GoalGripper messages.
/**
 * It calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence__fini(hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence * array);

/// Create array of srv/GoalGripper messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence *
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence__create(size_t size);

/// Destroy array of srv/GoalGripper messages.
/**
 * It calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence__destroy(hrim_actuator_gripper_srvs__srv__GoalGripper_Request__Sequence * array);

/// Initialize srv/GoalGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response
 * )) before or use
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
bool
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__init(hrim_actuator_gripper_srvs__srv__GoalGripper_Response * msg);

/// Finalize srv/GoalGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__fini(hrim_actuator_gripper_srvs__srv__GoalGripper_Response * msg);

/// Create srv/GoalGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
hrim_actuator_gripper_srvs__srv__GoalGripper_Response *
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__create();

/// Destroy srv/GoalGripper message.
/**
 * It calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__destroy(hrim_actuator_gripper_srvs__srv__GoalGripper_Response * msg);


/// Initialize array of srv/GoalGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
bool
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence__init(hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence * array, size_t size);

/// Finalize array of srv/GoalGripper messages.
/**
 * It calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence__fini(hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence * array);

/// Create array of srv/GoalGripper messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence *
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence__create(size_t size);

/// Destroy array of srv/GoalGripper messages.
/**
 * It calls
 * hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_gripper_srvs
void
hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence__destroy(hrim_actuator_gripper_srvs__srv__GoalGripper_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__GOAL_GRIPPER__FUNCTIONS_H_
