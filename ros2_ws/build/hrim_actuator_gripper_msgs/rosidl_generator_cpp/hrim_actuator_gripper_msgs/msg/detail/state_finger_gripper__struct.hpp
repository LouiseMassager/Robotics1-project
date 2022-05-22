// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/StateFingerGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__STRUCT_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__STRUCT_HPP_

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
# define DEPRECATED__hrim_actuator_gripper_msgs__msg__StateFingerGripper __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_msgs__msg__StateFingerGripper __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateFingerGripper_
{
  using Type = StateFingerGripper_<ContainerAllocator>;

  explicit StateFingerGripper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_position = 0.0f;
      this->linear_position = 0.0f;
    }
  }

  explicit StateFingerGripper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_position = 0.0f;
      this->linear_position = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_position_type =
    float;
  _angular_position_type angular_position;
  using _linear_position_type =
    float;
  _linear_position_type linear_position;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_position(
    const float & _arg)
  {
    this->angular_position = _arg;
    return *this;
  }
  Type & set__linear_position(
    const float & _arg)
  {
    this->linear_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_msgs__msg__StateFingerGripper
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_msgs__msg__StateFingerGripper
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::StateFingerGripper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateFingerGripper_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_position != other.angular_position) {
      return false;
    }
    if (this->linear_position != other.linear_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateFingerGripper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateFingerGripper_

// alias to use template instance with default allocator
using StateFingerGripper =
  hrim_actuator_gripper_msgs::msg::StateFingerGripper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__STATE_FINGER_GRIPPER__STRUCT_HPP_
