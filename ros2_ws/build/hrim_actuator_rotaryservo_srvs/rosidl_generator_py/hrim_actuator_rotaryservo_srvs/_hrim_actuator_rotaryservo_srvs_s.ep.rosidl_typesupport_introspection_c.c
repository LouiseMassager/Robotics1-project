// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef hrim_actuator_rotaryservo_srvs__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef hrim_actuator_rotaryservo_srvs__module = {
  PyModuleDef_HEAD_INIT,
  "_hrim_actuator_rotaryservo_srvs_support",
  "_hrim_actuator_rotaryservo_srvs_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  hrim_actuator_rotaryservo_srvs__methods,
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
#include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__type_support.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__struct.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__functions.h"

static void * hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request__create();
}

static void hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request * ros_message = (hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request *)raw_ros_message;
  hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, OpenCloseBrake_Request);

int8_t
_register_msg_type__srv__open_close_brake__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__open_close_brake__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__open_close_brake__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__open_close_brake__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__open_close_brake__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, OpenCloseBrake_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__open_close_brake__request",
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
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__type_support.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/open_close_brake__functions.h"

static void * hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response__create();
}

static void hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response * ros_message = (hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response *)raw_ros_message;
  hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, OpenCloseBrake_Response);

int8_t
_register_msg_type__srv__open_close_brake__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__open_close_brake__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__open_close_brake__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__open_close_brake__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__open_close_brake__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__open_close_brake__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, OpenCloseBrake_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__open_close_brake__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_rotaryservo_srvs, srv, OpenCloseBrake)();

int8_t
_register_srv_type__srv__open_close_brake(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_rotaryservo_srvs, srv, OpenCloseBrake)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__open_close_brake",
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
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__type_support.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__functions.h"

static void * hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request__create();
}

static void hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request * ros_message = (hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request *)raw_ros_message;
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Request);

int8_t
_register_msg_type__srv__specs_rotary_servo__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__specs_rotary_servo__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__specs_rotary_servo__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__specs_rotary_servo__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__specs_rotary_servo__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__specs_rotary_servo__request",
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
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__type_support.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__functions.h"

static void * hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__create();
}

static void hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response * ros_message = (hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response *)raw_ros_message;
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Response);

int8_t
_register_msg_type__srv__specs_rotary_servo__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__specs_rotary_servo__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__specs_rotary_servo__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__specs_rotary_servo__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__specs_rotary_servo__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__specs_rotary_servo__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo)();

int8_t
_register_srv_type__srv__specs_rotary_servo(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_rotaryservo_srvs, srv, SpecsRotaryServo)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__specs_rotary_servo",
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
#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__type_support.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__struct.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__functions.h"

static void * hrim_actuator_rotaryservo_srvs__srv__stop__request__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_srvs__srv__Stop_Request__create();
}

static void hrim_actuator_rotaryservo_srvs__srv__stop__request__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_srvs__srv__Stop_Request * ros_message = (hrim_actuator_rotaryservo_srvs__srv__Stop_Request *)raw_ros_message;
  hrim_actuator_rotaryservo_srvs__srv__Stop_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_srvs__srv__stop__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__stop__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, Stop_Request);

int8_t
_register_msg_type__srv__stop__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__stop__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__stop__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__stop__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__stop__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, Stop_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__stop__request",
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
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__type_support.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__functions.h"

static void * hrim_actuator_rotaryservo_srvs__srv__stop__response__create_ros_message(void)
{
  return hrim_actuator_rotaryservo_srvs__srv__Stop_Response__create();
}

static void hrim_actuator_rotaryservo_srvs__srv__stop__response__destroy_ros_message(void * raw_ros_message)
{
  hrim_actuator_rotaryservo_srvs__srv__Stop_Response * ros_message = (hrim_actuator_rotaryservo_srvs__srv__Stop_Response *)raw_ros_message;
  hrim_actuator_rotaryservo_srvs__srv__Stop_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool hrim_actuator_rotaryservo_srvs__srv__stop__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__stop__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, Stop_Response);

int8_t
_register_msg_type__srv__stop__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__stop__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__stop__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__stop__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&hrim_actuator_rotaryservo_srvs__srv__stop__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__stop__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(hrim_actuator_rotaryservo_srvs, srv, Stop_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__stop__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_rotaryservo_srvs, srv, Stop)();

int8_t
_register_srv_type__srv__stop(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_rotaryservo_srvs, srv, Stop)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__stop",
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
PyInit_hrim_actuator_rotaryservo_srvs_s__rosidl_typesupport_introspection_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&hrim_actuator_rotaryservo_srvs__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__srv__open_close_brake__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__open_close_brake__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__open_close_brake(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__specs_rotary_servo__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__specs_rotary_servo__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__specs_rotary_servo(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__stop__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__stop__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__stop(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
