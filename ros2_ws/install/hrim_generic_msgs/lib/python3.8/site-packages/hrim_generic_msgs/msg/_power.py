# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_generic_msgs:msg/Power.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Power(type):
    """Metaclass of message 'Power'."""

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
            module = import_type_support('hrim_generic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_generic_msgs.msg.Power')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Power(metaclass=Metaclass_Power):
    """Message class 'Power'."""

    __slots__ = [
        '_header',
        '_voltage',
        '_current_consumption',
        '_current_surplus',
        '_power_consumption',
        '_power_surplus',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'voltage': 'float',
        'current_consumption': 'float',
        'current_surplus': 'float',
        'power_consumption': 'float',
        'power_surplus': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.voltage = kwargs.get('voltage', float())
        self.current_consumption = kwargs.get('current_consumption', float())
        self.current_surplus = kwargs.get('current_surplus', float())
        self.power_consumption = kwargs.get('power_consumption', float())
        self.power_surplus = kwargs.get('power_surplus', float())

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
        if self.voltage != other.voltage:
            return False
        if self.current_consumption != other.current_consumption:
            return False
        if self.current_surplus != other.current_surplus:
            return False
        if self.power_consumption != other.power_consumption:
            return False
        if self.power_surplus != other.power_surplus:
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
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
        self._voltage = value

    @property
    def current_consumption(self):
        """Message field 'current_consumption'."""
        return self._current_consumption

    @current_consumption.setter
    def current_consumption(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_consumption' field must be of type 'float'"
        self._current_consumption = value

    @property
    def current_surplus(self):
        """Message field 'current_surplus'."""
        return self._current_surplus

    @current_surplus.setter
    def current_surplus(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_surplus' field must be of type 'float'"
        self._current_surplus = value

    @property
    def power_consumption(self):
        """Message field 'power_consumption'."""
        return self._power_consumption

    @power_consumption.setter
    def power_consumption(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_consumption' field must be of type 'float'"
        self._power_consumption = value

    @property
    def power_surplus(self):
        """Message field 'power_surplus'."""
        return self._power_surplus

    @power_surplus.setter
    def power_surplus(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_surplus' field must be of type 'float'"
        self._power_surplus = value
