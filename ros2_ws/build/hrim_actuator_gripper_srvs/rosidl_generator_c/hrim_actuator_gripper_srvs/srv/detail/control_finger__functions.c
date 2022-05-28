// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__init(hrim_actuator_gripper_srvs__srv__ControlFinger_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_linearposition
  // goal_angularposition
  // goal_effort
  // goal_velocity
  // goal_acceleration
  return true;
}

void
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__fini(hrim_actuator_gripper_srvs__srv__ControlFinger_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_linearposition
  // goal_angularposition
  // goal_effort
  // goal_velocity
  // goal_acceleration
}

hrim_actuator_gripper_srvs__srv__ControlFinger_Request *
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__create()
{
  hrim_actuator_gripper_srvs__srv__ControlFinger_Request * msg = (hrim_actuator_gripper_srvs__srv__ControlFinger_Request *)malloc(sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Request));
  bool success = hrim_actuator_gripper_srvs__srv__ControlFinger_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__destroy(hrim_actuator_gripper_srvs__srv__ControlFinger_Request * msg)
{
  if (msg) {
    hrim_actuator_gripper_srvs__srv__ControlFinger_Request__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence__init(hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_gripper_srvs__srv__ControlFinger_Request * data = NULL;
  if (size) {
    data = (hrim_actuator_gripper_srvs__srv__ControlFinger_Request *)calloc(size, sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_gripper_srvs__srv__ControlFinger_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_gripper_srvs__srv__ControlFinger_Request__fini(&data[i - 1]);
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
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence__fini(hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_gripper_srvs__srv__ControlFinger_Request__fini(&array->data[i]);
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

hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence *
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence__create(size_t size)
{
  hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence * array = (hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence *)malloc(sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence__destroy(hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence * array)
{
  if (array) {
    hrim_actuator_gripper_srvs__srv__ControlFinger_Request__Sequence__fini(array);
  }
  free(array);
}


bool
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__init(hrim_actuator_gripper_srvs__srv__ControlFinger_Response * msg)
{
  if (!msg) {
    return false;
  }
  // goal_accepted
  return true;
}

void
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__fini(hrim_actuator_gripper_srvs__srv__ControlFinger_Response * msg)
{
  if (!msg) {
    return;
  }
  // goal_accepted
}

hrim_actuator_gripper_srvs__srv__ControlFinger_Response *
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__create()
{
  hrim_actuator_gripper_srvs__srv__ControlFinger_Response * msg = (hrim_actuator_gripper_srvs__srv__ControlFinger_Response *)malloc(sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Response));
  bool success = hrim_actuator_gripper_srvs__srv__ControlFinger_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__destroy(hrim_actuator_gripper_srvs__srv__ControlFinger_Response * msg)
{
  if (msg) {
    hrim_actuator_gripper_srvs__srv__ControlFinger_Response__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence__init(hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_gripper_srvs__srv__ControlFinger_Response * data = NULL;
  if (size) {
    data = (hrim_actuator_gripper_srvs__srv__ControlFinger_Response *)calloc(size, sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_gripper_srvs__srv__ControlFinger_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_gripper_srvs__srv__ControlFinger_Response__fini(&data[i - 1]);
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
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence__fini(hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_gripper_srvs__srv__ControlFinger_Response__fini(&array->data[i]);
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

hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence *
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence__create(size_t size)
{
  hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence * array = (hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence *)malloc(sizeof(hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence__destroy(hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence * array)
{
  if (array) {
    hrim_actuator_gripper_srvs__srv__ControlFinger_Response__Sequence__fini(array);
  }
  free(array);
}
