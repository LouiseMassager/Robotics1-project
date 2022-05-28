// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsFingerGripper.idl
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
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__struct.h"
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_actuator_gripper_srvs__srv__specs_finger_gripper__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("hrim_actuator_gripper_srvs.srv._specs_finger_gripper.SpecsFingerGripper_Request", full_classname_dest, 79) == 0);
  }
  hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_actuator_gripper_srvs__srv__specs_finger_gripper__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpecsFingerGripper_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_actuator_gripper_srvs.srv._specs_finger_gripper");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpecsFingerGripper_Request");
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
// #include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_actuator_gripper_srvs__srv__specs_finger_gripper__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("hrim_actuator_gripper_srvs.srv._specs_finger_gripper.SpecsFingerGripper_Response", full_classname_dest, 80) == 0);
  }
  hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response * ros_message = _ros_message;
  {  // min_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_force");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_force = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_force");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_force = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_payload
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_payload");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_payload = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // repeatability
    PyObject * field = PyObject_GetAttrString(_pymsg, "repeatability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->repeatability = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_actuator_gripper_srvs__srv__specs_finger_gripper__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpecsFingerGripper_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_actuator_gripper_srvs.srv._specs_finger_gripper");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpecsFingerGripper_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response * ros_message = (hrim_actuator_gripper_srvs__srv__SpecsFingerGripper_Response *)raw_ros_message;
  {  // min_force
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_force
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_payload
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_payload);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_payload", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // repeatability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->repeatability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "repeatability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
