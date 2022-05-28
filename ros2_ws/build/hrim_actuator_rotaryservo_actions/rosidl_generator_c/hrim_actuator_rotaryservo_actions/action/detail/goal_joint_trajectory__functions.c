// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(msg);
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // error
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // desired
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->desired)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // actual
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->actual)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // error
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->error)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
  // desired
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->desired);
  // actual
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->actual);
  // error
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->error);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init(&msg->goal)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(&msg->goal);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init(&msg->result)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(&msg->result);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"

bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init(&msg->feedback)) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(&msg->feedback);
}

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__create()
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage));
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage *)calloc(size, sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(&array->data[i]);
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

hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array = (hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
