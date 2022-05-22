// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__STRUCT_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_Goal_
{
  using Type = GoalJointTrajectory_Goal_<ContainerAllocator>;

  explicit GoalJointTrajectory_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  explicit GoalJointTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc),
    trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _joint_name_type joint_name;
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_Goal_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_Goal_

// alias to use template instance with default allocator
using GoalJointTrajectory_Goal =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_Result_
{
  using Type = GoalJointTrajectory_Result_<ContainerAllocator>;

  explicit GoalJointTrajectory_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0l;
      this->error_string = "";
    }
  }

  explicit GoalJointTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0l;
      this->error_string = "";
    }
  }

  // field types and members
  using _error_type =
    int32_t;
  _error_type error;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__error(
    const int32_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t GOAL_TOLERANCE_VIOLATED =
    -5;
  static constexpr int32_t PATH_TOLERANCE_VIOLATED =
    -4;
  static constexpr int32_t OLD_HEADER_TIMESTAMP =
    -3;
  static constexpr int32_t INVALID_JOINTS =
    -2;
  static constexpr int32_t INVALID_GOAL =
    -1;
  static constexpr int32_t SUCCESSFUL =
    0;

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_Result_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_Result_

// alias to use template instance with default allocator
using GoalJointTrajectory_Result =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t GoalJointTrajectory_Result_<ContainerAllocator>::GOAL_TOLERANCE_VIOLATED;
template<typename ContainerAllocator>
constexpr int32_t GoalJointTrajectory_Result_<ContainerAllocator>::PATH_TOLERANCE_VIOLATED;
template<typename ContainerAllocator>
constexpr int32_t GoalJointTrajectory_Result_<ContainerAllocator>::OLD_HEADER_TIMESTAMP;
template<typename ContainerAllocator>
constexpr int32_t GoalJointTrajectory_Result_<ContainerAllocator>::INVALID_JOINTS;
template<typename ContainerAllocator>
constexpr int32_t GoalJointTrajectory_Result_<ContainerAllocator>::INVALID_GOAL;
template<typename ContainerAllocator>
constexpr int32_t GoalJointTrajectory_Result_<ContainerAllocator>::SUCCESSFUL;

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_Feedback_
{
  using Type = GoalJointTrajectory_Feedback_<ContainerAllocator>;

  explicit GoalJointTrajectory_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    desired(_init),
    actual(_init),
    error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  explicit GoalJointTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    joint_name(_alloc),
    desired(_alloc, _init),
    actual(_alloc, _init),
    error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _joint_name_type joint_name;
  using _desired_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _desired_type desired;
  using _actual_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _actual_type actual;
  using _error_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__desired(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->desired = _arg;
    return *this;
  }
  Type & set__actual(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__error(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_Feedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_Feedback_

// alias to use template instance with default allocator
using GoalJointTrajectory_Feedback =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_SendGoal_Request_
{
  using Type = GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit GoalJointTrajectory_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoalJointTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using GoalJointTrajectory_SendGoal_Request =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_SendGoal_Response_
{
  using Type = GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit GoalJointTrajectory_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoalJointTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using GoalJointTrajectory_SendGoal_Response =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

struct GoalJointTrajectory_SendGoal
{
  using Request = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request;
  using Response = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response;
};

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_GetResult_Request_
{
  using Type = GoalJointTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit GoalJointTrajectory_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoalJointTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using GoalJointTrajectory_GetResult_Request =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


// Include directives for member types
// Member 'result'
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_GetResult_Response_
{
  using Type = GoalJointTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit GoalJointTrajectory_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoalJointTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using GoalJointTrajectory_GetResult_Response =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

struct GoalJointTrajectory_GetResult
{
  using Request = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request;
  using Response = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response;
};

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoalJointTrajectory_FeedbackMessage_
{
  using Type = GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit GoalJointTrajectory_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoalJointTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage
    std::shared_ptr<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalJointTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalJointTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalJointTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using GoalJointTrajectory_FeedbackMessage =
  hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

struct GoalJointTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoalJointTrajectory GoalJointTrajectory;

}  // namespace action

}  // namespace hrim_actuator_rotaryservo_actions

#endif  // HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__STRUCT_HPP_
