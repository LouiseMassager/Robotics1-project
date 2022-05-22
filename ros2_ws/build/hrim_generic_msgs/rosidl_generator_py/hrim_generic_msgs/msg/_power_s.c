// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_generic_msgs:msg/Power.idl
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
#include "hrim_generic_msgs/msg/detail/power__struct.h"
#include "hrim_generic_msgs/msg/detail/power__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_msgs__msg__power__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("hrim_generic_msgs.msg._power.Power", full_classname_dest, 34) == 0);
  }
  hrim_generic_msgs__msg__Power * ros_message = _ros_message;
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
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_consumption
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_consumption");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_consumption = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_surplus
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_surplus");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_surplus = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_consumption
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_consumption");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_consumption = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_surplus
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_surplus");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_surplus = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_msgs__msg__power__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Power */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_msgs.msg._power");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Power");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_generic_msgs__msg__Power * ros_message = (hrim_generic_msgs__msg__Power *)raw_ros_message;
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
  {  // voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_consumption
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_consumption);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_consumption", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_surplus
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_surplus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_surplus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_consumption
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_consumption);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_consumption", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_surplus
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_surplus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_surplus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
