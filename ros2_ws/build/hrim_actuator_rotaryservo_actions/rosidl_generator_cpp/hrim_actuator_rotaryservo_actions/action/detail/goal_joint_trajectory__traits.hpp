// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__TRAITS_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__TRAITS_HPP_

#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_Goal";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_Result";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_Feedback";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_SendGoal";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>::value &&
    has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>::value &&
    has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>::value> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>::value> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_GetResult";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>::value &&
    has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>::value &&
    has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage>()
{
  return "hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage>()
{
  return "hrim_actuator_rotaryservo_actions/action/GoalJointTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hrim_actuator_rotaryservo_actions::action::GoalJointTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__TRAITS_HPP_
