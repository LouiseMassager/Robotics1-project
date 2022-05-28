# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_gripper_srvs:srv/SpecsFingerGripper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpecsFingerGripper_Request(type):
    """Metaclass of message 'SpecsFingerGripper_Request'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsFingerGripper_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_finger_gripper__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_finger_gripper__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_finger_gripper__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_finger_gripper__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_finger_gripper__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsFingerGripper_Request(metaclass=Metaclass_SpecsFingerGripper_Request):
    """Message class 'SpecsFingerGripper_Request'."""

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


class Metaclass_SpecsFingerGripper_Response(type):
    """Metaclass of message 'SpecsFingerGripper_Response'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsFingerGripper_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_finger_gripper__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_finger_gripper__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_finger_gripper__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_finger_gripper__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_finger_gripper__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsFingerGripper_Response(metaclass=Metaclass_SpecsFingerGripper_Response):
    """Message class 'SpecsFingerGripper_Response'."""

    __slots__ = [
        '_min_force',
        '_max_force',
        '_max_payload',
        '_min_speed',
        '_max_speed',
        '_max_acceleration',
        '_max_length',
        '_max_angle',
        '_repeatability',
    ]

    _fields_and_field_types = {
        'min_force': 'float',
        'max_force': 'float',
        'max_payload': 'float',
        'min_speed': 'float',
        'max_speed': 'float',
        'max_acceleration': 'float',
        'max_length': 'float',
        'max_angle': 'float',
        'repeatability': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.min_force = kwargs.get('min_force', float())
        self.max_force = kwargs.get('max_force', float())
        self.max_payload = kwargs.get('max_payload', float())
        self.min_speed = kwargs.get('min_speed', float())
        self.max_speed = kwargs.get('max_speed', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.max_length = kwargs.get('max_length', float())
        self.max_angle = kwargs.get('max_angle', float())
        self.repeatability = kwargs.get('repeatability', float())

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
        if self.min_force != other.min_force:
            return False
        if self.max_force != other.max_force:
            return False
        if self.max_payload != other.max_payload:
            return False
        if self.min_speed != other.min_speed:
            return False
        if self.max_speed != other.max_speed:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.max_length != other.max_length:
            return False
        if self.max_angle != other.max_angle:
            return False
        if self.repeatability != other.repeatability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def min_force(self):
        """Message field 'min_force'."""
        return self._min_force

    @min_force.setter
    def min_force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_force' field must be of type 'float'"
        self._min_force = value

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

    @property
    def min_speed(self):
        """Message field 'min_speed'."""
        return self._min_speed

    @min_speed.setter
    def min_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_speed' field must be of type 'float'"
        self._min_speed = value

    @property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed' field must be of type 'float'"
        self._max_speed = value

    @property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
        self._max_acceleration = value

    @property
    def max_length(self):
        """Message field 'max_length'."""
        return self._max_length

    @max_length.setter
    def max_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_length' field must be of type 'float'"
        self._max_length = value

    @property
    def max_angle(self):
        """Message field 'max_angle'."""
        return self._max_angle

    @max_angle.setter
    def max_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_angle' field must be of type 'float'"
        self._max_angle = value

    @property
    def repeatability(self):
        """Message field 'repeatability'."""
        return self._repeatability

    @repeatability.setter
    def repeatability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'repeatability' field must be of type 'float'"
        self._repeatability = value


class Metaclass_SpecsFingerGripper(type):
    """Metaclass of service 'SpecsFingerGripper'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsFingerGripper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__specs_finger_gripper

            from hrim_actuator_gripper_srvs.srv import _specs_finger_gripper
            if _specs_finger_gripper.Metaclass_SpecsFingerGripper_Request._TYPE_SUPPORT is None:
                _specs_finger_gripper.Metaclass_SpecsFingerGripper_Request.__import_type_support__()
            if _specs_finger_gripper.Metaclass_SpecsFingerGripper_Response._TYPE_SUPPORT is None:
                _specs_finger_gripper.Metaclass_SpecsFingerGripper_Response.__import_type_support__()


class SpecsFingerGripper(metaclass=Metaclass_SpecsFingerGripper):
    from hrim_actuator_gripper_srvs.srv._specs_finger_gripper import SpecsFingerGripper_Request as Request
    from hrim_actuator_gripper_srvs.srv._specs_finger_gripper import SpecsFingerGripper_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
