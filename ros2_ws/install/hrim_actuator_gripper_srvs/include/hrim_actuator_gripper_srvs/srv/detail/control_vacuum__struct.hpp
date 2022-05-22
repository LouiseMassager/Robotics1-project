// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__STRUCT_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Request __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlVacuum_Request_
{
  using Type = ControlVacuum_Request_<ContainerAllocator>;

  explicit ControlVacuum_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_percentage_suction = 0.0f;
    }
  }

  explicit ControlVacuum_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_percentage_suction = 0.0f;
    }
  }

  // field types and members
  using _goal_percentage_suction_type =
    float;
  _goal_percentage_suction_type goal_percentage_suction;

  // setters for named parameter idiom
  Type & set__goal_percentage_suction(
    const float & _arg)
  {
    this->goal_percentage_suction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Request
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Request
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlVacuum_Request_ & other) const
  {
    if (this->goal_percentage_suction != other.goal_percentage_suction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlVacuum_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlVacuum_Request_

// alias to use template instance with default allocator
using ControlVacuum_Request =
  hrim_actuator_gripper_srvs::srv::ControlVacuum_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Response __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlVacuum_Response_
{
  using Type = ControlVacuum_Response_<ContainerAllocator>;

  explicit ControlVacuum_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_accepted = false;
    }
  }

  explicit ControlVacuum_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Response
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__ControlVacuum_Response
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlVacuum_Response_ & other) const
  {
    if (this->goal_accepted != other.goal_accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlVacuum_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlVacuum_Response_

// alias to use template instance with default allocator
using ControlVacuum_Response =
  hrim_actuator_gripper_srvs::srv::ControlVacuum_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

struct ControlVacuum
{
  using Request = hrim_actuator_gripper_srvs::srv::ControlVacuum_Request;
  using Response = hrim_actuator_gripper_srvs::srv::ControlVacuum_Response;
};

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__CONTROL_VACUUM__STRUCT_HPP_
