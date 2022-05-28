// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_generic_msgs:msg/Power.idl
// generated code does not contain a copyright notice
#include "hrim_generic_msgs/msg/detail/power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hrim_generic_msgs__msg__Power__init(hrim_generic_msgs__msg__Power * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hrim_generic_msgs__msg__Power__fini(msg);
    return false;
  }
  // voltage
  // current_consumption
  // current_surplus
  // power_consumption
  // power_surplus
  return true;
}

void
hrim_generic_msgs__msg__Power__fini(hrim_generic_msgs__msg__Power * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // voltage
  // current_consumption
  // current_surplus
  // power_consumption
  // power_surplus
}

hrim_generic_msgs__msg__Power *
hrim_generic_msgs__msg__Power__create()
{
  hrim_generic_msgs__msg__Power * msg = (hrim_generic_msgs__msg__Power *)malloc(sizeof(hrim_generic_msgs__msg__Power));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_generic_msgs__msg__Power));
  bool success = hrim_generic_msgs__msg__Power__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_generic_msgs__msg__Power__destroy(hrim_generic_msgs__msg__Power * msg)
{
  if (msg) {
    hrim_generic_msgs__msg__Power__fini(msg);
  }
  free(msg);
}


bool
hrim_generic_msgs__msg__Power__Sequence__init(hrim_generic_msgs__msg__Power__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_generic_msgs__msg__Power * data = NULL;
  if (size) {
    data = (hrim_generic_msgs__msg__Power *)calloc(size, sizeof(hrim_generic_msgs__msg__Power));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_generic_msgs__msg__Power__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_generic_msgs__msg__Power__fini(&data[i - 1]);
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
hrim_generic_msgs__msg__Power__Sequence__fini(hrim_generic_msgs__msg__Power__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_generic_msgs__msg__Power__fini(&array->data[i]);
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

hrim_generic_msgs__msg__Power__Sequence *
hrim_generic_msgs__msg__Power__Sequence__create(size_t size)
{
  hrim_generic_msgs__msg__Power__Sequence * array = (hrim_generic_msgs__msg__Power__Sequence *)malloc(sizeof(hrim_generic_msgs__msg__Power__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_generic_msgs__msg__Power__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_generic_msgs__msg__Power__Sequence__destroy(hrim_generic_msgs__msg__Power__Sequence * array)
{
  if (array) {
    hrim_generic_msgs__msg__Power__Sequence__fini(array);
  }
  free(array);
}
