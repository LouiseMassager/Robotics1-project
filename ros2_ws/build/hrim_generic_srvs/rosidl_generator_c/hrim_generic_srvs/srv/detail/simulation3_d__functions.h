// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__FUNCTIONS_H_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hrim_generic_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "hrim_generic_srvs/srv/detail/simulation3_d__struct.h"

/// Initialize srv/Simulation3D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_generic_srvs__srv__Simulation3D_Request
 * )) before or use
 * hrim_generic_srvs__srv__Simulation3D_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
bool
hrim_generic_srvs__srv__Simulation3D_Request__init(hrim_generic_srvs__srv__Simulation3D_Request * msg);

/// Finalize srv/Simulation3D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Request__fini(hrim_generic_srvs__srv__Simulation3D_Request * msg);

/// Create srv/Simulation3D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_generic_srvs__srv__Simulation3D_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
hrim_generic_srvs__srv__Simulation3D_Request *
hrim_generic_srvs__srv__Simulation3D_Request__create();

/// Destroy srv/Simulation3D message.
/**
 * It calls
 * hrim_generic_srvs__srv__Simulation3D_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Request__destroy(hrim_generic_srvs__srv__Simulation3D_Request * msg);


/// Initialize array of srv/Simulation3D messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_generic_srvs__srv__Simulation3D_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
bool
hrim_generic_srvs__srv__Simulation3D_Request__Sequence__init(hrim_generic_srvs__srv__Simulation3D_Request__Sequence * array, size_t size);

/// Finalize array of srv/Simulation3D messages.
/**
 * It calls
 * hrim_generic_srvs__srv__Simulation3D_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Request__Sequence__fini(hrim_generic_srvs__srv__Simulation3D_Request__Sequence * array);

/// Create array of srv/Simulation3D messages.
/**
 * It allocates the memory for the array and calls
 * hrim_generic_srvs__srv__Simulation3D_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
hrim_generic_srvs__srv__Simulation3D_Request__Sequence *
hrim_generic_srvs__srv__Simulation3D_Request__Sequence__create(size_t size);

/// Destroy array of srv/Simulation3D messages.
/**
 * It calls
 * hrim_generic_srvs__srv__Simulation3D_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Request__Sequence__destroy(hrim_generic_srvs__srv__Simulation3D_Request__Sequence * array);

/// Initialize srv/Simulation3D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_generic_srvs__srv__Simulation3D_Response
 * )) before or use
 * hrim_generic_srvs__srv__Simulation3D_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
bool
hrim_generic_srvs__srv__Simulation3D_Response__init(hrim_generic_srvs__srv__Simulation3D_Response * msg);

/// Finalize srv/Simulation3D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Response__fini(hrim_generic_srvs__srv__Simulation3D_Response * msg);

/// Create srv/Simulation3D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_generic_srvs__srv__Simulation3D_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
hrim_generic_srvs__srv__Simulation3D_Response *
hrim_generic_srvs__srv__Simulation3D_Response__create();

/// Destroy srv/Simulation3D message.
/**
 * It calls
 * hrim_generic_srvs__srv__Simulation3D_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Response__destroy(hrim_generic_srvs__srv__Simulation3D_Response * msg);


/// Initialize array of srv/Simulation3D messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_generic_srvs__srv__Simulation3D_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
bool
hrim_generic_srvs__srv__Simulation3D_Response__Sequence__init(hrim_generic_srvs__srv__Simulation3D_Response__Sequence * array, size_t size);

/// Finalize array of srv/Simulation3D messages.
/**
 * It calls
 * hrim_generic_srvs__srv__Simulation3D_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Response__Sequence__fini(hrim_generic_srvs__srv__Simulation3D_Response__Sequence * array);

/// Create array of srv/Simulation3D messages.
/**
 * It allocates the memory for the array and calls
 * hrim_generic_srvs__srv__Simulation3D_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
hrim_generic_srvs__srv__Simulation3D_Response__Sequence *
hrim_generic_srvs__srv__Simulation3D_Response__Sequence__create(size_t size);

/// Destroy array of srv/Simulation3D messages.
/**
 * It calls
 * hrim_generic_srvs__srv__Simulation3D_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_generic_srvs
void
hrim_generic_srvs__srv__Simulation3D_Response__Sequence__destroy(hrim_generic_srvs__srv__Simulation3D_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__FUNCTIONS_H_
