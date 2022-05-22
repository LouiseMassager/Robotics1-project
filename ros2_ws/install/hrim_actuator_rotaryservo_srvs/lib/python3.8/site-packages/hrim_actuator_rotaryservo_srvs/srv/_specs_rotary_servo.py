# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_rotaryservo_srvs:srv/SpecsRotaryServo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpecsRotaryServo_Request(type):
    """Metaclass of message 'SpecsRotaryServo_Request'."""

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
            module = import_type_support('hrim_actuator_rotaryservo_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_srvs.srv.SpecsRotaryServo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_rotary_servo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_rotary_servo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_rotary_servo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_rotary_servo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_rotary_servo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsRotaryServo_Request(metaclass=Metaclass_SpecsRotaryServo_Request):
    """Message class 'SpecsRotaryServo_Request'."""

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


class Metaclass_SpecsRotaryServo_Response(type):
    """Metaclass of message 'SpecsRotaryServo_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROL_TYPE_NONE': 0,
        'CONTROL_TYPE_POSITION': 1,
        'CONTROL_TYPE_EFFORT': 2,
        'CONTROL_TYPE_VELOCITY': 3,
        'CONTROL_TYPE_POSITION_VELOCITY': 4,
        'CONTROL_TYPE_POSITION_EFFORT': 5,
        'CONTROL_TYPE_VELOCITY_EFFORT': 6,
        'CONTROL_TYPE_POSITION_VELOCITY_EFFORT': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_srvs.srv.SpecsRotaryServo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_rotary_servo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_rotary_servo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_rotary_servo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_rotary_servo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_rotary_servo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROL_TYPE_NONE': cls.__constants['CONTROL_TYPE_NONE'],
            'CONTROL_TYPE_POSITION': cls.__constants['CONTROL_TYPE_POSITION'],
            'CONTROL_TYPE_EFFORT': cls.__constants['CONTROL_TYPE_EFFORT'],
            'CONTROL_TYPE_VELOCITY': cls.__constants['CONTROL_TYPE_VELOCITY'],
            'CONTROL_TYPE_POSITION_VELOCITY': cls.__constants['CONTROL_TYPE_POSITION_VELOCITY'],
            'CONTROL_TYPE_POSITION_EFFORT': cls.__constants['CONTROL_TYPE_POSITION_EFFORT'],
            'CONTROL_TYPE_VELOCITY_EFFORT': cls.__constants['CONTROL_TYPE_VELOCITY_EFFORT'],
            'CONTROL_TYPE_POSITION_VELOCITY_EFFORT': cls.__constants['CONTROL_TYPE_POSITION_VELOCITY_EFFORT'],
        }

    @property
    def CONTROL_TYPE_NONE(self):
        """Message constant 'CONTROL_TYPE_NONE'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_NONE']

    @property
    def CONTROL_TYPE_POSITION(self):
        """Message constant 'CONTROL_TYPE_POSITION'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_POSITION']

    @property
    def CONTROL_TYPE_EFFORT(self):
        """Message constant 'CONTROL_TYPE_EFFORT'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_EFFORT']

    @property
    def CONTROL_TYPE_VELOCITY(self):
        """Message constant 'CONTROL_TYPE_VELOCITY'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_VELOCITY']

    @property
    def CONTROL_TYPE_POSITION_VELOCITY(self):
        """Message constant 'CONTROL_TYPE_POSITION_VELOCITY'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_POSITION_VELOCITY']

    @property
    def CONTROL_TYPE_POSITION_EFFORT(self):
        """Message constant 'CONTROL_TYPE_POSITION_EFFORT'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_POSITION_EFFORT']

    @property
    def CONTROL_TYPE_VELOCITY_EFFORT(self):
        """Message constant 'CONTROL_TYPE_VELOCITY_EFFORT'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_VELOCITY_EFFORT']

    @property
    def CONTROL_TYPE_POSITION_VELOCITY_EFFORT(self):
        """Message constant 'CONTROL_TYPE_POSITION_VELOCITY_EFFORT'."""
        return Metaclass_SpecsRotaryServo_Response.__constants['CONTROL_TYPE_POSITION_VELOCITY_EFFORT']


class SpecsRotaryServo_Response(metaclass=Metaclass_SpecsRotaryServo_Response):
    """
    Message class 'SpecsRotaryServo_Response'.

    Constants:
      CONTROL_TYPE_NONE
      CONTROL_TYPE_POSITION
      CONTROL_TYPE_EFFORT
      CONTROL_TYPE_VELOCITY
      CONTROL_TYPE_POSITION_VELOCITY
      CONTROL_TYPE_POSITION_EFFORT
      CONTROL_TYPE_VELOCITY_EFFORT
      CONTROL_TYPE_POSITION_VELOCITY_EFFORT
    """

    __slots__ = [
        '_control_type',
        '_range_min',
        '_range_max',
        '_precision',
        '_rated_speed',
        '_reachable_speed',
        '_rated_torque',
        '_reachable_torque',
        '_temperature_range_min',
        '_temperature_range_max',
    ]

    _fields_and_field_types = {
        'control_type': 'uint8',
        'range_min': 'double',
        'range_max': 'double',
        'precision': 'double',
        'rated_speed': 'double',
        'reachable_speed': 'double',
        'rated_torque': 'double',
        'reachable_torque': 'double',
        'temperature_range_min': 'double',
        'temperature_range_max': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.control_type = kwargs.get('control_type', int())
        self.range_min = kwargs.get('range_min', float())
        self.range_max = kwargs.get('range_max', float())
        self.precision = kwargs.get('precision', float())
        self.rated_speed = kwargs.get('rated_speed', float())
        self.reachable_speed = kwargs.get('reachable_speed', float())
        self.rated_torque = kwargs.get('rated_torque', float())
        self.reachable_torque = kwargs.get('reachable_torque', float())
        self.temperature_range_min = kwargs.get('temperature_range_min', float())
        self.temperature_range_max = kwargs.get('temperature_range_max', float())

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
        if self.control_type != other.control_type:
            return False
        if self.range_min != other.range_min:
            return False
        if self.range_max != other.range_max:
            return False
        if self.precision != other.precision:
            return False
        if self.rated_speed != other.rated_speed:
            return False
        if self.reachable_speed != other.reachable_speed:
            return False
        if self.rated_torque != other.rated_torque:
            return False
        if self.reachable_torque != other.reachable_torque:
            return False
        if self.temperature_range_min != other.temperature_range_min:
            return False
        if self.temperature_range_max != other.temperature_range_max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def control_type(self):
        """Message field 'control_type'."""
        return self._control_type

    @control_type.setter
    def control_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_type' field must be an unsigned integer in [0, 255]"
        self._control_type = value

    @property
    def range_min(self):
        """Message field 'range_min'."""
        return self._range_min

    @range_min.setter
    def range_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_min' field must be of type 'float'"
        self._range_min = value

    @property
    def range_max(self):
        """Message field 'range_max'."""
        return self._range_max

    @range_max.setter
    def range_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_max' field must be of type 'float'"
        self._range_max = value

    @property
    def precision(self):
        """Message field 'precision'."""
        return self._precision

    @precision.setter
    def precision(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'precision' field must be of type 'float'"
        self._precision = value

    @property
    def rated_speed(self):
        """Message field 'rated_speed'."""
        return self._rated_speed

    @rated_speed.setter
    def rated_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rated_speed' field must be of type 'float'"
        self._rated_speed = value

    @property
    def reachable_speed(self):
        """Message field 'reachable_speed'."""
        return self._reachable_speed

    @reachable_speed.setter
    def reachable_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reachable_speed' field must be of type 'float'"
        self._reachable_speed = value

    @property
    def rated_torque(self):
        """Message field 'rated_torque'."""
        return self._rated_torque

    @rated_torque.setter
    def rated_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rated_torque' field must be of type 'float'"
        self._rated_torque = value

    @property
    def reachable_torque(self):
        """Message field 'reachable_torque'."""
        return self._reachable_torque

    @reachable_torque.setter
    def reachable_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reachable_torque' field must be of type 'float'"
        self._reachable_torque = value

    @property
    def temperature_range_min(self):
        """Message field 'temperature_range_min'."""
        return self._temperature_range_min

    @temperature_range_min.setter
    def temperature_range_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_range_min' field must be of type 'float'"
        self._temperature_range_min = value

    @property
    def temperature_range_max(self):
        """Message field 'temperature_range_max'."""
        return self._temperature_range_max

    @temperature_range_max.setter
    def temperature_range_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_range_max' field must be of type 'float'"
        self._temperature_range_max = value


class Metaclass_SpecsRotaryServo(type):
    """Metaclass of service 'SpecsRotaryServo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_actuator_rotaryservo_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_srvs.srv.SpecsRotaryServo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__specs_rotary_servo

            from hrim_actuator_rotaryservo_srvs.srv import _specs_rotary_servo
            if _specs_rotary_servo.Metaclass_SpecsRotaryServo_Request._TYPE_SUPPORT is None:
                _specs_rotary_servo.Metaclass_SpecsRotaryServo_Request.__import_type_support__()
            if _specs_rotary_servo.Metaclass_SpecsRotaryServo_Response._TYPE_SUPPORT is None:
                _specs_rotary_servo.Metaclass_SpecsRotaryServo_Response.__import_type_support__()


class SpecsRotaryServo(metaclass=Metaclass_SpecsRotaryServo):
    from hrim_actuator_rotaryservo_srvs.srv._specs_rotary_servo import SpecsRotaryServo_Request as Request
    from hrim_actuator_rotaryservo_srvs.srv._specs_rotary_servo import SpecsRotaryServo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
