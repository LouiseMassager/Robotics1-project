# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GoalJointTrajectory_Goal(type):
    """Metaclass of message 'GoalJointTrajectory_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__goal

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_Goal(metaclass=Metaclass_GoalJointTrajectory_Goal):
    """Message class 'GoalJointTrajectory_Goal'."""

    __slots__ = [
        '_joint_name',
        '_trajectory',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'trajectory': 'trajectory_msgs/JointTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        from trajectory_msgs.msg import JointTrajectory
        self.trajectory = kwargs.get('trajectory', JointTrajectory())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_name != other.joint_name:
            return False
        if self.trajectory != other.trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'trajectory' field must be a sub message of type 'JointTrajectory'"
        self._trajectory = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_Result(type):
    """Metaclass of message 'GoalJointTrajectory_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GOAL_TOLERANCE_VIOLATED': -5,
        'PATH_TOLERANCE_VIOLATED': -4,
        'OLD_HEADER_TIMESTAMP': -3,
        'INVALID_JOINTS': -2,
        'INVALID_GOAL': -1,
        'SUCCESSFUL': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GOAL_TOLERANCE_VIOLATED': cls.__constants['GOAL_TOLERANCE_VIOLATED'],
            'PATH_TOLERANCE_VIOLATED': cls.__constants['PATH_TOLERANCE_VIOLATED'],
            'OLD_HEADER_TIMESTAMP': cls.__constants['OLD_HEADER_TIMESTAMP'],
            'INVALID_JOINTS': cls.__constants['INVALID_JOINTS'],
            'INVALID_GOAL': cls.__constants['INVALID_GOAL'],
            'SUCCESSFUL': cls.__constants['SUCCESSFUL'],
        }

    @property
    def GOAL_TOLERANCE_VIOLATED(self):
        """Message constant 'GOAL_TOLERANCE_VIOLATED'."""
        return Metaclass_GoalJointTrajectory_Result.__constants['GOAL_TOLERANCE_VIOLATED']

    @property
    def PATH_TOLERANCE_VIOLATED(self):
        """Message constant 'PATH_TOLERANCE_VIOLATED'."""
        return Metaclass_GoalJointTrajectory_Result.__constants['PATH_TOLERANCE_VIOLATED']

    @property
    def OLD_HEADER_TIMESTAMP(self):
        """Message constant 'OLD_HEADER_TIMESTAMP'."""
        return Metaclass_GoalJointTrajectory_Result.__constants['OLD_HEADER_TIMESTAMP']

    @property
    def INVALID_JOINTS(self):
        """Message constant 'INVALID_JOINTS'."""
        return Metaclass_GoalJointTrajectory_Result.__constants['INVALID_JOINTS']

    @property
    def INVALID_GOAL(self):
        """Message constant 'INVALID_GOAL'."""
        return Metaclass_GoalJointTrajectory_Result.__constants['INVALID_GOAL']

    @property
    def SUCCESSFUL(self):
        """Message constant 'SUCCESSFUL'."""
        return Metaclass_GoalJointTrajectory_Result.__constants['SUCCESSFUL']


class GoalJointTrajectory_Result(metaclass=Metaclass_GoalJointTrajectory_Result):
    """
    Message class 'GoalJointTrajectory_Result'.

    Constants:
      GOAL_TOLERANCE_VIOLATED
      PATH_TOLERANCE_VIOLATED
      OLD_HEADER_TIMESTAMP
      INVALID_JOINTS
      INVALID_GOAL
      SUCCESSFUL
    """

    __slots__ = [
        '_error',
        '_error_string',
    ]

    _fields_and_field_types = {
        'error': 'int32',
        'error_string': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error = kwargs.get('error', int())
        self.error_string = kwargs.get('error_string', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.error != other.error:
            return False
        if self.error_string != other.error_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error' field must be an integer in [-2147483648, 2147483647]"
        self._error = value

    @property
    def error_string(self):
        """Message field 'error_string'."""
        return self._error_string

    @error_string.setter
    def error_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_string' field must be of type 'str'"
        self._error_string = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_Feedback(type):
    """Metaclass of message 'GoalJointTrajectory_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__feedback

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectoryPoint
            if JointTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                JointTrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_Feedback(metaclass=Metaclass_GoalJointTrajectory_Feedback):
    """Message class 'GoalJointTrajectory_Feedback'."""

    __slots__ = [
        '_header',
        '_joint_name',
        '_desired',
        '_actual',
        '_error',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'joint_name': 'string',
        'desired': 'trajectory_msgs/JointTrajectoryPoint',
        'actual': 'trajectory_msgs/JointTrajectoryPoint',
        'error': 'trajectory_msgs/JointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.joint_name = kwargs.get('joint_name', str())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.desired = kwargs.get('desired', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.actual = kwargs.get('actual', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.error = kwargs.get('error', JointTrajectoryPoint())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.joint_name != other.joint_name:
            return False
        if self.desired != other.desired:
            return False
        if self.actual != other.actual:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @property
    def desired(self):
        """Message field 'desired'."""
        return self._desired

    @desired.setter
    def desired(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'desired' field must be a sub message of type 'JointTrajectoryPoint'"
        self._desired = value

    @property
    def actual(self):
        """Message field 'actual'."""
        return self._actual

    @actual.setter
    def actual(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'actual' field must be a sub message of type 'JointTrajectoryPoint'"
        self._actual = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'error' field must be a sub message of type 'JointTrajectoryPoint'"
        self._error = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_SendGoal_Request(type):
    """Metaclass of message 'GoalJointTrajectory_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__send_goal__request

            from hrim_actuator_rotaryservo_actions.action import GoalJointTrajectory
            if GoalJointTrajectory.Goal.__class__._TYPE_SUPPORT is None:
                GoalJointTrajectory.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_SendGoal_Request(metaclass=Metaclass_GoalJointTrajectory_SendGoal_Request):
    """Message class 'GoalJointTrajectory_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'hrim_actuator_rotaryservo_actions/GoalJointTrajectory_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hrim_actuator_rotaryservo_actions', 'action'], 'GoalJointTrajectory_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Goal
        self.goal = kwargs.get('goal', GoalJointTrajectory_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Goal
            assert \
                isinstance(value, GoalJointTrajectory_Goal), \
                "The 'goal' field must be a sub message of type 'GoalJointTrajectory_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_SendGoal_Response(type):
    """Metaclass of message 'GoalJointTrajectory_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_SendGoal_Response(metaclass=Metaclass_GoalJointTrajectory_SendGoal_Response):
    """Message class 'GoalJointTrajectory_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_GoalJointTrajectory_SendGoal(type):
    """Metaclass of service 'GoalJointTrajectory_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__goal_joint_trajectory__send_goal

            from hrim_actuator_rotaryservo_actions.action import _goal_joint_trajectory
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_SendGoal_Request._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_SendGoal_Request.__import_type_support__()
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_SendGoal_Response._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_SendGoal_Response.__import_type_support__()


class GoalJointTrajectory_SendGoal(metaclass=Metaclass_GoalJointTrajectory_SendGoal):
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_SendGoal_Request as Request
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_GetResult_Request(type):
    """Metaclass of message 'GoalJointTrajectory_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_GetResult_Request(metaclass=Metaclass_GoalJointTrajectory_GetResult_Request):
    """Message class 'GoalJointTrajectory_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_GetResult_Response(type):
    """Metaclass of message 'GoalJointTrajectory_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__get_result__response

            from hrim_actuator_rotaryservo_actions.action import GoalJointTrajectory
            if GoalJointTrajectory.Result.__class__._TYPE_SUPPORT is None:
                GoalJointTrajectory.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_GetResult_Response(metaclass=Metaclass_GoalJointTrajectory_GetResult_Response):
    """Message class 'GoalJointTrajectory_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'hrim_actuator_rotaryservo_actions/GoalJointTrajectory_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hrim_actuator_rotaryservo_actions', 'action'], 'GoalJointTrajectory_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Result
        self.result = kwargs.get('result', GoalJointTrajectory_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Result
            assert \
                isinstance(value, GoalJointTrajectory_Result), \
                "The 'result' field must be a sub message of type 'GoalJointTrajectory_Result'"
        self._result = value


class Metaclass_GoalJointTrajectory_GetResult(type):
    """Metaclass of service 'GoalJointTrajectory_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__goal_joint_trajectory__get_result

            from hrim_actuator_rotaryservo_actions.action import _goal_joint_trajectory
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_GetResult_Request._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_GetResult_Request.__import_type_support__()
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_GetResult_Response._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_GetResult_Response.__import_type_support__()


class GoalJointTrajectory_GetResult(metaclass=Metaclass_GoalJointTrajectory_GetResult):
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_GetResult_Request as Request
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoalJointTrajectory_FeedbackMessage(type):
    """Metaclass of message 'GoalJointTrajectory_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__goal_joint_trajectory__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__goal_joint_trajectory__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__goal_joint_trajectory__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__goal_joint_trajectory__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__goal_joint_trajectory__feedback_message

            from hrim_actuator_rotaryservo_actions.action import GoalJointTrajectory
            if GoalJointTrajectory.Feedback.__class__._TYPE_SUPPORT is None:
                GoalJointTrajectory.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalJointTrajectory_FeedbackMessage(metaclass=Metaclass_GoalJointTrajectory_FeedbackMessage):
    """Message class 'GoalJointTrajectory_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'hrim_actuator_rotaryservo_actions/GoalJointTrajectory_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hrim_actuator_rotaryservo_actions', 'action'], 'GoalJointTrajectory_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Feedback
        self.feedback = kwargs.get('feedback', GoalJointTrajectory_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Feedback
            assert \
                isinstance(value, GoalJointTrajectory_Feedback), \
                "The 'feedback' field must be a sub message of type 'GoalJointTrajectory_Feedback'"
        self._feedback = value


class Metaclass_GoalJointTrajectory(type):
    """Metaclass of action 'GoalJointTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_actions.action.GoalJointTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__goal_joint_trajectory

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from hrim_actuator_rotaryservo_actions.action import _goal_joint_trajectory
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_SendGoal._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_SendGoal.__import_type_support__()
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_GetResult._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_GetResult.__import_type_support__()
            if _goal_joint_trajectory.Metaclass_GoalJointTrajectory_FeedbackMessage._TYPE_SUPPORT is None:
                _goal_joint_trajectory.Metaclass_GoalJointTrajectory_FeedbackMessage.__import_type_support__()


class GoalJointTrajectory(metaclass=Metaclass_GoalJointTrajectory):

    # The goal message defined in the action definition.
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Goal as Goal
    # The result message defined in the action definition.
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Result as Result
    # The feedback message defined in the action definition.
    from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from hrim_actuator_rotaryservo_actions.action._goal_joint_trajectory import GoalJointTrajectory_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
