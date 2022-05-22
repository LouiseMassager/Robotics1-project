// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_rotaryservo_srvs:srv/OpenCloseBrake.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__STRUCT_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenCloseBrake_Request_
{
  using Type = OpenCloseBrake_Request_<ContainerAllocator>;

  explicit OpenCloseBrake_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->open = false;
    }
  }

  explicit OpenCloseBrake_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->open = false;
    }
  }

  // field types and members
  using _open_type =
    bool;
  _open_type open;

  // setters for named parameter idiom
  Type & set__open(
    const bool & _arg)
  {
    this->open = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Request
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenCloseBrake_Request_ & other) const
  {
    if (this->open != other.open) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenCloseBrake_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenCloseBrake_Request_

// alias to use template instance with default allocator
using OpenCloseBrake_Request =
  hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenCloseBrake_Response_
{
  using Type = OpenCloseBrake_Response_<ContainerAllocator>;

  explicit OpenCloseBrake_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit OpenCloseBrake_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_srvs__srv__OpenCloseBrake_Response
    std::shared_ptr<hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenCloseBrake_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenCloseBrake_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenCloseBrake_Response_

// alias to use template instance with default allocator
using OpenCloseBrake_Response =
  hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

namespace hrim_actuator_rotaryservo_srvs
{

namespace srv
{

struct OpenCloseBrake
{
  using Request = hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Request;
  using Response = hrim_actuator_rotaryservo_srvs::srv::OpenCloseBrake_Response;
};

}  // namespace srv

}  // namespace hrim_actuator_rotaryservo_srvs

#endif  // HRIM_ACTUATOR_ROTARYSERVO_SRVS__SRV__DETAIL__OPEN_CLOSE_BRAKE__STRUCT_HPP_
