// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice
#include "hrim_generic_srvs/srv/detail/id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
hrim_generic_srvs__srv__ID_Request__init(hrim_generic_srvs__srv__ID_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hrim_generic_srvs__srv__ID_Request__fini(hrim_generic_srvs__srv__ID_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

hrim_generic_srvs__srv__ID_Request *
hrim_generic_srvs__srv__ID_Request__create()
{
  hrim_generic_srvs__srv__ID_Request * msg = (hrim_generic_srvs__srv__ID_Request *)malloc(sizeof(hrim_generic_srvs__srv__ID_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_generic_srvs__srv__ID_Request));
  bool success = hrim_generic_srvs__srv__ID_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_generic_srvs__srv__ID_Request__destroy(hrim_generic_srvs__srv__ID_Request * msg)
{
  if (msg) {
    hrim_generic_srvs__srv__ID_Request__fini(msg);
  }
  free(msg);
}


bool
hrim_generic_srvs__srv__ID_Request__Sequence__init(hrim_generic_srvs__srv__ID_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_generic_srvs__srv__ID_Request * data = NULL;
  if (size) {
    data = (hrim_generic_srvs__srv__ID_Request *)calloc(size, sizeof(hrim_generic_srvs__srv__ID_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_generic_srvs__srv__ID_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_generic_srvs__srv__ID_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hrim_generic_srvs__srv__ID_Request__Sequence__fini(hrim_generic_srvs__srv__ID_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_generic_srvs__srv__ID_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hrim_generic_srvs__srv__ID_Request__Sequence *
hrim_generic_srvs__srv__ID_Request__Sequence__create(size_t size)
{
  hrim_generic_srvs__srv__ID_Request__Sequence * array = (hrim_generic_srvs__srv__ID_Request__Sequence *)malloc(sizeof(hrim_generic_srvs__srv__ID_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_generic_srvs__srv__ID_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_generic_srvs__srv__ID_Request__Sequence__destroy(hrim_generic_srvs__srv__ID_Request__Sequence * array)
{
  if (array) {
    hrim_generic_srvs__srv__ID_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `device_name`
// Member `hrim_version`
// Member `hros_version`
#include "rosidl_runtime_c/string_functions.h"

bool
hrim_generic_srvs__srv__ID_Response__init(hrim_generic_srvs__srv__ID_Response * msg)
{
  if (!msg) {
    return false;
  }
  // device_kind_id
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    hrim_generic_srvs__srv__ID_Response__fini(msg);
    return false;
  }
  // vendor_id
  // product_id
  // instance_id
  // hrim_version
  if (!rosidl_runtime_c__String__init(&msg->hrim_version)) {
    hrim_generic_srvs__srv__ID_Response__fini(msg);
    return false;
  }
  // hros_version
  if (!rosidl_runtime_c__String__init(&msg->hros_version)) {
    hrim_generic_srvs__srv__ID_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrim_generic_srvs__srv__ID_Response__fini(hrim_generic_srvs__srv__ID_Response * msg)
{
  if (!msg) {
    return;
  }
  // device_kind_id
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // vendor_id
  // product_id
  // instance_id
  // hrim_version
  rosidl_runtime_c__String__fini(&msg->hrim_version);
  // hros_version
  rosidl_runtime_c__String__fini(&msg->hros_version);
}

hrim_generic_srvs__srv__ID_Response *
hrim_generic_srvs__srv__ID_Response__create()
{
  hrim_generic_srvs__srv__ID_Response * msg = (hrim_generic_srvs__srv__ID_Response *)malloc(sizeof(hrim_generic_srvs__srv__ID_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_generic_srvs__srv__ID_Response));
  bool success = hrim_generic_srvs__srv__ID_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_generic_srvs__srv__ID_Response__destroy(hrim_generic_srvs__srv__ID_Response * msg)
{
  if (msg) {
    hrim_generic_srvs__srv__ID_Response__fini(msg);
  }
  free(msg);
}


bool
hrim_generic_srvs__srv__ID_Response__Sequence__init(hrim_generic_srvs__srv__ID_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_generic_srvs__srv__ID_Response * data = NULL;
  if (size) {
    data = (hrim_generic_srvs__srv__ID_Response *)calloc(size, sizeof(hrim_generic_srvs__srv__ID_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_generic_srvs__srv__ID_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_generic_srvs__srv__ID_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hrim_generic_srvs__srv__ID_Response__Sequence__fini(hrim_generic_srvs__srv__ID_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_generic_srvs__srv__ID_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hrim_generic_srvs__srv__ID_Response__Sequence *
hrim_generic_srvs__srv__ID_Response__Sequence__create(size_t size)
{
  hrim_generic_srvs__srv__ID_Response__Sequence * array = (hrim_generic_srvs__srv__ID_Response__Sequence *)malloc(sizeof(hrim_generic_srvs__srv__ID_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_generic_srvs__srv__ID_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_generic_srvs__srv__ID_Response__Sequence__destroy(hrim_generic_srvs__srv__ID_Response__Sequence * array)
{
  if (array) {
    hrim_generic_srvs__srv__ID_Response__Sequence__fini(array);
  }
  free(array);
}
