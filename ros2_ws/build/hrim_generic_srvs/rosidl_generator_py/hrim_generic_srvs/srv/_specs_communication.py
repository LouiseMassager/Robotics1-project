# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_generic_srvs:srv/SpecsCommunication.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpecsCommunication_Request(type):
    """Metaclass of message 'SpecsCommunication_Request'."""

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
            module = import_type_support('hrim_generic_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_generic_srvs.srv.SpecsCommunication_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_communication__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_communication__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_communication__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_communication__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_communication__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsCommunication_Request(metaclass=Metaclass_SpecsCommunication_Request):
    """Message class 'SpecsCommunication_Request'."""

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


class Metaclass_SpecsCommunication_Response(type):
    """Metaclass of message 'SpecsCommunication_Response'."""

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
            module = import_type_support('hrim_generic_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_generic_srvs.srv.SpecsCommunication_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_communication__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_communication__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_communication__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_communication__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_communication__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsCommunication_Response(metaclass=Metaclass_SpecsCommunication_Response):
    """Message class 'SpecsCommunication_Response'."""

    __slots__ = [
        '_min_comm_rate',
        '_max_comm_rate',
        '_max_size_msgs',
    ]

    _fields_and_field_types = {
        'min_comm_rate': 'double',
        'max_comm_rate': 'double',
        'max_size_msgs': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.min_comm_rate = kwargs.get('min_comm_rate', float())
        self.max_comm_rate = kwargs.get('max_comm_rate', float())
        self.max_size_msgs = kwargs.get('max_size_msgs', float())

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
        if self.min_comm_rate != other.min_comm_rate:
            return False
        if self.max_comm_rate != other.max_comm_rate:
            return False
        if self.max_size_msgs != other.max_size_msgs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def min_comm_rate(self):
        """Message field 'min_comm_rate'."""
        return self._min_comm_rate

    @min_comm_rate.setter
    def min_comm_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_comm_rate' field must be of type 'float'"
        self._min_comm_rate = value

    @property
    def max_comm_rate(self):
        """Message field 'max_comm_rate'."""
        return self._max_comm_rate

    @max_comm_rate.setter
    def max_comm_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_comm_rate' field must be of type 'float'"
        self._max_comm_rate = value

    @property
    def max_size_msgs(self):
        """Message field 'max_size_msgs'."""
        return self._max_size_msgs

    @max_size_msgs.setter
    def max_size_msgs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_size_msgs' field must be of type 'float'"
        self._max_size_msgs = value


class Metaclass_SpecsCommunication(type):
    """Metaclass of service 'SpecsCommunication'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hrim_generic_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hrim_generic_srvs.srv.SpecsCommunication')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__specs_communication

            from hrim_generic_srvs.srv import _specs_communication
            if _specs_communication.Metaclass_SpecsCommunication_Request._TYPE_SUPPORT is None:
                _specs_communication.Metaclass_SpecsCommunication_Request.__import_type_support__()
            if _specs_communication.Metaclass_SpecsCommunication_Response._TYPE_SUPPORT is None:
                _specs_communication.Metaclass_SpecsCommunication_Response.__import_type_support__()


class SpecsCommunication(metaclass=Metaclass_SpecsCommunication):
    from hrim_generic_srvs.srv._specs_communication import SpecsCommunication_Request as Request
    from hrim_generic_srvs.srv._specs_communication import SpecsCommunication_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
