# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_gripper_srvs:srv/SpecsVacuumGripper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpecsVacuumGripper_Request(type):
    """Metaclass of message 'SpecsVacuumGripper_Request'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsVacuumGripper_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_vacuum_gripper__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_vacuum_gripper__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_vacuum_gripper__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_vacuum_gripper__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_vacuum_gripper__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsVacuumGripper_Request(metaclass=Metaclass_SpecsVacuumGripper_Request):
    """Message class 'SpecsVacuumGripper_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SpecsVacuumGripper_Response(type):
    """Metaclass of message 'SpecsVacuumGripper_Response'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsVacuumGripper_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_vacuum_gripper__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_vacuum_gripper__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_vacuum_gripper__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_vacuum_gripper__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_vacuum_gripper__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsVacuumGripper_Response(metaclass=Metaclass_SpecsVacuumGripper_Response):
    """Message class 'SpecsVacuumGripper_Response'."""

    __slots__ = [
        '_cycle_time',
        '_max_force',
        '_max_payload',
    ]

    _fields_and_field_types = {
        'cycle_time': 'float',
        'max_force': 'float',
        'max_payload': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cycle_time = kwargs.get('cycle_time', float())
        self.max_force = kwargs.get('max_force', float())
        self.max_payload = kwargs.get('max_payload', float())

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
        if self.cycle_time != other.cycle_time:
            return False
        if self.max_force != other.max_force:
            return False
        if self.max_payload != other.max_payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cycle_time(self):
        """Message field 'cycle_time'."""
        return self._cycle_time

    @cycle_time.setter
    def cycle_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cycle_time' field must be of type 'float'"
        self._cycle_time = value

    @property
    def max_force(self):
        """Message field 'max_force'."""
        return self._max_force

    @max_force.setter
    def max_force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_force' field must be of type 'float'"
        self._max_force = value

    @property
    def max_payload(self):
        """Message field 'max_payload'."""
        return self._max_payload

    @max_payload.setter
    def max_payload(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_payload' field must be of type 'float'"
        self._max_payload = value


class Metaclass_SpecsVacuumGripper(type):
    """Metaclass of service 'SpecsVacuumGripper'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsVacuumGripper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__specs_vacuum_gripper

            from hrim_actuator_gripper_srvs.srv import _specs_vacuum_gripper
            if _specs_vacuum_gripper.Metaclass_SpecsVacuumGripper_Request._TYPE_SUPPORT is None:
                _specs_vacuum_gripper.Metaclass_SpecsVacuumGripper_Request.__import_type_support__()
            if _specs_vacuum_gripper.Metaclass_SpecsVacuumGripper_Response._TYPE_SUPPORT is None:
                _specs_vacuum_gripper.Metaclass_SpecsVacuumGripper_Response.__import_type_support__()


class SpecsVacuumGripper(metaclass=Metaclass_SpecsVacuumGripper):
    from hrim_actuator_gripper_srvs.srv._specs_vacuum_gripper import SpecsVacuumGripper_Request as Request
    from hrim_actuator_gripper_srvs.srv._specs_vacuum_gripper import SpecsVacuumGripper_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
