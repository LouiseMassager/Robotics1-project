// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init(message_memory);
}

void GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_member_array[2] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_Goal",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal),
  GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_member_array,  // message members
  GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_type_support_handle = {
  0,
  &GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Goal)() {
  GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_Goal__rosidl_typesupport_introspection_c__GoalJointTrajectory_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init(message_memory);
}

void GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_member_array[2] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_Result",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result),
  GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_member_array,  // message members
  GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_type_support_handle = {
  0,
  &GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Result)() {
  if (!GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_Result__rosidl_typesupport_introspection_c__GoalJointTrajectory_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init(message_memory);
}

void GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback, desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback, actual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_Feedback",  // message name
  5,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback),
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_member_array,  // message members
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_type_support_handle = {
  0,
  &GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Feedback)() {
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_Feedback__rosidl_typesupport_introspection_c__GoalJointTrajectory_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "hrim_actuator_rotaryservo_actions/action/goal_joint_trajectory.h"
// Member `goal`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init(message_memory);
}

void GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request),
  GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_member_array,  // message members
  GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_type_support_handle = {
  0,
  &GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Request)() {
  GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Goal)();
  if (!GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init(message_memory);
}

void GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response),
  GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_member_array,  // message members
  GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_type_support_handle = {
  0,
  &GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Response)() {
  GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_members = {
  "hrim_actuator_rotaryservo_actions__action",  // service namespace
  "GoalJointTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_type_support_handle = {
  0,
  &hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal)() {
  if (!hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_type_support_handle.typesupport_identifier) {
    hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_SendGoal_Response)()->data;
  }

  return &hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init(message_memory);
}

void GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request),
  GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_member_array,  // message members
  GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_type_support_handle = {
  0,
  &GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Request)() {
  GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/goal_joint_trajectory.h"
// Member `result`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init(message_memory);
}

void GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response),
  GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_member_array,  // message members
  GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_type_support_handle = {
  0,
  &GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Response)() {
  GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Result)();
  if (!GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_members = {
  "hrim_actuator_rotaryservo_actions__action",  // service namespace
  "GoalJointTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_type_support_handle = {
  0,
  &hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult)() {
  if (!hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_type_support_handle.typesupport_identifier) {
    hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_GetResult_Response)()->data;
  }

  return &hrim_actuator_rotaryservo_actions__action__detail__goal_joint_trajectory__rosidl_typesupport_introspection_c__GoalJointTrajectory_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/goal_joint_trajectory.h"
// Member `feedback`
// already included above
// #include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init(message_memory);
}

void GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_members = {
  "hrim_actuator_rotaryservo_actions__action",  // message namespace
  "GoalJointTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage),
  GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_member_array,  // message members
  GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_type_support_handle = {
  0,
  &GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_FeedbackMessage)() {
  GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_actions, action, GoalJointTrajectory_Feedback)();
  if (!GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__GoalJointTrajectory_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
