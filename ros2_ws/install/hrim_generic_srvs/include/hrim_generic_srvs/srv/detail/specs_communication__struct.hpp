// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_generic_srvs:srv/SpecsCommunication.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__STRUCT_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Request __declspec(deprecated)
#endif

namespace hrim_generic_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpecsCommunication_Request_
{
  using Type = SpecsCommunication_Request_<ContainerAllocator>;

  explicit SpecsCommunication_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SpecsCommunication_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Request
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Request
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecsCommunication_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecsCommunication_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecsCommunication_Request_

// alias to use template instance with default allocator
using SpecsCommunication_Request =
  hrim_generic_srvs::srv::SpecsCommunication_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_generic_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Response __declspec(deprecated)
#endif

namespace hrim_generic_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpecsCommunication_Response_
{
  using Type = SpecsCommunication_Response_<ContainerAllocator>;

  explicit SpecsCommunication_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_comm_rate = 0.0;
      this->max_comm_rate = 0.0;
      this->max_size_msgs = 0.0;
    }
  }

  explicit SpecsCommunication_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_comm_rate = 0.0;
      this->max_comm_rate = 0.0;
      this->max_size_msgs = 0.0;
    }
  }

  // field types and members
  using _min_comm_rate_type =
    double;
  _min_comm_rate_type min_comm_rate;
  using _max_comm_rate_type =
    double;
  _max_comm_rate_type max_comm_rate;
  using _max_size_msgs_type =
    double;
  _max_size_msgs_type max_size_msgs;

  // setters for named parameter idiom
  Type & set__min_comm_rate(
    const double & _arg)
  {
    this->min_comm_rate = _arg;
    return *this;
  }
  Type & set__max_comm_rate(
    const double & _arg)
  {
    this->max_comm_rate = _arg;
    return *this;
  }
  Type & set__max_size_msgs(
    const double & _arg)
  {
    this->max_size_msgs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Response
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_srvs__srv__SpecsCommunication_Response
    std::shared_ptr<hrim_generic_srvs::srv::SpecsCommunication_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecsCommunication_Response_ & other) const
  {
    if (this->min_comm_rate != other.min_comm_rate) {
      return false;
    }
    if (this->max_comm_rate != other.max_comm_rate) {
      return false;
    }
    if (this->max_size_msgs != other.max_size_msgs) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecsCommunication_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecsCommunication_Response_

// alias to use template instance with default allocator
using SpecsCommunication_Response =
  hrim_generic_srvs::srv::SpecsCommunication_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_generic_srvs

namespace hrim_generic_srvs
{

namespace srv
{

struct SpecsCommunication
{
  using Request = hrim_generic_srvs::srv::SpecsCommunication_Request;
  using Response = hrim_generic_srvs::srv::SpecsCommunication_Response;
};

}  // namespace srv

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SPECS_COMMUNICATION__STRUCT_HPP_
