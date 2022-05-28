// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_generic_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include "hrim_generic_msgs/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_generic_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_load15
{
public:
  explicit Init_Status_load15(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::hrim_generic_msgs::msg::Status load15(::hrim_generic_msgs::msg::Status::_load15_type arg)
  {
    msg_.load15 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_load5
{
public:
  explicit Init_Status_load5(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_load15 load5(::hrim_generic_msgs::msg::Status::_load5_type arg)
  {
    msg_.load5 = std::move(arg);
    return Init_Status_load15(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_load1
{
public:
  explicit Init_Status_load1(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_load5 load1(::hrim_generic_msgs::msg::Status::_load1_type arg)
  {
    msg_.load1 = std::move(arg);
    return Init_Status_load5(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_rcu
{
public:
  explicit Init_Status_softirqs_rcu(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_load1 softirqs_rcu(::hrim_generic_msgs::msg::Status::_softirqs_rcu_type arg)
  {
    msg_.softirqs_rcu = std::move(arg);
    return Init_Status_load1(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_hrtimer
{
public:
  explicit Init_Status_softirqs_hrtimer(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_rcu softirqs_hrtimer(::hrim_generic_msgs::msg::Status::_softirqs_hrtimer_type arg)
  {
    msg_.softirqs_hrtimer = std::move(arg);
    return Init_Status_softirqs_rcu(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_sched
{
public:
  explicit Init_Status_softirqs_sched(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_hrtimer softirqs_sched(::hrim_generic_msgs::msg::Status::_softirqs_sched_type arg)
  {
    msg_.softirqs_sched = std::move(arg);
    return Init_Status_softirqs_hrtimer(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_tasklet
{
public:
  explicit Init_Status_softirqs_tasklet(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_sched softirqs_tasklet(::hrim_generic_msgs::msg::Status::_softirqs_tasklet_type arg)
  {
    msg_.softirqs_tasklet = std::move(arg);
    return Init_Status_softirqs_sched(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_irq_poll
{
public:
  explicit Init_Status_softirqs_irq_poll(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_tasklet softirqs_irq_poll(::hrim_generic_msgs::msg::Status::_softirqs_irq_poll_type arg)
  {
    msg_.softirqs_irq_poll = std::move(arg);
    return Init_Status_softirqs_tasklet(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_block
{
public:
  explicit Init_Status_softirqs_block(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_irq_poll softirqs_block(::hrim_generic_msgs::msg::Status::_softirqs_block_type arg)
  {
    msg_.softirqs_block = std::move(arg);
    return Init_Status_softirqs_irq_poll(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_net_rx
{
public:
  explicit Init_Status_softirqs_net_rx(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_block softirqs_net_rx(::hrim_generic_msgs::msg::Status::_softirqs_net_rx_type arg)
  {
    msg_.softirqs_net_rx = std::move(arg);
    return Init_Status_softirqs_block(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_net_tx
{
public:
  explicit Init_Status_softirqs_net_tx(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_net_rx softirqs_net_tx(::hrim_generic_msgs::msg::Status::_softirqs_net_tx_type arg)
  {
    msg_.softirqs_net_tx = std::move(arg);
    return Init_Status_softirqs_net_rx(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_timer
{
public:
  explicit Init_Status_softirqs_timer(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_net_tx softirqs_timer(::hrim_generic_msgs::msg::Status::_softirqs_timer_type arg)
  {
    msg_.softirqs_timer = std::move(arg);
    return Init_Status_softirqs_net_tx(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softirqs_hi
{
public:
  explicit Init_Status_softirqs_hi(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_timer softirqs_hi(::hrim_generic_msgs::msg::Status::_softirqs_hi_type arg)
  {
    msg_.softirqs_hi = std::move(arg);
    return Init_Status_softirqs_timer(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softnet_flow_limit_count
{
public:
  explicit Init_Status_softnet_flow_limit_count(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softirqs_hi softnet_flow_limit_count(::hrim_generic_msgs::msg::Status::_softnet_flow_limit_count_type arg)
  {
    msg_.softnet_flow_limit_count = std::move(arg);
    return Init_Status_softirqs_hi(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softnet_received_rps
{
public:
  explicit Init_Status_softnet_received_rps(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softnet_flow_limit_count softnet_received_rps(::hrim_generic_msgs::msg::Status::_softnet_received_rps_type arg)
  {
    msg_.softnet_received_rps = std::move(arg);
    return Init_Status_softnet_flow_limit_count(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softnet_squeezed
{
public:
  explicit Init_Status_softnet_squeezed(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softnet_received_rps softnet_squeezed(::hrim_generic_msgs::msg::Status::_softnet_squeezed_type arg)
  {
    msg_.softnet_squeezed = std::move(arg);
    return Init_Status_softnet_received_rps(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softnet_dropped
{
public:
  explicit Init_Status_softnet_dropped(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softnet_squeezed softnet_dropped(::hrim_generic_msgs::msg::Status::_softnet_dropped_type arg)
  {
    msg_.softnet_dropped = std::move(arg);
    return Init_Status_softnet_squeezed(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_softnet_processed
{
public:
  explicit Init_Status_softnet_processed(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softnet_dropped softnet_processed(::hrim_generic_msgs::msg::Status::_softnet_processed_type arg)
  {
    msg_.softnet_processed = std::move(arg);
    return Init_Status_softnet_dropped(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_cpu_context_switches
{
public:
  explicit Init_Status_cpu_context_switches(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_softnet_processed cpu_context_switches(::hrim_generic_msgs::msg::Status::_cpu_context_switches_type arg)
  {
    msg_.cpu_context_switches = std::move(arg);
    return Init_Status_softnet_processed(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_cpu_interrupts
{
public:
  explicit Init_Status_cpu_interrupts(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_cpu_context_switches cpu_interrupts(::hrim_generic_msgs::msg::Status::_cpu_interrupts_type arg)
  {
    msg_.cpu_interrupts = std::move(arg);
    return Init_Status_cpu_context_switches(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_udp_errors
{
public:
  explicit Init_Status_ipv4_udp_errors(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_cpu_interrupts ipv4_udp_errors(::hrim_generic_msgs::msg::Status::_ipv4_udp_errors_type arg)
  {
    msg_.ipv4_udp_errors = std::move(arg);
    return Init_Status_cpu_interrupts(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_udppackets_sent
{
public:
  explicit Init_Status_ipv4_udppackets_sent(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_udp_errors ipv4_udppackets_sent(::hrim_generic_msgs::msg::Status::_ipv4_udppackets_sent_type arg)
  {
    msg_.ipv4_udppackets_sent = std::move(arg);
    return Init_Status_ipv4_udp_errors(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_udppackets_received
{
public:
  explicit Init_Status_ipv4_udppackets_received(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_udppackets_sent ipv4_udppackets_received(::hrim_generic_msgs::msg::Status::_ipv4_udppackets_received_type arg)
  {
    msg_.ipv4_udppackets_received = std::move(arg);
    return Init_Status_ipv4_udppackets_sent(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_tcp_errors
{
public:
  explicit Init_Status_ipv4_tcp_errors(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_udppackets_received ipv4_tcp_errors(::hrim_generic_msgs::msg::Status::_ipv4_tcp_errors_type arg)
  {
    msg_.ipv4_tcp_errors = std::move(arg);
    return Init_Status_ipv4_udppackets_received(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_tcppackets_sent
{
public:
  explicit Init_Status_ipv4_tcppackets_sent(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_tcp_errors ipv4_tcppackets_sent(::hrim_generic_msgs::msg::Status::_ipv4_tcppackets_sent_type arg)
  {
    msg_.ipv4_tcppackets_sent = std::move(arg);
    return Init_Status_ipv4_tcp_errors(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_tcppackets_received
{
public:
  explicit Init_Status_ipv4_tcppackets_received(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_tcppackets_sent ipv4_tcppackets_received(::hrim_generic_msgs::msg::Status::_ipv4_tcppackets_received_type arg)
  {
    msg_.ipv4_tcppackets_received = std::move(arg);
    return Init_Status_ipv4_tcppackets_sent(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_ipv4_tcpsock
{
public:
  explicit Init_Status_ipv4_tcpsock(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_tcppackets_received ipv4_tcpsock(::hrim_generic_msgs::msg::Status::_ipv4_tcpsock_type arg)
  {
    msg_.ipv4_tcpsock = std::move(arg);
    return Init_Status_ipv4_tcppackets_received(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_ipv4_sent
{
public:
  explicit Init_Status_system_ipv4_sent(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ipv4_tcpsock system_ipv4_sent(::hrim_generic_msgs::msg::Status::_system_ipv4_sent_type arg)
  {
    msg_.system_ipv4_sent = std::move(arg);
    return Init_Status_ipv4_tcpsock(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_ipv4_received
{
public:
  explicit Init_Status_system_ipv4_received(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_ipv4_sent system_ipv4_received(::hrim_generic_msgs::msg::Status::_system_ipv4_received_type arg)
  {
    msg_.system_ipv4_received = std::move(arg);
    return Init_Status_system_ipv4_sent(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_ipv4_ip
{
public:
  explicit Init_Status_system_ipv4_ip(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_ipv4_received system_ipv4_ip(::hrim_generic_msgs::msg::Status::_system_ipv4_ip_type arg)
  {
    msg_.system_ipv4_ip = std::move(arg);
    return Init_Status_system_ipv4_received(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_io_out
{
public:
  explicit Init_Status_system_io_out(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_ipv4_ip system_io_out(::hrim_generic_msgs::msg::Status::_system_io_out_type arg)
  {
    msg_.system_io_out = std::move(arg);
    return Init_Status_system_ipv4_ip(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_io_in
{
public:
  explicit Init_Status_system_io_in(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_io_out system_io_in(::hrim_generic_msgs::msg::Status::_system_io_in_type arg)
  {
    msg_.system_io_in = std::move(arg);
    return Init_Status_system_io_out(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_ram_free
{
public:
  explicit Init_Status_system_ram_free(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_io_in system_ram_free(::hrim_generic_msgs::msg::Status::_system_ram_free_type arg)
  {
    msg_.system_ram_free = std::move(arg);
    return Init_Status_system_io_in(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_ram_used
{
public:
  explicit Init_Status_system_ram_used(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_ram_free system_ram_used(::hrim_generic_msgs::msg::Status::_system_ram_used_type arg)
  {
    msg_.system_ram_used = std::move(arg);
    return Init_Status_system_ram_free(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_ram_total
{
public:
  explicit Init_Status_system_ram_total(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_ram_used system_ram_total(::hrim_generic_msgs::msg::Status::_system_ram_total_type arg)
  {
    msg_.system_ram_total = std::move(arg);
    return Init_Status_system_ram_used(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_core_temperature
{
public:
  explicit Init_Status_core_temperature(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_ram_total core_temperature(::hrim_generic_msgs::msg::Status::_core_temperature_type arg)
  {
    msg_.core_temperature = std::move(arg);
    return Init_Status_system_ram_total(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_system_cpu
{
public:
  explicit Init_Status_system_cpu(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_core_temperature system_cpu(::hrim_generic_msgs::msg::Status::_system_cpu_type arg)
  {
    msg_.system_cpu = std::move(arg);
    return Init_Status_core_temperature(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_instance_id
{
public:
  explicit Init_Status_instance_id(::hrim_generic_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_system_cpu instance_id(::hrim_generic_msgs::msg::Status::_instance_id_type arg)
  {
    msg_.instance_id = std::move(arg);
    return Init_Status_system_cpu(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

class Init_Status_header
{
public:
  Init_Status_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_instance_id header(::hrim_generic_msgs::msg::Status::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Status_instance_id(msg_);
  }

private:
  ::hrim_generic_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_generic_msgs::msg::Status>()
{
  return hrim_generic_msgs::msg::builder::Init_Status_header();
}

}  // namespace hrim_generic_msgs

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
