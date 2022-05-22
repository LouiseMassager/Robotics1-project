# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_rotaryservo_msgs:msg/StateRotaryServo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateRotaryServo(type):
    """Metaclass of message 'StateRotaryServo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FAULT_NONE': 0,
        'FAULT_CURRENT': 1,
        'FAULT_TEMPERATURE': 2,
        'FAULT_BUS_VOLTAGE': 3,
        'FAULT_BRIDGE_DRIVER': 4,
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
            module = import_type_support('hrim_actuator_rotaryservo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_actuator_rotaryservo_msgs.msg.StateRotaryServo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_rotary_servo
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_rotary_servo
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_rotary_servo
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_rotary_servo
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_rotary_servo

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FAULT_NONE': cls.__constants['FAULT_NONE'],
            'FAULT_CURRENT': cls.__constants['FAULT_CURRENT'],
            'FAULT_TEMPERATURE': cls.__constants['FAULT_TEMPERATURE'],
            'FAULT_BUS_VOLTAGE': cls.__constants['FAULT_BUS_VOLTAGE'],
            'FAULT_BRIDGE_DRIVER': cls.__constants['FAULT_BRIDGE_DRIVER'],
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
    def FAULT_NONE(self):
        """Message constant 'FAULT_NONE'."""
        return Metaclass_StateRotaryServo.__constants['FAULT_NONE']

    @property
    def FAULT_CURRENT(self):
        """Message constant 'FAULT_CURRENT'."""
        return Metaclass_StateRotaryServo.__constants['FAULT_CURRENT']

    @property
    def FAULT_TEMPERATURE(self):
        """Message constant 'FAULT_TEMPERATURE'."""
        return Metaclass_StateRotaryServo.__constants['FAULT_TEMPERATURE']

    @property
    def FAULT_BUS_VOLTAGE(self):
        """Message constant 'FAULT_BUS_VOLTAGE'."""
        return Metaclass_StateRotaryServo.__constants['FAULT_BUS_VOLTAGE']

    @property
    def FAULT_BRIDGE_DRIVER(self):
        """Message constant 'FAULT_BRIDGE_DRIVER'."""
        return Metaclass_StateRotaryServo.__constants['FAULT_BRIDGE_DRIVER']

    @property
    def CONTROL_TYPE_NONE(self):
        """Message constant 'CONTROL_TYPE_NONE'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_NONE']

    @property
    def CONTROL_TYPE_POSITION(self):
        """Message constant 'CONTROL_TYPE_POSITION'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_POSITION']

    @property
    def CONTROL_TYPE_EFFORT(self):
        """Message constant 'CONTROL_TYPE_EFFORT'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_EFFORT']

    @property
    def CONTROL_TYPE_VELOCITY(self):
        """Message constant 'CONTROL_TYPE_VELOCITY'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_VELOCITY']

    @property
    def CONTROL_TYPE_POSITION_VELOCITY(self):
        """Message constant 'CONTROL_TYPE_POSITION_VELOCITY'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_POSITION_VELOCITY']

    @property
    def CONTROL_TYPE_POSITION_EFFORT(self):
        """Message constant 'CONTROL_TYPE_POSITION_EFFORT'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_POSITION_EFFORT']

    @property
    def CONTROL_TYPE_VELOCITY_EFFORT(self):
        """Message constant 'CONTROL_TYPE_VELOCITY_EFFORT'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_VELOCITY_EFFORT']

    @property
    def CONTROL_TYPE_POSITION_VELOCITY_EFFORT(self):
        """Message constant 'CONTROL_TYPE_POSITION_VELOCITY_EFFORT'."""
        return Metaclass_StateRotaryServo.__constants['CONTROL_TYPE_POSITION_VELOCITY_EFFORT']


class StateRotaryServo(metaclass=Metaclass_StateRotaryServo):
    """
    Message class 'StateRotaryServo'.

    Constants:
      FAULT_NONE
      FAULT_CURRENT
      FAULT_TEMPERATURE
      FAULT_BUS_VOLTAGE
      FAULT_BRIDGE_DRIVER
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
        '_header',
        '_goal',
        '_position',
        '_error',
        '_velocity',
        '_effort',
        '_load',
        '_moving',
        '_fault',
        '_control_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'goal': 'double',
        'position': 'double',
        'error': 'double',
        'velocity': 'double',
        'effort': 'double',
        'load': 'double',
        'moving': 'boolean',
        'fault': 'uint8',
        'control_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.goal = kwargs.get('goal', float())
        self.position = kwargs.get('position', float())
        self.error = kwargs.get('error', float())
        self.velocity = kwargs.get('velocity', float())
        self.effort = kwargs.get('effort', float())
        self.load = kwargs.get('load', float())
        self.moving = kwargs.get('moving', bool())
        self.fault = kwargs.get('fault', int())
        self.control_type = kwargs.get('control_type', int())

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
        if self.goal != other.goal:
            return False
        if self.position != other.position:
            return False
        if self.error != other.error:
            return False
        if self.velocity != other.velocity:
            return False
        if self.effort != other.effort:
            return False
        if self.load != other.load:
            return False
        if self.moving != other.moving:
            return False
        if self.fault != other.fault:
            return False
        if self.control_type != other.control_type:
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
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal' field must be of type 'float'"
        self._goal = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
        self._position = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error' field must be of type 'float'"
        self._error = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
        self._velocity = value

    @property
    def effort(self):
        """Message field 'effort'."""
        return self._effort

    @effort.setter
    def effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'effort' field must be of type 'float'"
        self._effort = value

    @property
    def load(self):
        """Message field 'load'."""
        return self._load

    @load.setter
    def load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load' field must be of type 'float'"
        self._load = value

    @property
    def moving(self):
        """Message field 'moving'."""
        return self._moving

    @moving.setter
    def moving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'moving' field must be of type 'bool'"
        self._moving = value

    @property
    def fault(self):
        """Message field 'fault'."""
        return self._fault

    @fault.setter
    def fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fault' field must be an unsigned integer in [0, 255]"
        self._fault = value

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
