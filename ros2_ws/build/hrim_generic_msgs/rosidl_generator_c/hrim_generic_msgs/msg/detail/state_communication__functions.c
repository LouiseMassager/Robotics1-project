// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_generic_msgs:msg/StateCommunication.idl
// generated code does not contain a copyright notice
#include "hrim_generic_msgs/msg/detail/state_communication__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hrim_generic_msgs__msg__StateCommunication__init(hrim_generic_msgs__msg__StateCommunication * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hrim_generic_msgs__msg__StateCommunication__fini(msg);
    return false;
  }
  // comm_rate
  // size_msgs
  return true;
}

void
hrim_generic_msgs__msg__StateCommunication__fini(hrim_generic_msgs__msg__StateCommunication * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // comm_rate
  // size_msgs
}

hrim_generic_msgs__msg__StateCommunication *
hrim_generic_msgs__msg__StateCommunication__create()
{
  hrim_generic_msgs__msg__StateCommunication * msg = (hrim_generic_msgs__msg__StateCommunication *)malloc(sizeof(hrim_generic_msgs__msg__StateCommunication));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_generic_msgs__msg__StateCommunication));
  bool success = hrim_generic_msgs__msg__StateCommunication__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_generic_msgs__msg__StateCommunication__destroy(hrim_generic_msgs__msg__StateCommunication * msg)
{
  if (msg) {
    hrim_generic_msgs__msg__StateCommunication__fini(msg);
  }
  free(msg);
}


bool
hrim_generic_msgs__msg__StateCommunication__Sequence__init(hrim_generic_msgs__msg__StateCommunication__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_generic_msgs__msg__StateCommunication * data = NULL;
  if (size) {
    data = (hrim_generic_msgs__msg__StateCommunication *)calloc(size, sizeof(hrim_generic_msgs__msg__StateCommunication));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_generic_msgs__msg__StateCommunication__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_generic_msgs__msg__StateCommunication__fini(&data[i - 1]);
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
hrim_generic_msgs__msg__StateCommunication__Sequence__fini(hrim_generic_msgs__msg__StateCommunication__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_generic_msgs__msg__StateCommunication__fini(&array->data[i]);
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

hrim_generic_msgs__msg__StateCommunication__Sequence *
hrim_generic_msgs__msg__StateCommunication__Sequence__create(size_t size)
{
  hrim_generic_msgs__msg__StateCommunication__Sequence * array = (hrim_generic_msgs__msg__StateCommunication__Sequence *)malloc(sizeof(hrim_generic_msgs__msg__StateCommunication__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_generic_msgs__msg__StateCommunication__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_generic_msgs__msg__StateCommunication__Sequence__destroy(hrim_generic_msgs__msg__StateCommunication__Sequence * array)
{
  if (array) {
    hrim_generic_msgs__msg__StateCommunication__Sequence__fini(array);
  }
  free(array);
}
