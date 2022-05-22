# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_generic_srvs:srv/ID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ID_Request(type):
    """Metaclass of message 'ID_Request'."""

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
                'hrim_generic_srvs.srv.ID_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__id__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__id__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__id__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__id__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__id__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ID_Request(metaclass=Metaclass_ID_Request):
    """Message class 'ID_Request'."""

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


class Metaclass_ID_Response(type):
    """Metaclass of message 'ID_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HRIM_COMM': 0,
        'HRIM_SENSOR': 1,
        'HRIM_ACTUATOR': 2,
        'HRIM_COGNITION': 3,
        'HRIM_UI': 4,
        'HRIM_POWER': 5,
        'HRIM_COMPOSITE': 6,
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
                'hrim_generic_srvs.srv.ID_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__id__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__id__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__id__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__id__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__id__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HRIM_COMM': cls.__constants['HRIM_COMM'],
            'HRIM_SENSOR': cls.__constants['HRIM_SENSOR'],
            'HRIM_ACTUATOR': cls.__constants['HRIM_ACTUATOR'],
            'HRIM_COGNITION': cls.__constants['HRIM_COGNITION'],
            'HRIM_UI': cls.__constants['HRIM_UI'],
            'HRIM_POWER': cls.__constants['HRIM_POWER'],
            'HRIM_COMPOSITE': cls.__constants['HRIM_COMPOSITE'],
        }

    @property
    def HRIM_COMM(self):
        """Message constant 'HRIM_COMM'."""
        return Metaclass_ID_Response.__constants['HRIM_COMM']

    @property
    def HRIM_SENSOR(self):
        """Message constant 'HRIM_SENSOR'."""
        return Metaclass_ID_Response.__constants['HRIM_SENSOR']

    @property
    def HRIM_ACTUATOR(self):
        """Message constant 'HRIM_ACTUATOR'."""
        return Metaclass_ID_Response.__constants['HRIM_ACTUATOR']

    @property
    def HRIM_COGNITION(self):
        """Message constant 'HRIM_COGNITION'."""
        return Metaclass_ID_Response.__constants['HRIM_COGNITION']

    @property
    def HRIM_UI(self):
        """Message constant 'HRIM_UI'."""
        return Metaclass_ID_Response.__constants['HRIM_UI']

    @property
    def HRIM_POWER(self):
        """Message constant 'HRIM_POWER'."""
        return Metaclass_ID_Response.__constants['HRIM_POWER']

    @property
    def HRIM_COMPOSITE(self):
        """Message constant 'HRIM_COMPOSITE'."""
        return Metaclass_ID_Response.__constants['HRIM_COMPOSITE']


class ID_Response(metaclass=Metaclass_ID_Response):
    """
    Message class 'ID_Response'.

    Constants:
      HRIM_COMM
      HRIM_SENSOR
      HRIM_ACTUATOR
      HRIM_COGNITION
      HRIM_UI
      HRIM_POWER
      HRIM_COMPOSITE
    """

    __slots__ = [
        '_device_kind_id',
        '_device_name',
        '_vendor_id',
        '_product_id',
        '_instance_id',
        '_hrim_version',
        '_hros_version',
    ]

    _fields_and_field_types = {
        'device_kind_id': 'uint8',
        'device_name': 'string',
        'vendor_id': 'uint32',
        'product_id': 'uint32',
        'instance_id': 'uint32',
        'hrim_version': 'string',
        'hros_version': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_kind_id = kwargs.get('device_kind_id', int())
        self.device_name = kwargs.get('device_name', str())
        self.vendor_id = kwargs.get('vendor_id', int())
        self.product_id = kwargs.get('product_id', int())
        self.instance_id = kwargs.get('instance_id', int())
        self.hrim_version = kwargs.get('hrim_version', str())
        self.hros_version = kwargs.get('hros_version', str())

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
        if self.device_kind_id != other.device_kind_id:
            return False
        if self.device_name != other.device_name:
            return False
        if self.vendor_id != other.vendor_id:
            return False
        if self.product_id != other.product_id:
            return False
        if self.instance_id != other.instance_id:
            return False
        if self.hrim_version != other.hrim_version:
            return False
        if self.hros_version != other.hros_version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def device_kind_id(self):
        """Message field 'device_kind_id'."""
        return self._device_kind_id

    @device_kind_id.setter
    def device_kind_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_kind_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_kind_id' field must be an unsigned integer in [0, 255]"
        self._device_kind_id = value

    @property
    def device_name(self):
        """Message field 'device_name'."""
        return self._device_name

    @device_name.setter
    def device_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_name' field must be of type 'str'"
        self._device_name = value

    @property
    def vendor_id(self):
        """Message field 'vendor_id'."""
        return self._vendor_id

    @vendor_id.setter
    def vendor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vendor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vendor_id' field must be an unsigned integer in [0, 4294967295]"
        self._vendor_id = value

    @property
    def product_id(self):
        """Message field 'product_id'."""
        return self._product_id

    @product_id.setter
    def product_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'product_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'product_id' field must be an unsigned integer in [0, 4294967295]"
        self._product_id = value

    @property
    def instance_id(self):
        """Message field 'instance_id'."""
        return self._instance_id

    @instance_id.setter
    def instance_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'instance_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'instance_id' field must be an unsigned integer in [0, 4294967295]"
        self._instance_id = value

    @property
    def hrim_version(self):
        """Message field 'hrim_version'."""
        return self._hrim_version

    @hrim_version.setter
    def hrim_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hrim_version' field must be of type 'str'"
        self._hrim_version = value

    @property
    def hros_version(self):
        """Message field 'hros_version'."""
        return self._hros_version

    @hros_version.setter
    def hros_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hros_version' field must be of type 'str'"
        self._hros_version = value


class Metaclass_ID(type):
    """Metaclass of service 'ID'."""

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
                'hrim_generic_srvs.srv.ID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__id

            from hrim_generic_srvs.srv import _id
            if _id.Metaclass_ID_Request._TYPE_SUPPORT is None:
                _id.Metaclass_ID_Request.__import_type_support__()
            if _id.Metaclass_ID_Response._TYPE_SUPPORT is None:
                _id.Metaclass_ID_Response.__import_type_support__()


class ID(metaclass=Metaclass_ID):
    from hrim_generic_srvs.srv._id import ID_Request as Request
    from hrim_generic_srvs.srv._id import ID_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
