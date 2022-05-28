// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "hrim_generic_msgs/msg/detail/status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hrim_generic_msgs/msg/detail/status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace hrim_generic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_generic_msgs
cdr_serialize(
  const hrim_generic_msgs::msg::Status & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: instance_id
  cdr << ros_message.instance_id;
  // Member: system_cpu
  cdr << ros_message.system_cpu;
  // Member: core_temperature
  cdr << ros_message.core_temperature;
  // Member: system_ram_total
  cdr << ros_message.system_ram_total;
  // Member: system_ram_used
  cdr << ros_message.system_ram_used;
  // Member: system_ram_free
  cdr << ros_message.system_ram_free;
  // Member: system_io_in
  cdr << ros_message.system_io_in;
  // Member: system_io_out
  cdr << ros_message.system_io_out;
  // Member: system_ipv4_ip
  {
    cdr << ros_message.system_ipv4_ip;
  }
  // Member: system_ipv4_received
  cdr << ros_message.system_ipv4_received;
  // Member: system_ipv4_sent
  cdr << ros_message.system_ipv4_sent;
  // Member: ipv4_tcpsock
  cdr << ros_message.ipv4_tcpsock;
  // Member: ipv4_tcppackets_received
  cdr << ros_message.ipv4_tcppackets_received;
  // Member: ipv4_tcppackets_sent
  cdr << ros_message.ipv4_tcppackets_sent;
  // Member: ipv4_tcp_errors
  cdr << ros_message.ipv4_tcp_errors;
  // Member: ipv4_udppackets_received
  cdr << ros_message.ipv4_udppackets_received;
  // Member: ipv4_udppackets_sent
  cdr << ros_message.ipv4_udppackets_sent;
  // Member: ipv4_udp_errors
  cdr << ros_message.ipv4_udp_errors;
  // Member: cpu_interrupts
  cdr << ros_message.cpu_interrupts;
  // Member: cpu_context_switches
  cdr << ros_message.cpu_context_switches;
  // Member: softnet_processed
  cdr << ros_message.softnet_processed;
  // Member: softnet_dropped
  cdr << ros_message.softnet_dropped;
  // Member: softnet_squeezed
  cdr << ros_message.softnet_squeezed;
  // Member: softnet_received_rps
  cdr << ros_message.softnet_received_rps;
  // Member: softnet_flow_limit_count
  cdr << ros_message.softnet_flow_limit_count;
  // Member: softirqs_hi
  cdr << ros_message.softirqs_hi;
  // Member: softirqs_timer
  cdr << ros_message.softirqs_timer;
  // Member: softirqs_net_tx
  cdr << ros_message.softirqs_net_tx;
  // Member: softirqs_net_rx
  cdr << ros_message.softirqs_net_rx;
  // Member: softirqs_block
  cdr << ros_message.softirqs_block;
  // Member: softirqs_irq_poll
  cdr << ros_message.softirqs_irq_poll;
  // Member: softirqs_tasklet
  cdr << ros_message.softirqs_tasklet;
  // Member: softirqs_sched
  cdr << ros_message.softirqs_sched;
  // Member: softirqs_hrtimer
  cdr << ros_message.softirqs_hrtimer;
  // Member: softirqs_rcu
  cdr << ros_message.softirqs_rcu;
  // Member: load1
  cdr << ros_message.load1;
  // Member: load5
  cdr << ros_message.load5;
  // Member: load15
  cdr << ros_message.load15;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_generic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_generic_msgs::msg::Status & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: instance_id
  cdr >> ros_message.instance_id;

  // Member: system_cpu
  cdr >> ros_message.system_cpu;

  // Member: core_temperature
  cdr >> ros_message.core_temperature;

  // Member: system_ram_total
  cdr >> ros_message.system_ram_total;

  // Member: system_ram_used
  cdr >> ros_message.system_ram_used;

  // Member: system_ram_free
  cdr >> ros_message.system_ram_free;

  // Member: system_io_in
  cdr >> ros_message.system_io_in;

  // Member: system_io_out
  cdr >> ros_message.system_io_out;

  // Member: system_ipv4_ip
  {
    cdr >> ros_message.system_ipv4_ip;
  }

  // Member: system_ipv4_received
  cdr >> ros_message.system_ipv4_received;

  // Member: system_ipv4_sent
  cdr >> ros_message.system_ipv4_sent;

  // Member: ipv4_tcpsock
  cdr >> ros_message.ipv4_tcpsock;

  // Member: ipv4_tcppackets_received
  cdr >> ros_message.ipv4_tcppackets_received;

  // Member: ipv4_tcppackets_sent
  cdr >> ros_message.ipv4_tcppackets_sent;

  // Member: ipv4_tcp_errors
  cdr >> ros_message.ipv4_tcp_errors;

  // Member: ipv4_udppackets_received
  cdr >> ros_message.ipv4_udppackets_received;

  // Member: ipv4_udppackets_sent
  cdr >> ros_message.ipv4_udppackets_sent;

  // Member: ipv4_udp_errors
  cdr >> ros_message.ipv4_udp_errors;

  // Member: cpu_interrupts
  cdr >> ros_message.cpu_interrupts;

  // Member: cpu_context_switches
  cdr >> ros_message.cpu_context_switches;

  // Member: softnet_processed
  cdr >> ros_message.softnet_processed;

  // Member: softnet_dropped
  cdr >> ros_message.softnet_dropped;

  // Member: softnet_squeezed
  cdr >> ros_message.softnet_squeezed;

  // Member: softnet_received_rps
  cdr >> ros_message.softnet_received_rps;

  // Member: softnet_flow_limit_count
  cdr >> ros_message.softnet_flow_limit_count;

  // Member: softirqs_hi
  cdr >> ros_message.softirqs_hi;

  // Member: softirqs_timer
  cdr >> ros_message.softirqs_timer;

  // Member: softirqs_net_tx
  cdr >> ros_message.softirqs_net_tx;

  // Member: softirqs_net_rx
  cdr >> ros_message.softirqs_net_rx;

  // Member: softirqs_block
  cdr >> ros_message.softirqs_block;

  // Member: softirqs_irq_poll
  cdr >> ros_message.softirqs_irq_poll;

  // Member: softirqs_tasklet
  cdr >> ros_message.softirqs_tasklet;

  // Member: softirqs_sched
  cdr >> ros_message.softirqs_sched;

  // Member: softirqs_hrtimer
  cdr >> ros_message.softirqs_hrtimer;

  // Member: softirqs_rcu
  cdr >> ros_message.softirqs_rcu;

  // Member: load1
  cdr >> ros_message.load1;

  // Member: load5
  cdr >> ros_message.load5;

  // Member: load15
  cdr >> ros_message.load15;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_generic_msgs
get_serialized_size(
  const hrim_generic_msgs::msg::Status & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: instance_id
  {
    size_t item_size = sizeof(ros_message.instance_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_cpu
  {
    size_t item_size = sizeof(ros_message.system_cpu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: core_temperature
  {
    size_t item_size = sizeof(ros_message.core_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_ram_total
  {
    size_t item_size = sizeof(ros_message.system_ram_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_ram_used
  {
    size_t item_size = sizeof(ros_message.system_ram_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_ram_free
  {
    size_t item_size = sizeof(ros_message.system_ram_free);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_io_in
  {
    size_t item_size = sizeof(ros_message.system_io_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_io_out
  {
    size_t item_size = sizeof(ros_message.system_io_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_ipv4_ip
  {
    size_t array_size = ros_message.system_ipv4_ip.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.system_ipv4_ip[index].size() + 1);
    }
  }
  // Member: system_ipv4_received
  {
    size_t item_size = sizeof(ros_message.system_ipv4_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_ipv4_sent
  {
    size_t item_size = sizeof(ros_message.system_ipv4_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_tcpsock
  {
    size_t item_size = sizeof(ros_message.ipv4_tcpsock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_tcppackets_received
  {
    size_t item_size = sizeof(ros_message.ipv4_tcppackets_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_tcppackets_sent
  {
    size_t item_size = sizeof(ros_message.ipv4_tcppackets_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_tcp_errors
  {
    size_t item_size = sizeof(ros_message.ipv4_tcp_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_udppackets_received
  {
    size_t item_size = sizeof(ros_message.ipv4_udppackets_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_udppackets_sent
  {
    size_t item_size = sizeof(ros_message.ipv4_udppackets_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipv4_udp_errors
  {
    size_t item_size = sizeof(ros_message.ipv4_udp_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cpu_interrupts
  {
    size_t item_size = sizeof(ros_message.cpu_interrupts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cpu_context_switches
  {
    size_t item_size = sizeof(ros_message.cpu_context_switches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softnet_processed
  {
    size_t item_size = sizeof(ros_message.softnet_processed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softnet_dropped
  {
    size_t item_size = sizeof(ros_message.softnet_dropped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softnet_squeezed
  {
    size_t item_size = sizeof(ros_message.softnet_squeezed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softnet_received_rps
  {
    size_t item_size = sizeof(ros_message.softnet_received_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softnet_flow_limit_count
  {
    size_t item_size = sizeof(ros_message.softnet_flow_limit_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_hi
  {
    size_t item_size = sizeof(ros_message.softirqs_hi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_timer
  {
    size_t item_size = sizeof(ros_message.softirqs_timer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_net_tx
  {
    size_t item_size = sizeof(ros_message.softirqs_net_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_net_rx
  {
    size_t item_size = sizeof(ros_message.softirqs_net_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_block
  {
    size_t item_size = sizeof(ros_message.softirqs_block);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_irq_poll
  {
    size_t item_size = sizeof(ros_message.softirqs_irq_poll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_tasklet
  {
    size_t item_size = sizeof(ros_message.softirqs_tasklet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_sched
  {
    size_t item_size = sizeof(ros_message.softirqs_sched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_hrtimer
  {
    size_t item_size = sizeof(ros_message.softirqs_hrtimer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: softirqs_rcu
  {
    size_t item_size = sizeof(ros_message.softirqs_rcu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load1
  {
    size_t item_size = sizeof(ros_message.load1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load5
  {
    size_t item_size = sizeof(ros_message.load5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load15
  {
    size_t item_size = sizeof(ros_message.load15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_generic_msgs
max_serialized_size_Status(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: instance_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_cpu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: core_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_ram_total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_ram_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_ram_free
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_io_in
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_io_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_ipv4_ip
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

  // Member: system_ipv4_received
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: system_ipv4_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ipv4_tcpsock
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ipv4_tcppackets_received
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ipv4_tcppackets_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ipv4_tcp_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ipv4_udppackets_received
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ipv4_udppackets_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ipv4_udp_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cpu_interrupts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cpu_context_switches
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: softnet_processed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: softnet_dropped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: softnet_squeezed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: softnet_received_rps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: softnet_flow_limit_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: softirqs_hi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_timer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_net_tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_net_rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_block
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_irq_poll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_tasklet
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_sched
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_hrtimer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: softirqs_rcu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: load1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load15
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_generic_msgs::msg::Status *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_generic_msgs::msg::Status *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Status__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_generic_msgs::msg::Status *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Status__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Status(full_bounded, 0);
}

static message_type_support_callbacks_t _Status__callbacks = {
  "hrim_generic_msgs::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size
};

static rosidl_message_type_support_t _Status__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Status__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hrim_generic_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_generic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_generic_msgs::msg::Status>()
{
  return &hrim_generic_msgs::msg::typesupport_fastrtps_cpp::_Status__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_generic_msgs, msg, Status)() {
  return &hrim_generic_msgs::msg::typesupport_fastrtps_cpp::_Status__handle;
}

#ifdef __cplusplus
}
#endif
