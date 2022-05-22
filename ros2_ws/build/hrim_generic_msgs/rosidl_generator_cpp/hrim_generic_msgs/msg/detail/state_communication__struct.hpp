// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_generic_msgs:msg/StateCommunication.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__STRUCT_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__STRUCT_HPP_

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
# define DEPRECATED__hrim_generic_msgs__msg__StateCommunication __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_msgs__msg__StateCommunication __declspec(deprecated)
#endif

namespace hrim_generic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateCommunication_
{
  using Type = StateCommunication_<ContainerAllocator>;

  explicit StateCommunication_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_rate = 0.0;
      this->size_msgs = 0.0;
    }
  }

  explicit StateCommunication_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_rate = 0.0;
      this->size_msgs = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _comm_rate_type =
    double;
  _comm_rate_type comm_rate;
  using _size_msgs_type =
    double;
  _size_msgs_type size_msgs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__comm_rate(
    const double & _arg)
  {
    this->comm_rate = _arg;
    return *this;
  }
  Type & set__size_msgs(
    const double & _arg)
  {
    this->size_msgs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_msgs__msg__StateCommunication
    std::shared_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_msgs__msg__StateCommunication
    std::shared_ptr<hrim_generic_msgs::msg::StateCommunication_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateCommunication_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->comm_rate != other.comm_rate) {
      return false;
    }
    if (this->size_msgs != other.size_msgs) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateCommunication_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateCommunication_

// alias to use template instance with default allocator
using StateCommunication =
  hrim_generic_msgs::msg::StateCommunication_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hrim_generic_msgs

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__STATE_COMMUNICATION__STRUCT_HPP_
