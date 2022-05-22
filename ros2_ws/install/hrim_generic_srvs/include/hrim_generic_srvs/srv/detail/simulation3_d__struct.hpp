// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_generic_srvs:srv/Simulation3D.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__STRUCT_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Request __declspec(deprecated)
#endif

namespace hrim_generic_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Simulation3D_Request_
{
  using Type = Simulation3D_Request_<ContainerAllocator>;

  explicit Simulation3D_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Simulation3D_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Request
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Request
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Simulation3D_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Simulation3D_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Simulation3D_Request_

// alias to use template instance with default allocator
using Simulation3D_Request =
  hrim_generic_srvs::srv::Simulation3D_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_generic_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Response __declspec(deprecated)
#endif

namespace hrim_generic_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Simulation3D_Response_
{
  using Type = Simulation3D_Response_<ContainerAllocator>;

  explicit Simulation3D_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
    }
  }

  explicit Simulation3D_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
    }
  }

  // field types and members
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _model_name_type model_name;
  using _model_type =
    std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _model_type model;

  // setters for named parameter idiom
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__model(
    const std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->model = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Response
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_srvs__srv__Simulation3D_Response
    std::shared_ptr<hrim_generic_srvs::srv::Simulation3D_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Simulation3D_Response_ & other) const
  {
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    return true;
  }
  bool operator!=(const Simulation3D_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Simulation3D_Response_

// alias to use template instance with default allocator
using Simulation3D_Response =
  hrim_generic_srvs::srv::Simulation3D_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_generic_srvs

namespace hrim_generic_srvs
{

namespace srv
{

struct Simulation3D
{
  using Request = hrim_generic_srvs::srv::Simulation3D_Request;
  using Response = hrim_generic_srvs::srv::Simulation3D_Response;
};

}  // namespace srv

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__SIMULATION3_D__STRUCT_HPP_
