// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_generic_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__STRUCT_HPP_
#define HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__STRUCT_HPP_

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
# define DEPRECATED__hrim_generic_msgs__msg__Power __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_msgs__msg__Power __declspec(deprecated)
#endif

namespace hrim_generic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Power_
{
  using Type = Power_<ContainerAllocator>;

  explicit Power_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current_consumption = 0.0f;
      this->current_surplus = 0.0f;
      this->power_consumption = 0.0f;
      this->power_surplus = 0.0f;
    }
  }

  explicit Power_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current_consumption = 0.0f;
      this->current_surplus = 0.0f;
      this->power_consumption = 0.0f;
      this->power_surplus = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_consumption_type =
    float;
  _current_consumption_type current_consumption;
  using _current_surplus_type =
    float;
  _current_surplus_type current_surplus;
  using _power_consumption_type =
    float;
  _power_consumption_type power_consumption;
  using _power_surplus_type =
    float;
  _power_surplus_type power_surplus;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current_consumption(
    const float & _arg)
  {
    this->current_consumption = _arg;
    return *this;
  }
  Type & set__current_surplus(
    const float & _arg)
  {
    this->current_surplus = _arg;
    return *this;
  }
  Type & set__power_consumption(
    const float & _arg)
  {
    this->power_consumption = _arg;
    return *this;
  }
  Type & set__power_surplus(
    const float & _arg)
  {
    this->power_surplus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_generic_msgs::msg::Power_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_msgs::msg::Power_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_msgs::msg::Power_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_msgs::msg::Power_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_msgs__msg__Power
    std::shared_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_msgs__msg__Power
    std::shared_ptr<hrim_generic_msgs::msg::Power_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Power_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current_consumption != other.current_consumption) {
      return false;
    }
    if (this->current_surplus != other.current_surplus) {
      return false;
    }
    if (this->power_consumption != other.power_consumption) {
      return false;
    }
    if (this->power_surplus != other.power_surplus) {
      return false;
    }
    return true;
  }
  bool operator!=(const Power_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Power_

// alias to use template instance with default allocator
using Power =
  hrim_generic_msgs::msg::Power_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hrim_generic_msgs

#endif  // HRIM_GENERIC_MSGS__MSG__DETAIL__POWER__STRUCT_HPP_
