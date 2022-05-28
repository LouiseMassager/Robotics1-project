// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_rotaryservo_msgs/msg/detail/temperature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hrim_actuator_rotaryservo_msgs__msg__Temperature__init(hrim_actuator_rotaryservo_msgs__msg__Temperature * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hrim_actuator_rotaryservo_msgs__msg__Temperature__fini(msg);
    return false;
  }
  // temperature
  // temperature_error
  return true;
}

void
hrim_actuator_rotaryservo_msgs__msg__Temperature__fini(hrim_actuator_rotaryservo_msgs__msg__Temperature * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // temperature
  // temperature_error
}

hrim_actuator_rotaryservo_msgs__msg__Temperature *
hrim_actuator_rotaryservo_msgs__msg__Temperature__create()
{
  hrim_actuator_rotaryservo_msgs__msg__Temperature * msg = (hrim_actuator_rotaryservo_msgs__msg__Temperature *)malloc(sizeof(hrim_actuator_rotaryservo_msgs__msg__Temperature));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_msgs__msg__Temperature));
  bool success = hrim_actuator_rotaryservo_msgs__msg__Temperature__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_msgs__msg__Temperature__destroy(hrim_actuator_rotaryservo_msgs__msg__Temperature * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_msgs__msg__Temperature__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence__init(hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_msgs__msg__Temperature * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_msgs__msg__Temperature *)calloc(size, sizeof(hrim_actuator_rotaryservo_msgs__msg__Temperature));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_msgs__msg__Temperature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_msgs__msg__Temperature__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence__fini(hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_msgs__msg__Temperature__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence *
hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence * array = (hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence__destroy(hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_msgs__msg__Temperature__Sequence__fini(array);
  }
  free(array);
}
