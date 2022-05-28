// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__BUILDER_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__BUILDER_HPP_

#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_Goal_trajectory
{
public:
  explicit Init_GoalJointTrajectory_Goal_trajectory(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal trajectory(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal msg_;
};

class Init_GoalJointTrajectory_Goal_joint_name
{
public:
  Init_GoalJointTrajectory_Goal_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_Goal_trajectory joint_name(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_GoalJointTrajectory_Goal_trajectory(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_Goal_joint_name();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_Result_error_string
{
public:
  explicit Init_GoalJointTrajectory_Result_error_string(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result error_string(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result msg_;
};

class Init_GoalJointTrajectory_Result_error
{
public:
  Init_GoalJointTrajectory_Result_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_Result_error_string error(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_GoalJointTrajectory_Result_error_string(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_Result_error();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_Feedback_error
{
public:
  explicit Init_GoalJointTrajectory_Feedback_error(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback error(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback msg_;
};

class Init_GoalJointTrajectory_Feedback_actual
{
public:
  explicit Init_GoalJointTrajectory_Feedback_actual(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_GoalJointTrajectory_Feedback_error actual(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback::_actual_type arg)
  {
    msg_.actual = std::move(arg);
    return Init_GoalJointTrajectory_Feedback_error(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback msg_;
};

class Init_GoalJointTrajectory_Feedback_desired
{
public:
  explicit Init_GoalJointTrajectory_Feedback_desired(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_GoalJointTrajectory_Feedback_actual desired(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback::_desired_type arg)
  {
    msg_.desired = std::move(arg);
    return Init_GoalJointTrajectory_Feedback_actual(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback msg_;
};

class Init_GoalJointTrajectory_Feedback_joint_name
{
public:
  explicit Init_GoalJointTrajectory_Feedback_joint_name(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_GoalJointTrajectory_Feedback_desired joint_name(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_GoalJointTrajectory_Feedback_desired(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback msg_;
};

class Init_GoalJointTrajectory_Feedback_header
{
public:
  Init_GoalJointTrajectory_Feedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_Feedback_joint_name header(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GoalJointTrajectory_Feedback_joint_name(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_Feedback_header();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_GoalJointTrajectory_SendGoal_Request_goal(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request goal(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request msg_;
};

class Init_GoalJointTrajectory_SendGoal_Request_goal_id
{
public:
  Init_GoalJointTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_SendGoal_Request_goal goal_id(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoalJointTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_SendGoal_Request_goal_id();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_GoalJointTrajectory_SendGoal_Response_stamp(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response stamp(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response msg_;
};

class Init_GoalJointTrajectory_SendGoal_Response_accepted
{
public:
  Init_GoalJointTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_SendGoal_Response_stamp accepted(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoalJointTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_SendGoal_Response_accepted();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_GetResult_Request_goal_id
{
public:
  Init_GoalJointTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request goal_id(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_GetResult_Request_goal_id();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_GetResult_Response_result
{
public:
  explicit Init_GoalJointTrajectory_GetResult_Response_result(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response result(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response msg_;
};

class Init_GoalJointTrajectory_GetResult_Response_status
{
public:
  Init_GoalJointTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_GetResult_Response_result status(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoalJointTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_GetResult_Response_status();
}

}  // namespace hrim_actuator_rotaryservo_actions


namespace hrim_actuator_rotaryservo_actions
{

namespace action
{

namespace builder
{

class Init_GoalJointTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_GoalJointTrajectory_FeedbackMessage_feedback(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage feedback(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage msg_;
};

class Init_GoalJointTrajectory_FeedbackMessage_goal_id
{
public:
  Init_GoalJointTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalJointTrajectory_FeedbackMessage_feedback goal_id(::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoalJointTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage>()
{
  return hrim_actuator_rotaryservo_actions::action::builder::Init_GoalJointTrajectory_FeedbackMessage_goal_id();
}

}  // namespace hrim_actuator_rotaryservo_actions

#endif  // HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__BUILDER_HPP_
