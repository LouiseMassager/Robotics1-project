// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_generic_srvs:srv/SpecsCommunication.idl
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
#include "hrim_generic_srvs/srv/detail/specs_communication__struct.h"
#include "hrim_generic_srvs/srv/detail/specs_communication__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_srvs__srv__specs_communication__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("hrim_generic_srvs.srv._specs_communication.SpecsCommunication_Request", full_classname_dest, 69) == 0);
  }
  hrim_generic_srvs__srv__SpecsCommunication_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_srvs__srv__specs_communication__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpecsCommunication_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_srvs.srv._specs_communication");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpecsCommunication_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/specs_communication__struct.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/specs_communication__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_srvs__srv__specs_communication__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("hrim_generic_srvs.srv._specs_communication.SpecsCommunication_Response", full_classname_dest, 70) == 0);
  }
  hrim_generic_srvs__srv__SpecsCommunication_Response * ros_message = _ros_message;
  {  // min_comm_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_comm_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_comm_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_comm_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_comm_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_comm_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_size_msgs
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_size_msgs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_size_msgs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_srvs__srv__specs_communication__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpecsCommunication_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_srvs.srv._specs_communication");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpecsCommunication_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_generic_srvs__srv__SpecsCommunication_Response * ros_message = (hrim_generic_srvs__srv__SpecsCommunication_Response *)raw_ros_message;
  {  // min_comm_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_comm_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_comm_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_comm_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_comm_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_comm_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_size_msgs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_size_msgs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_size_msgs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
