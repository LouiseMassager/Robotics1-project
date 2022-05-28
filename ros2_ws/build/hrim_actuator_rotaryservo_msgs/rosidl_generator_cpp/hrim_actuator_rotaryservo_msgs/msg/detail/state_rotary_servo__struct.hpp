// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/StateRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__STRUCT_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__STRUCT_HPP_

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
# define DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateRotaryServo_
{
  using Type = StateRotaryServo_<ContainerAllocator>;

  explicit StateRotaryServo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal = 0.0;
      this->position = 0.0;
      this->error = 0.0;
      this->velocity = 0.0;
      this->effort = 0.0;
      this->load = 0.0;
      this->moving = false;
      this->fault = 0;
      this->control_type = 0;
    }
  }

  explicit StateRotaryServo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal = 0.0;
      this->position = 0.0;
      this->error = 0.0;
      this->velocity = 0.0;
      this->effort = 0.0;
      this->load = 0.0;
      this->moving = false;
      this->fault = 0;
      this->control_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _goal_type =
    double;
  _goal_type goal;
  using _position_type =
    double;
  _position_type position;
  using _error_type =
    double;
  _error_type error;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _effort_type =
    double;
  _effort_type effort;
  using _load_type =
    double;
  _load_type load;
  using _moving_type =
    bool;
  _moving_type moving;
  using _fault_type =
    uint8_t;
  _fault_type fault;
  using _control_type_type =
    uint8_t;
  _control_type_type control_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__goal(
    const double & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__effort(
    const double & _arg)
  {
    this->effort = _arg;
    return *this;
  }
  Type & set__load(
    const double & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__moving(
    const bool & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__fault(
    const uint8_t & _arg)
  {
    this->fault = _arg;
    return *this;
  }
  Type & set__control_type(
    const uint8_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FAULT_NONE =
    0u;
  static constexpr uint8_t FAULT_CURRENT =
    1u;
  static constexpr uint8_t FAULT_TEMPERATURE =
    2u;
  static constexpr uint8_t FAULT_BUS_VOLTAGE =
    3u;
  static constexpr uint8_t FAULT_BRIDGE_DRIVER =
    4u;
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
    hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_msgs__msg__StateRotaryServo
    std::shared_ptr<hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateRotaryServo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    if (this->load != other.load) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    if (this->fault != other.fault) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateRotaryServo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateRotaryServo_

// alias to use template instance with default allocator
using StateRotaryServo =
  hrim_actuator_rotaryservo_msgs::msg::StateRotaryServo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::FAULT_NONE;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::FAULT_CURRENT;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::FAULT_TEMPERATURE;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::FAULT_BUS_VOLTAGE;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::FAULT_BRIDGE_DRIVER;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_VELOCITY_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t StateRotaryServo_<ContainerAllocator>::CONTROL_TYPE_POSITION_VELOCITY_EFFORT;

}  // namespace msg

}  // namespace hrim_actuator_rotaryservo_msgs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__STATE_ROTARY_SERVO__STRUCT_HPP_
