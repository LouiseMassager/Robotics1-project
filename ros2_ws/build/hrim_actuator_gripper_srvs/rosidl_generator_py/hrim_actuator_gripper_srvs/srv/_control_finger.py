# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_gripper_srvs:srv/ControlFinger.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlFinger_Request(type):
    """Metaclass of message 'ControlFinger_Request'."""

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
            module = import_type_support('hrim_actuator_gripper_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_gripper_srvs.srv.ControlFinger_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_finger__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_finger__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_finger__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_finger__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_finger__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlFinger_Request(metaclass=Metaclass_ControlFinger_Request):
    """Message class 'ControlFinger_Request'."""

    __slots__ = [
        '_goal_linearposition',
        '_goal_angularposition',
        '_goal_effort',
        '_goal_velocity',
        '_goal_acceleration',
    ]

    _fields_and_field_types = {
        'goal_linearposition': 'float',
        'goal_angularposition': 'float',
        'goal_effort': 'float',
        'goal_velocity': 'float',
        'goal_acceleration': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_linearposition = kwargs.get('goal_linearposition', float())
        self.goal_angularposition = kwargs.get('goal_angularposition', float())
        self.goal_effort = kwargs.get('goal_effort', float())
        self.goal_velocity = kwargs.get('goal_velocity', float())
        self.goal_acceleration = kwargs.get('goal_acceleration', float())

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
        if self.goal_linearposition != other.goal_linearposition:
            return False
        if self.goal_angularposition != other.goal_angularposition:
            return False
        if self.goal_effort != other.goal_effort:
            return False
        if self.goal_velocity != other.goal_velocity:
            return False
        if self.goal_acceleration != other.goal_acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_linearposition(self):
        """Message field 'goal_linearposition'."""
        return self._goal_linearposition

    @goal_linearposition.setter
    def goal_linearposition(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_linearposition' field must be of type 'float'"
        self._goal_linearposition = value

    @property
    def goal_angularposition(self):
        """Message field 'goal_angularposition'."""
        return self._goal_angularposition

    @goal_angularposition.setter
    def goal_angularposition(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_angularposition' field must be of type 'float'"
        self._goal_angularposition = value

    @property
    def goal_effort(self):
        """Message field 'goal_effort'."""
        return self._goal_effort

    @goal_effort.setter
    def goal_effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_effort' field must be of type 'float'"
        self._goal_effort = value

    @property
    def goal_velocity(self):
        """Message field 'goal_velocity'."""
        return self._goal_velocity

    @goal_velocity.setter
    def goal_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_velocity' field must be of type 'float'"
        self._goal_velocity = value

    @property
    def goal_acceleration(self):
        """Message field 'goal_acceleration'."""
        return self._goal_acceleration

    @goal_acceleration.setter
    def goal_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_acceleration' field must be of type 'float'"
        self._goal_acceleration = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlFinger_Response(type):
    """Metaclass of message 'ControlFinger_Response'."""

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
            module = import_type_support('hrim_actuator_gripper_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_gripper_srvs.srv.ControlFinger_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_finger__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_finger__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_finger__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_finger__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_finger__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlFinger_Response(metaclass=Metaclass_ControlFinger_Response):
    """Message class 'ControlFinger_Response'."""

    __slots__ = [
        '_goal_accepted',
    ]

    _fields_and_field_types = {
        'goal_accepted': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_accepted = kwargs.get('goal_accepted', bool())

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
        if self.goal_accepted != other.goal_accepted:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_accepted(self):
        """Message field 'goal_accepted'."""
        return self._goal_accepted

    @goal_accepted.setter
    def goal_accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'goal_accepted' field must be of type 'bool'"
        self._goal_accepted = value


class Metaclass_ControlFinger(type):
    """Metaclass of service 'ControlFinger'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_gripper_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_gripper_srvs.srv.ControlFinger')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_finger

            from hrim_actuator_gripper_srvs.srv import _control_finger
            if _control_finger.Metaclass_ControlFinger_Request._TYPE_SUPPORT is None:
                _control_finger.Metaclass_ControlFinger_Request.__import_type_support__()
            if _control_finger.Metaclass_ControlFinger_Response._TYPE_SUPPORT is None:
                _control_finger.Metaclass_ControlFinger_Response.__import_type_support__()


class ControlFinger(metaclass=Metaclass_ControlFinger):
    from hrim_actuator_gripper_srvs.srv._control_finger import ControlFinger_Request as Request
    from hrim_actuator_gripper_srvs.srv._control_finger import ControlFinger_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
