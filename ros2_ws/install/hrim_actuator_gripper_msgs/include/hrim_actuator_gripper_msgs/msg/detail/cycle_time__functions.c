// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_actuator_gripper_msgs:msg/CycleTime.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_msgs/msg/detail/cycle_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hrim_actuator_gripper_msgs__msg__CycleTime__init(hrim_actuator_gripper_msgs__msg__CycleTime * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hrim_actuator_gripper_msgs__msg__CycleTime__fini(msg);
    return false;
  }
  // cycle_time
  return true;
}

void
hrim_actuator_gripper_msgs__msg__CycleTime__fini(hrim_actuator_gripper_msgs__msg__CycleTime * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cycle_time
}

hrim_actuator_gripper_msgs__msg__CycleTime *
hrim_actuator_gripper_msgs__msg__CycleTime__create()
{
  hrim_actuator_gripper_msgs__msg__CycleTime * msg = (hrim_actuator_gripper_msgs__msg__CycleTime *)malloc(sizeof(hrim_actuator_gripper_msgs__msg__CycleTime));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_gripper_msgs__msg__CycleTime));
  bool success = hrim_actuator_gripper_msgs__msg__CycleTime__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_gripper_msgs__msg__CycleTime__destroy(hrim_actuator_gripper_msgs__msg__CycleTime * msg)
{
  if (msg) {
    hrim_actuator_gripper_msgs__msg__CycleTime__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_gripper_msgs__msg__CycleTime__Sequence__init(hrim_actuator_gripper_msgs__msg__CycleTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_gripper_msgs__msg__CycleTime * data = NULL;
  if (size) {
    data = (hrim_actuator_gripper_msgs__msg__CycleTime *)calloc(size, sizeof(hrim_actuator_gripper_msgs__msg__CycleTime));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_gripper_msgs__msg__CycleTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_gripper_msgs__msg__CycleTime__fini(&data[i - 1]);
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
hrim_actuator_gripper_msgs__msg__CycleTime__Sequence__fini(hrim_actuator_gripper_msgs__msg__CycleTime__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_gripper_msgs__msg__CycleTime__fini(&array->data[i]);
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

hrim_actuator_gripper_msgs__msg__CycleTime__Sequence *
hrim_actuator_gripper_msgs__msg__CycleTime__Sequence__create(size_t size)
{
  hrim_actuator_gripper_msgs__msg__CycleTime__Sequence * array = (hrim_actuator_gripper_msgs__msg__CycleTime__Sequence *)malloc(sizeof(hrim_actuator_gripper_msgs__msg__CycleTime__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_gripper_msgs__msg__CycleTime__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_gripper_msgs__msg__CycleTime__Sequence__destroy(hrim_actuator_gripper_msgs__msg__CycleTime__Sequence * array)
{
  if (array) {
    hrim_actuator_gripper_msgs__msg__CycleTime__Sequence__fini(array);
  }
  free(array);
}
