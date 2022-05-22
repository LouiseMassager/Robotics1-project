// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__STRUCT_H_
#define HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal
{
  rosidl_runtime_c__String joint_name;
  trajectory_msgs__msg__JointTrajectory trajectory;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence;


// Constants defined in the message

/// Constant 'GOAL_TOLERANCE_VIOLATED'.
enum
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__GOAL_TOLERANCE_VIOLATED = -5l
};

/// Constant 'PATH_TOLERANCE_VIOLATED'.
enum
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__PATH_TOLERANCE_VIOLATED = -4l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__OLD_HEADER_TIMESTAMP = -3l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__INVALID_JOINTS = -2l
};

/// Constant 'INVALID_GOAL'.
enum
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__INVALID_GOAL = -1l
};

/// Constant 'SUCCESSFUL'.
enum
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__SUCCESSFUL = 0l
};

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result
{
  int32_t error;
  rosidl_runtime_c__String error_string;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_name'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String joint_name;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  trajectory_msgs__msg__JointTrajectoryPoint error;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal goal;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response
{
  int8_t status;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result result;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"

// Struct defined in action/GoalJointTrajectory in the package hrim_actuator_rotaryservo_actions.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback feedback;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage;

// Struct for a sequence of hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage.
typedef struct hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__STRUCT_H_
