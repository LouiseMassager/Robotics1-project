// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'system_ipv4_ip'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Status in the package hrim_generic_msgs.
typedef struct hrim_generic_msgs__msg__Status
{
  std_msgs__msg__Header header;
  uint32_t instance_id;
  float system_cpu;
  float core_temperature;
  uint32_t system_ram_total;
  uint32_t system_ram_used;
  uint32_t system_ram_free;
  float system_io_in;
  float system_io_out;
  rosidl_runtime_c__String__Sequence system_ipv4_ip;
  float system_ipv4_received;
  float system_ipv4_sent;
  uint16_t ipv4_tcpsock;
  float ipv4_tcppackets_received;
  float ipv4_tcppackets_sent;
  float ipv4_tcp_errors;
  float ipv4_udppackets_received;
  float ipv4_udppackets_sent;
  float ipv4_udp_errors;
  float cpu_interrupts;
  float cpu_context_switches;
  uint32_t softnet_processed;
  uint32_t softnet_dropped;
  uint32_t softnet_squeezed;
  uint32_t softnet_received_rps;
  uint32_t softnet_flow_limit_count;
  uint64_t softirqs_hi;
  uint64_t softirqs_timer;
  uint64_t softirqs_net_tx;
  uint64_t softirqs_net_rx;
  uint64_t softirqs_block;
  uint64_t softirqs_irq_poll;
  uint64_t softirqs_tasklet;
  uint64_t softirqs_sched;
  uint64_t softirqs_hrtimer;
  uint64_t softirqs_rcu;
  float load1;
  float load5;
  float load15;
} hrim_generic_msgs__msg__Status;

// Struct for a sequence of hrim_generic_msgs__msg__Status.
typedef struct hrim_generic_msgs__msg__Status__Sequence
{
  hrim_generic_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_generic_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
