// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef hrim_actuator_rotaryservo_msgs__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef hrim_actuator_rotaryservo_msgs__module = {
  PyModuleDef_HEAD_INIT,
  "_hrim_actuator_rotaryservo_msgs_support",
  "_hrim_actuator_rotaryservo_msgs_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  hrim_actuator_rotaryservo_msgs__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_angular_acceleration__type_support.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_angular_acceleration__struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_angular_acceleration__functions.h"

static void * hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration__create();
}

static void hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration * ros_message = (hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration *)raw_ros_message;
  hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, GoalAngularAcceleration);

int8_t
_register_msg_type__msg__goal_angular_acceleration(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__goal_angular_acceleration",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__goal_angular_acceleration",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__goal_angular_acceleration",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_angular_acceleration__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__goal_angular_acceleration",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, GoalAngularAcceleration),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__goal_angular_acceleration",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_rotary_servo__type_support.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_rotary_servo__struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_rotary_servo__functions.h"

static void * hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__create();
}

static void hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo * ros_message = (hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo *)raw_ros_message;
  hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, GoalRotaryServo);

int8_t
_register_msg_type__msg__goal_rotary_servo(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__goal_rotary_servo",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__goal_rotary_servo",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__goal_rotary_servo",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__goal_rotary_servo__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__goal_rotary_servo",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, GoalRotaryServo),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__goal_rotary_servo",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__type_support.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__functions.h"

static void * hrim_actuator_rotaryservo_msgs__msg__reconfiguration__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_msgs__msg__Reconfiguration__create();
}

static void hrim_actuator_rotaryservo_msgs__msg__reconfiguration__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_msgs__msg__Reconfiguration * ros_message = (hrim_actuator_rotaryservo_msgs__msg__Reconfiguration *)raw_ros_message;
  hrim_actuator_rotaryservo_msgs__msg__Reconfiguration__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_msgs__msg__reconfiguration__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_msgs__msg__reconfiguration__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, Reconfiguration);

int8_t
_register_msg_type__msg__reconfiguration(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__reconfiguration__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__reconfiguration",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__reconfiguration__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__reconfiguration",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__reconfiguration__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__reconfiguration",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__reconfiguration__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__reconfiguration",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, Reconfiguration),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__reconfiguration",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__type_support.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/state_rotary_servo__functions.h"

static void * hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__create();
}

static void hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo * ros_message = (hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo *)raw_ros_message;
  hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, StateRotaryServo);

int8_t
_register_msg_type__msg__state_rotary_servo(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__state_rotary_servo",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__state_rotary_servo",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__state_rotary_servo",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__state_rotary_servo__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__state_rotary_servo",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, StateRotaryServo),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__state_rotary_servo",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/temperature__type_support.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/temperature__struct.h"
#include "hrim_actuator_rotaryservo_msgs/msg/detail/temperature__functions.h"

static void * hrim_actuator_rotaryservo_msgs__msg__temperature__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_msgs__msg__Temperature__create();
}

static void hrim_actuator_rotaryservo_msgs__msg__temperature__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_msgs__msg__Temperature * ros_message = (hrim_actuator_rotaryservo_msgs__msg__Temperature *)raw_ros_message;
  hrim_actuator_rotaryservo_msgs__msg__Temperature__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_msgs__msg__temperature__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_msgs__msg__temperature__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, Temperature);

int8_t
_register_msg_type__msg__temperature(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__temperature__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__temperature",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__temperature__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__temperature",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__temperature__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__temperature",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_msgs__msg__temperature__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__temperature",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_msgs, msg, Temperature),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__temperature",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_hrim_actuator_rotaryservo_msgs_s__rosidl_typesupport_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&hrim_actuator_rotaryservo_msgs__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__goal_angular_acceleration(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__goal_rotary_servo(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__reconfiguration(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__state_rotary_servo(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__temperature(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
