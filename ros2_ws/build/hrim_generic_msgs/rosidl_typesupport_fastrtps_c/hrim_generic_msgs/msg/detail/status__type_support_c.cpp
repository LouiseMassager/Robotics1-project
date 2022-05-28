// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "hrim_generic_msgs/msg/detail/status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrim_generic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrim_generic_msgs/msg/detail/status__struct.h"
#include "hrim_generic_msgs/msg/detail/status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // system_ipv4_ip
#include "rosidl_runtime_c/string_functions.h"  // system_ipv4_ip
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_generic_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_generic_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrim_generic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Status__ros_msg_type = hrim_generic_msgs__msg__Status;

static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: instance_id
  {
    cdr << ros_message->instance_id;
  }

  // Field name: system_cpu
  {
    cdr << ros_message->system_cpu;
  }

  // Field name: core_temperature
  {
    cdr << ros_message->core_temperature;
  }

  // Field name: system_ram_total
  {
    cdr << ros_message->system_ram_total;
  }

  // Field name: system_ram_used
  {
    cdr << ros_message->system_ram_used;
  }

  // Field name: system_ram_free
  {
    cdr << ros_message->system_ram_free;
  }

  // Field name: system_io_in
  {
    cdr << ros_message->system_io_in;
  }

  // Field name: system_io_out
  {
    cdr << ros_message->system_io_out;
  }

  // Field name: system_ipv4_ip
  {
    size_t size = ros_message->system_ipv4_ip.size;
    auto array_ptr = ros_message->system_ipv4_ip.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: system_ipv4_received
  {
    cdr << ros_message->system_ipv4_received;
  }

  // Field name: system_ipv4_sent
  {
    cdr << ros_message->system_ipv4_sent;
  }

  // Field name: ipv4_tcpsock
  {
    cdr << ros_message->ipv4_tcpsock;
  }

  // Field name: ipv4_tcppackets_received
  {
    cdr << ros_message->ipv4_tcppackets_received;
  }

  // Field name: ipv4_tcppackets_sent
  {
    cdr << ros_message->ipv4_tcppackets_sent;
  }

  // Field name: ipv4_tcp_errors
  {
    cdr << ros_message->ipv4_tcp_errors;
  }

  // Field name: ipv4_udppackets_received
  {
    cdr << ros_message->ipv4_udppackets_received;
  }

  // Field name: ipv4_udppackets_sent
  {
    cdr << ros_message->ipv4_udppackets_sent;
  }

  // Field name: ipv4_udp_errors
  {
    cdr << ros_message->ipv4_udp_errors;
  }

  // Field name: cpu_interrupts
  {
    cdr << ros_message->cpu_interrupts;
  }

  // Field name: cpu_context_switches
  {
    cdr << ros_message->cpu_context_switches;
  }

  // Field name: softnet_processed
  {
    cdr << ros_message->softnet_processed;
  }

  // Field name: softnet_dropped
  {
    cdr << ros_message->softnet_dropped;
  }

  // Field name: softnet_squeezed
  {
    cdr << ros_message->softnet_squeezed;
  }

  // Field name: softnet_received_rps
  {
    cdr << ros_message->softnet_received_rps;
  }

  // Field name: softnet_flow_limit_count
  {
    cdr << ros_message->softnet_flow_limit_count;
  }

  // Field name: softirqs_hi
  {
    cdr << ros_message->softirqs_hi;
  }

  // Field name: softirqs_timer
  {
    cdr << ros_message->softirqs_timer;
  }

  // Field name: softirqs_net_tx
  {
    cdr << ros_message->softirqs_net_tx;
  }

  // Field name: softirqs_net_rx
  {
    cdr << ros_message->softirqs_net_rx;
  }

  // Field name: softirqs_block
  {
    cdr << ros_message->softirqs_block;
  }

  // Field name: softirqs_irq_poll
  {
    cdr << ros_message->softirqs_irq_poll;
  }

  // Field name: softirqs_tasklet
  {
    cdr << ros_message->softirqs_tasklet;
  }

  // Field name: softirqs_sched
  {
    cdr << ros_message->softirqs_sched;
  }

  // Field name: softirqs_hrtimer
  {
    cdr << ros_message->softirqs_hrtimer;
  }

  // Field name: softirqs_rcu
  {
    cdr << ros_message->softirqs_rcu;
  }

  // Field name: load1
  {
    cdr << ros_message->load1;
  }

  // Field name: load5
  {
    cdr << ros_message->load5;
  }

  // Field name: load15
  {
    cdr << ros_message->load15;
  }

  return true;
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Status__ros_msg_type * ros_message = static_cast<_Status__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: instance_id
  {
    cdr >> ros_message->instance_id;
  }

  // Field name: system_cpu
  {
    cdr >> ros_message->system_cpu;
  }

  // Field name: core_temperature
  {
    cdr >> ros_message->core_temperature;
  }

  // Field name: system_ram_total
  {
    cdr >> ros_message->system_ram_total;
  }

  // Field name: system_ram_used
  {
    cdr >> ros_message->system_ram_used;
  }

  // Field name: system_ram_free
  {
    cdr >> ros_message->system_ram_free;
  }

  // Field name: system_io_in
  {
    cdr >> ros_message->system_io_in;
  }

  // Field name: system_io_out
  {
    cdr >> ros_message->system_io_out;
  }

  // Field name: system_ipv4_ip
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->system_ipv4_ip.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->system_ipv4_ip);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->system_ipv4_ip, size)) {
      return "failed to create array for field 'system_ipv4_ip'";
    }
    auto array_ptr = ros_message->system_ipv4_ip.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'system_ipv4_ip'\n");
        return false;
      }
    }
  }

  // Field name: system_ipv4_received
  {
    cdr >> ros_message->system_ipv4_received;
  }

  // Field name: system_ipv4_sent
  {
    cdr >> ros_message->system_ipv4_sent;
  }

  // Field name: ipv4_tcpsock
  {
    cdr >> ros_message->ipv4_tcpsock;
  }

  // Field name: ipv4_tcppackets_received
  {
    cdr >> ros_message->ipv4_tcppackets_received;
  }

  // Field name: ipv4_tcppackets_sent
  {
    cdr >> ros_message->ipv4_tcppackets_sent;
  }

  // Field name: ipv4_tcp_errors
  {
    cdr >> ros_message->ipv4_tcp_errors;
  }

  // Field name: ipv4_udppackets_received
  {
    cdr >> ros_message->ipv4_udppackets_received;
  }

  // Field name: ipv4_udppackets_sent
  {
    cdr >> ros_message->ipv4_udppackets_sent;
  }

  // Field name: ipv4_udp_errors
  {
    cdr >> ros_message->ipv4_udp_errors;
  }

  // Field name: cpu_interrupts
  {
    cdr >> ros_message->cpu_interrupts;
  }

  // Field name: cpu_context_switches
  {
    cdr >> ros_message->cpu_context_switches;
  }

  // Field name: softnet_processed
  {
    cdr >> ros_message->softnet_processed;
  }

  // Field name: softnet_dropped
  {
    cdr >> ros_message->softnet_dropped;
  }

  // Field name: softnet_squeezed
  {
    cdr >> ros_message->softnet_squeezed;
  }

  // Field name: softnet_received_rps
  {
    cdr >> ros_message->softnet_received_rps;
  }

  // Field name: softnet_flow_limit_count
  {
    cdr >> ros_message->softnet_flow_limit_count;
  }

  // Field name: softirqs_hi
  {
    cdr >> ros_message->softirqs_hi;
  }

  // Field name: softirqs_timer
  {
    cdr >> ros_message->softirqs_timer;
  }

  // Field name: softirqs_net_tx
  {
    cdr >> ros_message->softirqs_net_tx;
  }

  // Field name: softirqs_net_rx
  {
    cdr >> ros_message->softirqs_net_rx;
  }

  // Field name: softirqs_block
  {
    cdr >> ros_message->softirqs_block;
  }

  // Field name: softirqs_irq_poll
  {
    cdr >> ros_message->softirqs_irq_poll;
  }

  // Field name: softirqs_tasklet
  {
    cdr >> ros_message->softirqs_tasklet;
  }

  // Field name: softirqs_sched
  {
    cdr >> ros_message->softirqs_sched;
  }

  // Field name: softirqs_hrtimer
  {
    cdr >> ros_message->softirqs_hrtimer;
  }

  // Field name: softirqs_rcu
  {
    cdr >> ros_message->softirqs_rcu;
  }

  // Field name: load1
  {
    cdr >> ros_message->load1;
  }

  // Field name: load5
  {
    cdr >> ros_message->load5;
  }

  // Field name: load15
  {
    cdr >> ros_message->load15;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_msgs
size_t get_serialized_size_hrim_generic_msgs__msg__Status(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name instance_id
  {
    size_t item_size = sizeof(ros_message->instance_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_cpu
  {
    size_t item_size = sizeof(ros_message->system_cpu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name core_temperature
  {
    size_t item_size = sizeof(ros_message->core_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_ram_total
  {
    size_t item_size = sizeof(ros_message->system_ram_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_ram_used
  {
    size_t item_size = sizeof(ros_message->system_ram_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_ram_free
  {
    size_t item_size = sizeof(ros_message->system_ram_free);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_io_in
  {
    size_t item_size = sizeof(ros_message->system_io_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_io_out
  {
    size_t item_size = sizeof(ros_message->system_io_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_ipv4_ip
  {
    size_t array_size = ros_message->system_ipv4_ip.size;
    auto array_ptr = ros_message->system_ipv4_ip.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name system_ipv4_received
  {
    size_t item_size = sizeof(ros_message->system_ipv4_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_ipv4_sent
  {
    size_t item_size = sizeof(ros_message->system_ipv4_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_tcpsock
  {
    size_t item_size = sizeof(ros_message->ipv4_tcpsock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_tcppackets_received
  {
    size_t item_size = sizeof(ros_message->ipv4_tcppackets_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_tcppackets_sent
  {
    size_t item_size = sizeof(ros_message->ipv4_tcppackets_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_tcp_errors
  {
    size_t item_size = sizeof(ros_message->ipv4_tcp_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_udppackets_received
  {
    size_t item_size = sizeof(ros_message->ipv4_udppackets_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_udppackets_sent
  {
    size_t item_size = sizeof(ros_message->ipv4_udppackets_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipv4_udp_errors
  {
    size_t item_size = sizeof(ros_message->ipv4_udp_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_interrupts
  {
    size_t item_size = sizeof(ros_message->cpu_interrupts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_context_switches
  {
    size_t item_size = sizeof(ros_message->cpu_context_switches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softnet_processed
  {
    size_t item_size = sizeof(ros_message->softnet_processed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softnet_dropped
  {
    size_t item_size = sizeof(ros_message->softnet_dropped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softnet_squeezed
  {
    size_t item_size = sizeof(ros_message->softnet_squeezed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softnet_received_rps
  {
    size_t item_size = sizeof(ros_message->softnet_received_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softnet_flow_limit_count
  {
    size_t item_size = sizeof(ros_message->softnet_flow_limit_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_hi
  {
    size_t item_size = sizeof(ros_message->softirqs_hi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_timer
  {
    size_t item_size = sizeof(ros_message->softirqs_timer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_net_tx
  {
    size_t item_size = sizeof(ros_message->softirqs_net_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_net_rx
  {
    size_t item_size = sizeof(ros_message->softirqs_net_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_block
  {
    size_t item_size = sizeof(ros_message->softirqs_block);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_irq_poll
  {
    size_t item_size = sizeof(ros_message->softirqs_irq_poll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_tasklet
  {
    size_t item_size = sizeof(ros_message->softirqs_tasklet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_sched
  {
    size_t item_size = sizeof(ros_message->softirqs_sched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_hrtimer
  {
    size_t item_size = sizeof(ros_message->softirqs_hrtimer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name softirqs_rcu
  {
    size_t item_size = sizeof(ros_message->softirqs_rcu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load1
  {
    size_t item_size = sizeof(ros_message->load1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load5
  {
    size_t item_size = sizeof(ros_message->load5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load15
  {
    size_t item_size = sizeof(ros_message->load15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Status__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrim_generic_msgs__msg__Status(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrim_generic_msgs
size_t max_serialized_size_hrim_generic_msgs__msg__Status(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: instance_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_cpu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: core_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_ram_total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_ram_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_ram_free
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_io_in
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_io_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_ipv4_ip
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: system_ipv4_received
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: system_ipv4_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ipv4_tcpsock
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ipv4_tcppackets_received
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ipv4_tcppackets_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ipv4_tcp_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ipv4_udppackets_received
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ipv4_udppackets_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ipv4_udp_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cpu_interrupts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cpu_context_switches
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: softnet_processed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: softnet_dropped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: softnet_squeezed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: softnet_received_rps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: softnet_flow_limit_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: softirqs_hi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_timer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_net_tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_net_rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_block
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_irq_poll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_tasklet
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_sched
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_hrtimer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: softirqs_rcu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: load1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load15
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Status__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrim_generic_msgs__msg__Status(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Status = {
  "hrim_generic_msgs::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size
};

static rosidl_message_type_support_t _Status__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Status,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_generic_msgs, msg, Status)() {
  return &_Status__type_support;
}

#if defined(__cplusplus)
}
#endif
