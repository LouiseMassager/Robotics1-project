// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
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
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__struct.h"
#include "hrim_actuator_gripper_srvs/srv/detail/control_finger__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_actuator_gripper_srvs__srv__control_finger__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("hrim_actuator_gripper_srvs.srv._control_finger.ControlFinger_Request", full_classname_dest, 68) == 0);
  }
  hrim_actuator_gripper_srvs__srv__ControlFinger_Request * ros_message = _ros_message;
  {  // goal_linearposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_linearposition");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_linearposition = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_angularposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_angularposition");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_angularposition = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_effort
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_effort");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_effort = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_actuator_gripper_srvs__srv__control_finger__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlFinger_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_actuator_gripper_srvs.srv._control_finger");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlFinger_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_actuator_gripper_srvs__srv__ControlFinger_Request * ros_message = (hrim_actuator_gripper_srvs__srv__ControlFinger_Request *)raw_ros_message;
  {  // goal_linearposition
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_linearposition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_linearposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_angularposition
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_angularposition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_angularposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_effort
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_effort);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_effort", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

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
// #include "hrim_actuator_gripper_srvs/srv/detail/control_finger__struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/control_finger__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_actuator_gripper_srvs__srv__control_finger__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("hrim_actuator_gripper_srvs.srv._control_finger.ControlFinger_Response", full_classname_dest, 69) == 0);
  }
  hrim_actuator_gripper_srvs__srv__ControlFinger_Response * ros_message = _ros_message;
  {  // goal_accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->goal_accepted = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_actuator_gripper_srvs__srv__control_finger__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlFinger_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_actuator_gripper_srvs.srv._control_finger");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlFinger_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_actuator_gripper_srvs__srv__ControlFinger_Response * ros_message = (hrim_actuator_gripper_srvs__srv__ControlFinger_Response *)raw_ros_message;
  {  // goal_accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->goal_accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
