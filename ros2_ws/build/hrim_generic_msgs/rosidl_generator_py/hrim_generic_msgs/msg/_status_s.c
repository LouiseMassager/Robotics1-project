// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_generic_msgs:msg/Status.idl
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
#include "hrim_generic_msgs/msg/detail/status__struct.h"
#include "hrim_generic_msgs/msg/detail/status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("hrim_generic_msgs.msg._status.Status", full_classname_dest, 36) == 0);
  }
  hrim_generic_msgs__msg__Status * ros_message = _ros_message;
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
  {  // instance_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "instance_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instance_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_cpu
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_cpu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_cpu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // core_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "core_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->core_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_ram_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ram_total");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_ram_total = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_ram_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ram_used");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_ram_used = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_ram_free
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ram_free");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_ram_free = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_io_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_io_in");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_io_in = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_io_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_io_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_io_out = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_ipv4_ip
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ipv4_ip");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'system_ipv4_ip'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->system_ipv4_ip), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String * dest = ros_message->system_ipv4_ip.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // system_ipv4_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ipv4_received");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_ipv4_received = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_ipv4_sent
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_ipv4_sent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_ipv4_sent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipv4_tcpsock
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_tcpsock");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ipv4_tcpsock = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ipv4_tcppackets_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_tcppackets_received");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipv4_tcppackets_received = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipv4_tcppackets_sent
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_tcppackets_sent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipv4_tcppackets_sent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipv4_tcp_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_tcp_errors");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipv4_tcp_errors = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipv4_udppackets_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_udppackets_received");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipv4_udppackets_received = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipv4_udppackets_sent
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_udppackets_sent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipv4_udppackets_sent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipv4_udp_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipv4_udp_errors");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipv4_udp_errors = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_interrupts
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_interrupts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_interrupts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_context_switches
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_context_switches");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_context_switches = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // softnet_processed
    PyObject * field = PyObject_GetAttrString(_pymsg, "softnet_processed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softnet_processed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // softnet_dropped
    PyObject * field = PyObject_GetAttrString(_pymsg, "softnet_dropped");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softnet_dropped = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // softnet_squeezed
    PyObject * field = PyObject_GetAttrString(_pymsg, "softnet_squeezed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softnet_squeezed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // softnet_received_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "softnet_received_rps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softnet_received_rps = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // softnet_flow_limit_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "softnet_flow_limit_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softnet_flow_limit_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_hi
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_hi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_hi = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_timer
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_timer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_timer = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_net_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_net_tx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_net_tx = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_net_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_net_rx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_net_rx = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_block
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_block");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_block = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_irq_poll
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_irq_poll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_irq_poll = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_tasklet
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_tasklet");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_tasklet = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_sched
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_sched");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_sched = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_hrtimer
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_hrtimer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_hrtimer = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // softirqs_rcu
    PyObject * field = PyObject_GetAttrString(_pymsg, "softirqs_rcu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->softirqs_rcu = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // load1
    PyObject * field = PyObject_GetAttrString(_pymsg, "load1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load5
    PyObject * field = PyObject_GetAttrString(_pymsg, "load5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load15
    PyObject * field = PyObject_GetAttrString(_pymsg, "load15");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load15 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_generic_msgs__msg__Status * ros_message = (hrim_generic_msgs__msg__Status *)raw_ros_message;
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
  {  // instance_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->instance_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instance_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_cpu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_cpu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_cpu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // core_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->core_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "core_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ram_total
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_ram_total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ram_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ram_used
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_ram_used);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ram_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ram_free
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_ram_free);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ram_free", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_io_in
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_io_in);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_io_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_io_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_io_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_io_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ipv4_ip
    PyObject * field = NULL;
    size_t size = ros_message->system_ipv4_ip.size;
    rosidl_runtime_c__String * src = ros_message->system_ipv4_ip.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ipv4_ip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ipv4_received
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_ipv4_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ipv4_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_ipv4_sent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_ipv4_sent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_ipv4_sent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_tcpsock
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ipv4_tcpsock);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_tcpsock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_tcppackets_received
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipv4_tcppackets_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_tcppackets_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_tcppackets_sent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipv4_tcppackets_sent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_tcppackets_sent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_tcp_errors
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipv4_tcp_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_tcp_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_udppackets_received
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipv4_udppackets_received);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_udppackets_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_udppackets_sent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipv4_udppackets_sent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_udppackets_sent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipv4_udp_errors
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipv4_udp_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipv4_udp_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_interrupts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_interrupts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_interrupts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_context_switches
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_context_switches);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_context_switches", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softnet_processed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->softnet_processed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softnet_processed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softnet_dropped
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->softnet_dropped);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softnet_dropped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softnet_squeezed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->softnet_squeezed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softnet_squeezed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softnet_received_rps
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->softnet_received_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softnet_received_rps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softnet_flow_limit_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->softnet_flow_limit_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softnet_flow_limit_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_hi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_hi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_hi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_timer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_timer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_timer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_net_tx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_net_tx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_net_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_net_rx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_net_rx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_net_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_block
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_block);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_block", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_irq_poll
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_irq_poll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_irq_poll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_tasklet
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_tasklet);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_tasklet", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_sched
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_sched);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_sched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_hrtimer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_hrtimer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_hrtimer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // softirqs_rcu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->softirqs_rcu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "softirqs_rcu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load15
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load15);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load15", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
