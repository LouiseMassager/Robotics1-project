// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsVacuumGripper.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__STRUCT_HPP_
#define HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpecsVacuumGripper_Request_
{
  using Type = SpecsVacuumGripper_Request_<ContainerAllocator>;

  explicit SpecsVacuumGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SpecsVacuumGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Request
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecsVacuumGripper_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecsVacuumGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecsVacuumGripper_Request_

// alias to use template instance with default allocator
using SpecsVacuumGripper_Request =
  hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpecsVacuumGripper_Response_
{
  using Type = SpecsVacuumGripper_Response_<ContainerAllocator>;

  explicit SpecsVacuumGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cycle_time = 0.0f;
      this->max_force = 0.0f;
      this->max_payload = 0.0f;
    }
  }

  explicit SpecsVacuumGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cycle_time = 0.0f;
      this->max_force = 0.0f;
      this->max_payload = 0.0f;
    }
  }

  // field types and members
  using _cycle_time_type =
    float;
  _cycle_time_type cycle_time;
  using _max_force_type =
    float;
  _max_force_type max_force;
  using _max_payload_type =
    float;
  _max_payload_type max_payload;

  // setters for named parameter idiom
  Type & set__cycle_time(
    const float & _arg)
  {
    this->cycle_time = _arg;
    return *this;
  }
  Type & set__max_force(
    const float & _arg)
  {
    this->max_force = _arg;
    return *this;
  }
  Type & set__max_payload(
    const float & _arg)
  {
    this->max_payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_srvs__srv__SpecsVacuumGripper_Response
    std::shared_ptr<hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecsVacuumGripper_Response_ & other) const
  {
    if (this->cycle_time != other.cycle_time) {
      return false;
    }
    if (this->max_force != other.max_force) {
      return false;
    }
    if (this->max_payload != other.max_payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecsVacuumGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecsVacuumGripper_Response_

// alias to use template instance with default allocator
using SpecsVacuumGripper_Response =
  hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

struct SpecsVacuumGripper
{
  using Request = hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Request;
  using Response = hrim_actuator_gripper_srvs::srv::SpecsVacuumGripper_Response;
};

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

#endif  // HRIM_ACTUATOR_GRIPPER_SRVS__SRV__DETAIL__SPECS_VACUUM_GRIPPER__STRUCT_HPP_
