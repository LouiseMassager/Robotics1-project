// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice

#ifndef HRIM_GENERIC_SRVS__SRV__DETAIL__ID__STRUCT_HPP_
#define HRIM_GENERIC_SRVS__SRV__DETAIL__ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrim_generic_srvs__srv__ID_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_srvs__srv__ID_Request __declspec(deprecated)
#endif

namespace hrim_generic_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ID_Request_
{
  using Type = ID_Request_<ContainerAllocator>;

  explicit ID_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ID_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hrim_generic_srvs::srv::ID_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_srvs::srv::ID_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::ID_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::ID_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_srvs__srv__ID_Request
    std::shared_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_srvs__srv__ID_Request
    std::shared_ptr<hrim_generic_srvs::srv::ID_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ID_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ID_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ID_Request_

// alias to use template instance with default allocator
using ID_Request =
  hrim_generic_srvs::srv::ID_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hrim_generic_srvs


#ifndef _WIN32
# define DEPRECATED__hrim_generic_srvs__srv__ID_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_generic_srvs__srv__ID_Response __declspec(deprecated)
#endif

namespace hrim_generic_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ID_Response_
{
  using Type = ID_Response_<ContainerAllocator>;

  explicit ID_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_kind_id = 0;
      this->device_name = "";
      this->vendor_id = 0ul;
      this->product_id = 0ul;
      this->instance_id = 0ul;
      this->hrim_version = "";
      this->hros_version = "";
    }
  }

  explicit ID_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_name(_alloc),
    hrim_version(_alloc),
    hros_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_kind_id = 0;
      this->device_name = "";
      this->vendor_id = 0ul;
      this->product_id = 0ul;
      this->instance_id = 0ul;
      this->hrim_version = "";
      this->hros_version = "";
    }
  }

  // field types and members
  using _device_kind_id_type =
    uint8_t;
  _device_kind_id_type device_kind_id;
  using _device_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _device_name_type device_name;
  using _vendor_id_type =
    uint32_t;
  _vendor_id_type vendor_id;
  using _product_id_type =
    uint32_t;
  _product_id_type product_id;
  using _instance_id_type =
    uint32_t;
  _instance_id_type instance_id;
  using _hrim_version_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _hrim_version_type hrim_version;
  using _hros_version_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _hros_version_type hros_version;

  // setters for named parameter idiom
  Type & set__device_kind_id(
    const uint8_t & _arg)
  {
    this->device_kind_id = _arg;
    return *this;
  }
  Type & set__device_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->device_name = _arg;
    return *this;
  }
  Type & set__vendor_id(
    const uint32_t & _arg)
  {
    this->vendor_id = _arg;
    return *this;
  }
  Type & set__product_id(
    const uint32_t & _arg)
  {
    this->product_id = _arg;
    return *this;
  }
  Type & set__instance_id(
    const uint32_t & _arg)
  {
    this->instance_id = _arg;
    return *this;
  }
  Type & set__hrim_version(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->hrim_version = _arg;
    return *this;
  }
  Type & set__hros_version(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->hros_version = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HRIM_COMM =
    0u;
  static constexpr uint8_t HRIM_SENSOR =
    1u;
  static constexpr uint8_t HRIM_ACTUATOR =
    2u;
  static constexpr uint8_t HRIM_COGNITION =
    3u;
  static constexpr uint8_t HRIM_UI =
    4u;
  static constexpr uint8_t HRIM_POWER =
    5u;
  static constexpr uint8_t HRIM_COMPOSITE =
    6u;

  // pointer types
  using RawPtr =
    hrim_generic_srvs::srv::ID_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_generic_srvs::srv::ID_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::ID_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_generic_srvs::srv::ID_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_generic_srvs__srv__ID_Response
    std::shared_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_generic_srvs__srv__ID_Response
    std::shared_ptr<hrim_generic_srvs::srv::ID_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ID_Response_ & other) const
  {
    if (this->device_kind_id != other.device_kind_id) {
      return false;
    }
    if (this->device_name != other.device_name) {
      return false;
    }
    if (this->vendor_id != other.vendor_id) {
      return false;
    }
    if (this->product_id != other.product_id) {
      return false;
    }
    if (this->instance_id != other.instance_id) {
      return false;
    }
    if (this->hrim_version != other.hrim_version) {
      return false;
    }
    if (this->hros_version != other.hros_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const ID_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ID_Response_

// alias to use template instance with default allocator
using ID_Response =
  hrim_generic_srvs::srv::ID_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_COMM;
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_SENSOR;
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_ACTUATOR;
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_COGNITION;
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_UI;
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_POWER;
template<typename ContainerAllocator>
constexpr uint8_t ID_Response_<ContainerAllocator>::HRIM_COMPOSITE;

}  // namespace srv

}  // namespace hrim_generic_srvs

namespace hrim_generic_srvs
{

namespace srv
{

struct ID
{
  using Request = hrim_generic_srvs::srv::ID_Request;
  using Response = hrim_generic_srvs::srv::ID_Response;
};

}  // namespace srv

}  // namespace hrim_generic_srvs

#endif  // HRIM_GENERIC_SRVS__SRV__DETAIL__ID__STRUCT_HPP_
