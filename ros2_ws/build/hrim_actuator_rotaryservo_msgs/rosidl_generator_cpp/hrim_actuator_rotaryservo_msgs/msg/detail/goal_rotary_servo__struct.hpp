// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/GoalRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__STRUCT_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__STRUCT_HPP_

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
# define DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalRotaryServo_
{
  using Type = GoalRotaryServo_<ContainerAllocator>;

  explicit GoalRotaryServo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0;
      this->position = 0.0;
      this->velocity = 0.0f;
      this->acceleration = 0.0f;
      this->effort = 0.0f;
    }
  }

  explicit GoalRotaryServo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0;
      this->position = 0.0;
      this->velocity = 0.0f;
      this->acceleration = 0.0f;
      this->effort = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _control_type_type =
    uint8_t;
  _control_type_type control_type;
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _effort_type =
    float;
  _effort_type effort;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__control_type(
    const uint8_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__effort(
    const float & _arg)
  {
    this->effort = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_TYPE_NONE =
    0u;
  static constexpr uint8_t CONTROL_TYPE_POSITION =
    1u;
  static constexpr uint8_t CONTROL_TYPE_EFFORT =
    2u;
  static constexpr uint8_t CONTROL_TYPE_VELOCITY =
    3u;
  static constexpr uint8_t CONTROL_TYPE_POSITION_VELOCITY =
    4u;
  static constexpr uint8_t CONTROL_TYPE_POSITION_EFFORT =
    5u;
  static constexpr uint8_t CONTROL_TYPE_VELOCITY_EFFORT =
    6u;
  static constexpr uint8_t CONTROL_TYPE_POSITION_VELOCITY_EFFORT =
    7u;

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalRotaryServo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalRotaryServo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalRotaryServo_

// alias to use template instance with default allocator
using GoalRotaryServo =
  hrim_actuator_rotaryservo_msgs::msg::GoalRotaryServo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_VELOCITY_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t GoalRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION_VELOCITY_EFFORT;

}  // namespace msg

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__STRUCT_HPP_
