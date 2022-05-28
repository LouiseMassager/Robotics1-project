// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_generic_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_msgs__msg__Status __declspec(deprecated)
#endif

namespace hrim_generic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instance_id = 0ul;
      this->system_cpu = 0.0f;
      this->core_temperature = 0.0f;
      this->system_ram_total = 0ul;
      this->system_ram_used = 0ul;
      this->system_ram_free = 0ul;
      this->system_io_in = 0.0f;
      this->system_io_out = 0.0f;
      this->system_ipv4_received = 0.0f;
      this->system_ipv4_sent = 0.0f;
      this->ipv4_tcpsock = 0;
      this->ipv4_tcppackets_received = 0.0f;
      this->ipv4_tcppackets_sent = 0.0f;
      this->ipv4_tcp_errors = 0.0f;
      this->ipv4_udppackets_received = 0.0f;
      this->ipv4_udppackets_sent = 0.0f;
      this->ipv4_udp_errors = 0.0f;
      this->cpu_interrupts = 0.0f;
      this->cpu_context_switches = 0.0f;
      this->softnet_processed = 0ul;
      this->softnet_dropped = 0ul;
      this->softnet_squeezed = 0ul;
      this->softnet_received_rps = 0ul;
      this->softnet_flow_limit_count = 0ul;
      this->softirqs_hi = 0ull;
      this->softirqs_timer = 0ull;
      this->softirqs_net_tx = 0ull;
      this->softirqs_net_rx = 0ull;
      this->softirqs_block = 0ull;
      this->softirqs_irq_poll = 0ull;
      this->softirqs_tasklet = 0ull;
      this->softirqs_sched = 0ull;
      this->softirqs_hrtimer = 0ull;
      this->softirqs_rcu = 0ull;
      this->load1 = 0.0f;
      this->load5 = 0.0f;
      this->load15 = 0.0f;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instance_id = 0ul;
      this->system_cpu = 0.0f;
      this->core_temperature = 0.0f;
      this->system_ram_total = 0ul;
      this->system_ram_used = 0ul;
      this->system_ram_free = 0ul;
      this->system_io_in = 0.0f;
      this->system_io_out = 0.0f;
      this->system_ipv4_received = 0.0f;
      this->system_ipv4_sent = 0.0f;
      this->ipv4_tcpsock = 0;
      this->ipv4_tcppackets_received = 0.0f;
      this->ipv4_tcppackets_sent = 0.0f;
      this->ipv4_tcp_errors = 0.0f;
      this->ipv4_udppackets_received = 0.0f;
      this->ipv4_udppackets_sent = 0.0f;
      this->ipv4_udp_errors = 0.0f;
      this->cpu_interrupts = 0.0f;
      this->cpu_context_switches = 0.0f;
      this->softnet_processed = 0ul;
      this->softnet_dropped = 0ul;
      this->softnet_squeezed = 0ul;
      this->softnet_received_rps = 0ul;
      this->softnet_flow_limit_count = 0ul;
      this->softirqs_hi = 0ull;
      this->softirqs_timer = 0ull;
      this->softirqs_net_tx = 0ull;
      this->softirqs_net_rx = 0ull;
      this->softirqs_block = 0ull;
      this->softirqs_irq_poll = 0ull;
      this->softirqs_tasklet = 0ull;
      this->softirqs_sched = 0ull;
      this->softirqs_hrtimer = 0ull;
      this->softirqs_rcu = 0ull;
      this->load1 = 0.0f;
      this->load5 = 0.0f;
      this->load15 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _instance_id_type =
    uint32_t;
  _instance_id_type instance_id;
  using _system_cpu_type =
    float;
  _system_cpu_type system_cpu;
  using _core_temperature_type =
    float;
  _core_temperature_type core_temperature;
  using _system_ram_total_type =
    uint32_t;
  _system_ram_total_type system_ram_total;
  using _system_ram_used_type =
    uint32_t;
  _system_ram_used_type system_ram_used;
  using _system_ram_free_type =
    uint32_t;
  _system_ram_free_type system_ram_free;
  using _system_io_in_type =
    float;
  _system_io_in_type system_io_in;
  using _system_io_out_type =
    float;
  _system_io_out_type system_io_out;
  using _system_ipv4_ip_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _system_ipv4_ip_type system_ipv4_ip;
  using _system_ipv4_received_type =
    float;
  _system_ipv4_received_type system_ipv4_received;
  using _system_ipv4_sent_type =
    float;
  _system_ipv4_sent_type system_ipv4_sent;
  using _ipv4_tcpsock_type =
    uint16_t;
  _ipv4_tcpsock_type ipv4_tcpsock;
  using _ipv4_tcppackets_received_type =
    float;
  _ipv4_tcppackets_received_type ipv4_tcppackets_received;
  using _ipv4_tcppackets_sent_type =
    float;
  _ipv4_tcppackets_sent_type ipv4_tcppackets_sent;
  using _ipv4_tcp_errors_type =
    float;
  _ipv4_tcp_errors_type ipv4_tcp_errors;
  using _ipv4_udppackets_received_type =
    float;
  _ipv4_udppackets_received_type ipv4_udppackets_received;
  using _ipv4_udppackets_sent_type =
    float;
  _ipv4_udppackets_sent_type ipv4_udppackets_sent;
  using _ipv4_udp_errors_type =
    float;
  _ipv4_udp_errors_type ipv4_udp_errors;
  using _cpu_interrupts_type =
    float;
  _cpu_interrupts_type cpu_interrupts;
  using _cpu_context_switches_type =
    float;
  _cpu_context_switches_type cpu_context_switches;
  using _softnet_processed_type =
    uint32_t;
  _softnet_processed_type softnet_processed;
  using _softnet_dropped_type =
    uint32_t;
  _softnet_dropped_type softnet_dropped;
  using _softnet_squeezed_type =
    uint32_t;
  _softnet_squeezed_type softnet_squeezed;
  using _softnet_received_rps_type =
    uint32_t;
  _softnet_received_rps_type softnet_received_rps;
  using _softnet_flow_limit_count_type =
    uint32_t;
  _softnet_flow_limit_count_type softnet_flow_limit_count;
  using _softirqs_hi_type =
    uint64_t;
  _softirqs_hi_type softirqs_hi;
  using _softirqs_timer_type =
    uint64_t;
  _softirqs_timer_type softirqs_timer;
  using _softirqs_net_tx_type =
    uint64_t;
  _softirqs_net_tx_type softirqs_net_tx;
  using _softirqs_net_rx_type =
    uint64_t;
  _softirqs_net_rx_type softirqs_net_rx;
  using _softirqs_block_type =
    uint64_t;
  _softirqs_block_type softirqs_block;
  using _softirqs_irq_poll_type =
    uint64_t;
  _softirqs_irq_poll_type softirqs_irq_poll;
  using _softirqs_tasklet_type =
    uint64_t;
  _softirqs_tasklet_type softirqs_tasklet;
  using _softirqs_sched_type =
    uint64_t;
  _softirqs_sched_type softirqs_sched;
  using _softirqs_hrtimer_type =
    uint64_t;
  _softirqs_hrtimer_type softirqs_hrtimer;
  using _softirqs_rcu_type =
    uint64_t;
  _softirqs_rcu_type softirqs_rcu;
  using _load1_type =
    float;
  _load1_type load1;
  using _load5_type =
    float;
  _load5_type load5;
  using _load15_type =
    float;
  _load15_type load15;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__instance_id(
    const uint32_t & _arg)
  {
    this->instance_id = _arg;
    return *this;
  }
  Type & set__system_cpu(
    const float & _arg)
  {
    this->system_cpu = _arg;
    return *this;
  }
  Type & set__core_temperature(
    const float & _arg)
  {
    this->core_temperature = _arg;
    return *this;
  }
  Type & set__system_ram_total(
    const uint32_t & _arg)
  {
    this->system_ram_total = _arg;
    return *this;
  }
  Type & set__system_ram_used(
    const uint32_t & _arg)
  {
    this->system_ram_used = _arg;
    return *this;
  }
  Type & set__system_ram_free(
    const uint32_t & _arg)
  {
    this->system_ram_free = _arg;
    return *this;
  }
  Type & set__system_io_in(
    const float & _arg)
  {
    this->system_io_in = _arg;
    return *this;
  }
  Type & set__system_io_out(
    const float & _arg)
  {
    this->system_io_out = _arg;
    return *this;
  }
  Type & set__system_ipv4_ip(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->system_ipv4_ip = _arg;
    return *this;
  }
  Type & set__system_ipv4_received(
    const float & _arg)
  {
    this->system_ipv4_received = _arg;
    return *this;
  }
  Type & set__system_ipv4_sent(
    const float & _arg)
  {
    this->system_ipv4_sent = _arg;
    return *this;
  }
  Type & set__ipv4_tcpsock(
    const uint16_t & _arg)
  {
    this->ipv4_tcpsock = _arg;
    return *this;
  }
  Type & set__ipv4_tcppackets_received(
    const float & _arg)
  {
    this->ipv4_tcppackets_received = _arg;
    return *this;
  }
  Type & set__ipv4_tcppackets_sent(
    const float & _arg)
  {
    this->ipv4_tcppackets_sent = _arg;
    return *this;
  }
  Type & set__ipv4_tcp_errors(
    const float & _arg)
  {
    this->ipv4_tcp_errors = _arg;
    return *this;
  }
  Type & set__ipv4_udppackets_received(
    const float & _arg)
  {
    this->ipv4_udppackets_received = _arg;
    return *this;
  }
  Type & set__ipv4_udppackets_sent(
    const float & _arg)
  {
    this->ipv4_udppackets_sent = _arg;
    return *this;
  }
  Type & set__ipv4_udp_errors(
    const float & _arg)
  {
    this->ipv4_udp_errors = _arg;
    return *this;
  }
  Type & set__cpu_interrupts(
    const float & _arg)
  {
    this->cpu_interrupts = _arg;
    return *this;
  }
  Type & set__cpu_context_switches(
    const float & _arg)
  {
    this->cpu_context_switches = _arg;
    return *this;
  }
  Type & set__softnet_processed(
    const uint32_t & _arg)
  {
    this->softnet_processed = _arg;
    return *this;
  }
  Type & set__softnet_dropped(
    const uint32_t & _arg)
  {
    this->softnet_dropped = _arg;
    return *this;
  }
  Type & set__softnet_squeezed(
    const uint32_t & _arg)
  {
    this->softnet_squeezed = _arg;
    return *this;
  }
  Type & set__softnet_received_rps(
    const uint32_t & _arg)
  {
    this->softnet_received_rps = _arg;
    return *this;
  }
  Type & set__softnet_flow_limit_count(
    const uint32_t & _arg)
  {
    this->softnet_flow_limit_count = _arg;
    return *this;
  }
  Type & set__softirqs_hi(
    const uint64_t & _arg)
  {
    this->softirqs_hi = _arg;
    return *this;
  }
  Type & set__softirqs_timer(
    const uint64_t & _arg)
  {
    this->softirqs_timer = _arg;
    return *this;
  }
  Type & set__softirqs_net_tx(
    const uint64_t & _arg)
  {
    this->softirqs_net_tx = _arg;
    return *this;
  }
  Type & set__softirqs_net_rx(
    const uint64_t & _arg)
  {
    this->softirqs_net_rx = _arg;
    return *this;
  }
  Type & set__softirqs_block(
    const uint64_t & _arg)
  {
    this->softirqs_block = _arg;
    return *this;
  }
  Type & set__softirqs_irq_poll(
    const uint64_t & _arg)
  {
    this->softirqs_irq_poll = _arg;
    return *this;
  }
  Type & set__softirqs_tasklet(
    const uint64_t & _arg)
  {
    this->softirqs_tasklet = _arg;
    return *this;
  }
  Type & set__softirqs_sched(
    const uint64_t & _arg)
  {
    this->softirqs_sched = _arg;
    return *this;
  }
  Type & set__softirqs_hrtimer(
    const uint64_t & _arg)
  {
    this->softirqs_hrtimer = _arg;
    return *this;
  }
  Type & set__softirqs_rcu(
    const uint64_t & _arg)
  {
    this->softirqs_rcu = _arg;
    return *this;
  }
  Type & set__load1(
    const float & _arg)
  {
    this->load1 = _arg;
    return *this;
  }
  Type & set__load5(
    const float & _arg)
  {
    this->load5 = _arg;
    return *this;
  }
  Type & set__load15(
    const float & _arg)
  {
    this->load15 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_generic_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_msgs__msg__Status
    std::shared_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_msgs__msg__Status
    std::shared_ptr<hrim_generic_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->instance_id != other.instance_id) {
      return false;
    }
    if (this->system_cpu != other.system_cpu) {
      return false;
    }
    if (this->core_temperature != other.core_temperature) {
      return false;
    }
    if (this->system_ram_total != other.system_ram_total) {
      return false;
    }
    if (this->system_ram_used != other.system_ram_used) {
      return false;
    }
    if (this->system_ram_free != other.system_ram_free) {
      return false;
    }
    if (this->system_io_in != other.system_io_in) {
      return false;
    }
    if (this->system_io_out != other.system_io_out) {
      return false;
    }
    if (this->system_ipv4_ip != other.system_ipv4_ip) {
      return false;
    }
    if (this->system_ipv4_received != other.system_ipv4_received) {
      return false;
    }
    if (this->system_ipv4_sent != other.system_ipv4_sent) {
      return false;
    }
    if (this->ipv4_tcpsock != other.ipv4_tcpsock) {
      return false;
    }
    if (this->ipv4_tcppackets_received != other.ipv4_tcppackets_received) {
      return false;
    }
    if (this->ipv4_tcppackets_sent != other.ipv4_tcppackets_sent) {
      return false;
    }
    if (this->ipv4_tcp_errors != other.ipv4_tcp_errors) {
      return false;
    }
    if (this->ipv4_udppackets_received != other.ipv4_udppackets_received) {
      return false;
    }
    if (this->ipv4_udppackets_sent != other.ipv4_udppackets_sent) {
      return false;
    }
    if (this->ipv4_udp_errors != other.ipv4_udp_errors) {
      return false;
    }
    if (this->cpu_interrupts != other.cpu_interrupts) {
      return false;
    }
    if (this->cpu_context_switches != other.cpu_context_switches) {
      return false;
    }
    if (this->softnet_processed != other.softnet_processed) {
      return false;
    }
    if (this->softnet_dropped != other.softnet_dropped) {
      return false;
    }
    if (this->softnet_squeezed != other.softnet_squeezed) {
      return false;
    }
    if (this->softnet_received_rps != other.softnet_received_rps) {
      return false;
    }
    if (this->softnet_flow_limit_count != other.softnet_flow_limit_count) {
      return false;
    }
    if (this->softirqs_hi != other.softirqs_hi) {
      return false;
    }
    if (this->softirqs_timer != other.softirqs_timer) {
      return false;
    }
    if (this->softirqs_net_tx != other.softirqs_net_tx) {
      return false;
    }
    if (this->softirqs_net_rx != other.softirqs_net_rx) {
      return false;
    }
    if (this->softirqs_block != other.softirqs_block) {
      return false;
    }
    if (this->softirqs_irq_poll != other.softirqs_irq_poll) {
      return false;
    }
    if (this->softirqs_tasklet != other.softirqs_tasklet) {
      return false;
    }
    if (this->softirqs_sched != other.softirqs_sched) {
      return false;
    }
    if (this->softirqs_hrtimer != other.softirqs_hrtimer) {
      return false;
    }
    if (this->softirqs_rcu != other.softirqs_rcu) {
      return false;
    }
    if (this->load1 != other.load1) {
      return false;
    }
    if (this->load5 != other.load5) {
      return false;
    }
    if (this->load15 != other.load15) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  hrim_generic_msgs::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hrim_generic_msgs

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
