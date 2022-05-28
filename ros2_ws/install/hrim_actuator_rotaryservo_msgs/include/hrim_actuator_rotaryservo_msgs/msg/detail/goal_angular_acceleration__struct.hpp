// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/GoalAngularAcceleration.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ANGULAR_ACCELERATION__STRUCT_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ANGULAR_ACCELERATION__STRUCT_HPP_

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
# define DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalAngularAcceleration_
{
  using Type = GoalAngularAcceleration_<ContainerAllocator>;

  explicit GoalAngularAcceleration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
    }
  }

  explicit GoalAngularAcceleration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalAngularAcceleration
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalAngularAcceleration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalAngularAcceleration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalAngularAcceleration_

// alias to use template instance with default allocator
using GoalAngularAcceleration =
  hrim_actuator_rotaryservo_msgs::msg::GoalAngularAcceleration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ANGULAR_ACCELERATION__STRUCT_HPP_
