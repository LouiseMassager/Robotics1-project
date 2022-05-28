// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
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
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("hrim_actuator_rotaryservo_srvs.srv._specs_rotary_servo.SpecsRotaryServo_Request", full_classname_dest, 79) == 0);
  }
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpecsRotaryServo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_actuator_rotaryservo_srvs.srv._specs_rotary_servo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpecsRotaryServo_Request");
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
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/specs_rotary_servo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("hrim_actuator_rotaryservo_srvs.srv._specs_rotary_servo.SpecsRotaryServo_Response", full_classname_dest, 80) == 0);
  }
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response * ros_message = _ros_message;
  {  // control_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // range_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // precision
    PyObject * field = PyObject_GetAttrString(_pymsg, "precision");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->precision = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rated_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rated_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rated_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reachable_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "reachable_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reachable_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rated_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "rated_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rated_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reachable_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "reachable_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reachable_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_range_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_range_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_range_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_range_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_range_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_range_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_actuator_rotaryservo_srvs__srv__specs_rotary_servo__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpecsRotaryServo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_actuator_rotaryservo_srvs.srv._specs_rotary_servo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpecsRotaryServo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response * ros_message = (hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response *)raw_ros_message;
  {  // control_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // precision
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->precision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "precision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rated_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rated_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rated_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reachable_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reachable_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reachable_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rated_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rated_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rated_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reachable_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reachable_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reachable_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_range_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_range_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_range_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_range_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_range_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_range_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
