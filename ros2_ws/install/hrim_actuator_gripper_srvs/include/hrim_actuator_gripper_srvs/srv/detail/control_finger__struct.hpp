// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_FINGER__STRUCT_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_FINGER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Request __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlFinger_Request_
{
  using Type = ControlFinger_Request_<ContainerAllocator>;

  explicit ControlFinger_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_linearposition = 0.0f;
      this->goal_angularposition = 0.0f;
      this->goal_effort = 0.0f;
      this->goal_velocity = 0.0f;
      this->goal_acceleration = 0.0f;
    }
  }

  explicit ControlFinger_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_linearposition = 0.0f;
      this->goal_angularposition = 0.0f;
      this->goal_effort = 0.0f;
      this->goal_velocity = 0.0f;
      this->goal_acceleration = 0.0f;
    }
  }

  // field types and members
  using _goal_linearposition_type =
    float;
  _goal_linearposition_type goal_linearposition;
  using _goal_angularposition_type =
    float;
  _goal_angularposition_type goal_angularposition;
  using _goal_effort_type =
    float;
  _goal_effort_type goal_effort;
  using _goal_velocity_type =
    float;
  _goal_velocity_type goal_velocity;
  using _goal_acceleration_type =
    float;
  _goal_acceleration_type goal_acceleration;

  // setters for named parameter idiom
  Type & set__goal_linearposition(
    const float & _arg)
  {
    this->goal_linearposition = _arg;
    return *this;
  }
  Type & set__goal_angularposition(
    const float & _arg)
  {
    this->goal_angularposition = _arg;
    return *this;
  }
  Type & set__goal_effort(
    const float & _arg)
  {
    this->goal_effort = _arg;
    return *this;
  }
  Type & set__goal_velocity(
    const float & _arg)
  {
    this->goal_velocity = _arg;
    return *this;
  }
  Type & set__goal_acceleration(
    const float & _arg)
  {
    this->goal_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Request
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Request
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlFinger_Request_ & other) const
  {
    if (this->goal_linearposition != other.goal_linearposition) {
      return false;
    }
    if (this->goal_angularposition != other.goal_angularposition) {
      return false;
    }
    if (this->goal_effort != other.goal_effort) {
      return false;
    }
    if (this->goal_velocity != other.goal_velocity) {
      return false;
    }
    if (this->goal_acceleration != other.goal_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlFinger_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlFinger_Request_

// alias to use template instance with default allocator
using ControlFinger_Request =
  hrim_actuator_gripper_srvs::srv::ControlFinger_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Response __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlFinger_Response_
{
  using Type = ControlFinger_Response_<ContainerAllocator>;

  explicit ControlFinger_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_accepted = false;
    }
  }

  explicit ControlFinger_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_accepted = false;
    }
  }

  // field types and members
  using _goal_accepted_type =
    bool;
  _goal_accepted_type goal_accepted;

  // setters for named parameter idiom
  Type & set__goal_accepted(
    const bool & _arg)
  {
    this->goal_accepted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Response
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlFinger_Response
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlFinger_Response_ & other) const
  {
    if (this->goal_accepted != other.goal_accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlFinger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlFinger_Response_

// alias to use template instance with default allocator
using ControlFinger_Response =
  hrim_actuator_gripper_srvs::srv::ControlFinger_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

struct ControlFinger
{
  using Request = hrim_actuator_gripper_srvs::srv::ControlFinger_Request;
  using Response = hrim_actuator_gripper_srvs::srv::ControlFinger_Response;
};

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_FINGER__STRUCT_HPP_
