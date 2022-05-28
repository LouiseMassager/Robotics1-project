// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "hrim_generic_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `system_ipv4_ip`
#include "rosidl_runtime_c/string_functions.h"

bool
hrim_generic_msgs__msg__Status__init(hrim_generic_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hrim_generic_msgs__msg__Status__fini(msg);
    return false;
  }
  // instance_id
  // system_cpu
  // core_temperature
  // system_ram_total
  // system_ram_used
  // system_ram_free
  // system_io_in
  // system_io_out
  // system_ipv4_ip
  if (!rosidl_runtime_c__String__Sequence__init(&msg->system_ipv4_ip, 0)) {
    hrim_generic_msgs__msg__Status__fini(msg);
    return false;
  }
  // system_ipv4_received
  // system_ipv4_sent
  // ipv4_tcpsock
  // ipv4_tcppackets_received
  // ipv4_tcppackets_sent
  // ipv4_tcp_errors
  // ipv4_udppackets_received
  // ipv4_udppackets_sent
  // ipv4_udp_errors
  // cpu_interrupts
  // cpu_context_switches
  // softnet_processed
  // softnet_dropped
  // softnet_squeezed
  // softnet_received_rps
  // softnet_flow_limit_count
  // softirqs_hi
  // softirqs_timer
  // softirqs_net_tx
  // softirqs_net_rx
  // softirqs_block
  // softirqs_irq_poll
  // softirqs_tasklet
  // softirqs_sched
  // softirqs_hrtimer
  // softirqs_rcu
  // load1
  // load5
  // load15
  return true;
}

void
hrim_generic_msgs__msg__Status__fini(hrim_generic_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // instance_id
  // system_cpu
  // core_temperature
  // system_ram_total
  // system_ram_used
  // system_ram_free
  // system_io_in
  // system_io_out
  // system_ipv4_ip
  rosidl_runtime_c__String__Sequence__fini(&msg->system_ipv4_ip);
  // system_ipv4_received
  // system_ipv4_sent
  // ipv4_tcpsock
  // ipv4_tcppackets_received
  // ipv4_tcppackets_sent
  // ipv4_tcp_errors
  // ipv4_udppackets_received
  // ipv4_udppackets_sent
  // ipv4_udp_errors
  // cpu_interrupts
  // cpu_context_switches
  // softnet_processed
  // softnet_dropped
  // softnet_squeezed
  // softnet_received_rps
  // softnet_flow_limit_count
  // softirqs_hi
  // softirqs_timer
  // softirqs_net_tx
  // softirqs_net_rx
  // softirqs_block
  // softirqs_irq_poll
  // softirqs_tasklet
  // softirqs_sched
  // softirqs_hrtimer
  // softirqs_rcu
  // load1
  // load5
  // load15
}

hrim_generic_msgs__msg__Status *
hrim_generic_msgs__msg__Status__create()
{
  hrim_generic_msgs__msg__Status * msg = (hrim_generic_msgs__msg__Status *)malloc(sizeof(hrim_generic_msgs__msg__Status));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrim_generic_msgs__msg__Status));
  bool success = hrim_generic_msgs__msg__Status__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hrim_generic_msgs__msg__Status__destroy(hrim_generic_msgs__msg__Status * msg)
{
  if (msg) {
    hrim_generic_msgs__msg__Status__fini(msg);
  }
  free(msg);
}


bool
hrim_generic_msgs__msg__Status__Sequence__init(hrim_generic_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hrim_generic_msgs__msg__Status * data = NULL;
  if (size) {
    data = (hrim_generic_msgs__msg__Status *)calloc(size, sizeof(hrim_generic_msgs__msg__Status));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrim_generic_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrim_generic_msgs__msg__Status__fini(&data[i - 1]);
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
hrim_generic_msgs__msg__Status__Sequence__fini(hrim_generic_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hrim_generic_msgs__msg__Status__fini(&array->data[i]);
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

hrim_generic_msgs__msg__Status__Sequence *
hrim_generic_msgs__msg__Status__Sequence__create(size_t size)
{
  hrim_generic_msgs__msg__Status__Sequence * array = (hrim_generic_msgs__msg__Status__Sequence *)malloc(sizeof(hrim_generic_msgs__msg__Status__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hrim_generic_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hrim_generic_msgs__msg__Status__Sequence__destroy(hrim_generic_msgs__msg__Status__Sequence * array)
{
  if (array) {
    hrim_generic_msgs__msg__Status__Sequence__fini(array);
  }
  free(array);
}
