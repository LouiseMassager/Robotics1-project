# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlVacuum_Request(type):
    """Metaclass of message 'ControlVacuum_Request'."""

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
                'hrim_actuator_gripper_srvs.srv.ControlVacuum_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_vacuum__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_vacuum__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_vacuum__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_vacuum__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_vacuum__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlVacuum_Request(metaclass=Metaclass_ControlVacuum_Request):
    """Message class 'ControlVacuum_Request'."""

    __slots__ = [
        '_goal_percentage_suction',
    ]

    _fields_and_field_types = {
        'goal_percentage_suction': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_percentage_suction = kwargs.get('goal_percentage_suction', float())

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
        if self.goal_percentage_suction != other.goal_percentage_suction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_percentage_suction(self):
        """Message field 'goal_percentage_suction'."""
        return self._goal_percentage_suction

    @goal_percentage_suction.setter
    def goal_percentage_suction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_percentage_suction' field must be of type 'float'"
        self._goal_percentage_suction = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlVacuum_Response(type):
    """Metaclass of message 'ControlVacuum_Response'."""

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
                'hrim_actuator_gripper_srvs.srv.ControlVacuum_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_vacuum__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_vacuum__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_vacuum__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_vacuum__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_vacuum__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlVacuum_Response(metaclass=Metaclass_ControlVacuum_Response):
    """Message class 'ControlVacuum_Response'."""

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


class Metaclass_ControlVacuum(type):
    """Metaclass of service 'ControlVacuum'."""

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
                'hrim_actuator_gripper_srvs.srv.ControlVacuum')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_vacuum

            from hrim_actuator_gripper_srvs.srv import _control_vacuum
            if _control_vacuum.Metaclass_ControlVacuum_Request._TYPE_SUPPORT is None:
                _control_vacuum.Metaclass_ControlVacuum_Request.__import_type_support__()
            if _control_vacuum.Metaclass_ControlVacuum_Response._TYPE_SUPPORT is None:
                _control_vacuum.Metaclass_ControlVacuum_Response.__import_type_support__()


class ControlVacuum(metaclass=Metaclass_ControlVacuum):
    from hrim_actuator_gripper_srvs.srv._control_vacuum import ControlVacuum_Request as Request
    from hrim_actuator_gripper_srvs.srv._control_vacuum import ControlVacuum_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
