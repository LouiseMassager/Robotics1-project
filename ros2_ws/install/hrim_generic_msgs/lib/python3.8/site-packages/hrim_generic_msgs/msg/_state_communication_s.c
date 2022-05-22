// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_generic_msgs:msg/StateCommunication.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hrim_generic_msgs/msg/detail/state_communication__struct.h"
#include "hrim_generic_msgs/msg/detail/state_communication__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_msgs__msg__state_communication__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hrim_generic_msgs.msg._state_communication.StateCommunication", full_classname_dest, 61) == 0);
  }
  hrim_generic_msgs__msg__StateCommunication * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // comm_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "comm_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->comm_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // size_msgs
    PyObject * field = PyObject_GetAttrString(_pymsg, "size_msgs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->size_msgs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_msgs__msg__state_communication__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateCommunication */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_msgs.msg._state_communication");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateCommunication");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_generic_msgs__msg__StateCommunication * ros_message = (hrim_generic_msgs__msg__StateCommunication *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comm_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->comm_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comm_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size_msgs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->size_msgs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "size_msgs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
