// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__STRUCT_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpecsRotaryServo_Request_
{
  using Type = SpecsRotaryServo_Request_<ContainerAllocator>;

  explicit SpecsRotaryServo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SpecsRotaryServo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Request
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecsRotaryServo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecsRotaryServo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecsRotaryServo_Request_

// alias to use template instance with default allocator
using SpecsRotaryServo_Request =
  hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpecsRotaryServo_Response_
{
  using Type = SpecsRotaryServo_Response_<ContainerAllocator>;

  explicit SpecsRotaryServo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0;
      this->range_min = 0.0;
      this->range_max = 0.0;
      this->precision = 0.0;
      this->rated_speed = 0.0;
      this->reachable_speed = 0.0;
      this->rated_torque = 0.0;
      this->reachable_torque = 0.0;
      this->temperature_range_min = 0.0;
      this->temperature_range_max = 0.0;
    }
  }

  explicit SpecsRotaryServo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0;
      this->range_min = 0.0;
      this->range_max = 0.0;
      this->precision = 0.0;
      this->rated_speed = 0.0;
      this->reachable_speed = 0.0;
      this->rated_torque = 0.0;
      this->reachable_torque = 0.0;
      this->temperature_range_min = 0.0;
      this->temperature_range_max = 0.0;
    }
  }

  // field types and members
  using _control_type_type =
    uint8_t;
  _control_type_type control_type;
  using _range_min_type =
    double;
  _range_min_type range_min;
  using _range_max_type =
    double;
  _range_max_type range_max;
  using _precision_type =
    double;
  _precision_type precision;
  using _rated_speed_type =
    double;
  _rated_speed_type rated_speed;
  using _reachable_speed_type =
    double;
  _reachable_speed_type reachable_speed;
  using _rated_torque_type =
    double;
  _rated_torque_type rated_torque;
  using _reachable_torque_type =
    double;
  _reachable_torque_type reachable_torque;
  using _temperature_range_min_type =
    double;
  _temperature_range_min_type temperature_range_min;
  using _temperature_range_max_type =
    double;
  _temperature_range_max_type temperature_range_max;

  // setters for named parameter idiom
  Type & set__control_type(
    const uint8_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__range_min(
    const double & _arg)
  {
    this->range_min = _arg;
    return *this;
  }
  Type & set__range_max(
    const double & _arg)
  {
    this->range_max = _arg;
    return *this;
  }
  Type & set__precision(
    const double & _arg)
  {
    this->precision = _arg;
    return *this;
  }
  Type & set__rated_speed(
    const double & _arg)
  {
    this->rated_speed = _arg;
    return *this;
  }
  Type & set__reachable_speed(
    const double & _arg)
  {
    this->reachable_speed = _arg;
    return *this;
  }
  Type & set__rated_torque(
    const double & _arg)
  {
    this->rated_torque = _arg;
    return *this;
  }
  Type & set__reachable_torque(
    const double & _arg)
  {
    this->reachable_torque = _arg;
    return *this;
  }
  Type & set__temperature_range_min(
    const double & _arg)
  {
    this->temperature_range_min = _arg;
    return *this;
  }
  Type & set__temperature_range_max(
    const double & _arg)
  {
    this->temperature_range_max = _arg;
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
    hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__SpecsRotaryServo_Response
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecsRotaryServo_Response_ & other) const
  {
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->range_min != other.range_min) {
      return false;
    }
    if (this->range_max != other.range_max) {
      return false;
    }
    if (this->precision != other.precision) {
      return false;
    }
    if (this->rated_speed != other.rated_speed) {
      return false;
    }
    if (this->reachable_speed != other.reachable_speed) {
      return false;
    }
    if (this->rated_torque != other.rated_torque) {
      return false;
    }
    if (this->reachable_torque != other.reachable_torque) {
      return false;
    }
    if (this->temperature_range_min != other.temperature_range_min) {
      return false;
    }
    if (this->temperature_range_max != other.temperature_range_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecsRotaryServo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecsRotaryServo_Response_

// alias to use template instance with default allocator
using SpecsRotaryServo_Response =
  hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_POSITION;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_POSITION_VELOCITY;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_POSITION_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_VELOCITY_EFFORT;
template<typename ContainerAllocator>
constexpr uint8_t SpecsRotaryServo_Response_<ContainerAllocator>::CONTROL_TYPE_POSITION_VELOCITY_EFFORT;

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

struct SpecsRotaryServo
{
  using Request = hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Request;
  using Response = hrim_actuator_rotaryservo_srvs::srv::SpecsRotaryServo_Response;
};

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__SPECS_ROTARY_SERVO__STRUCT_HPP_
