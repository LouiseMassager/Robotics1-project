# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_actuator_gripper_srvs:srv/SpecsMagneticGripper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpecsMagneticGripper_Request(type):
    """Metaclass of message 'SpecsMagneticGripper_Request'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsMagneticGripper_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_magnetic_gripper__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_magnetic_gripper__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_magnetic_gripper__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_magnetic_gripper__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_magnetic_gripper__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsMagneticGripper_Request(metaclass=Metaclass_SpecsMagneticGripper_Request):
    """Message class 'SpecsMagneticGripper_Request'."""

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


class Metaclass_SpecsMagneticGripper_Response(type):
    """Metaclass of message 'SpecsMagneticGripper_Response'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsMagneticGripper_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__specs_magnetic_gripper__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__specs_magnetic_gripper__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__specs_magnetic_gripper__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__specs_magnetic_gripper__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__specs_magnetic_gripper__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpecsMagneticGripper_Response(metaclass=Metaclass_SpecsMagneticGripper_Response):
    """Message class 'SpecsMagneticGripper_Response'."""

    __slots__ = [
        '_magnetic_force',
        '_max_payload',
    ]

    _fields_and_field_types = {
        'magnetic_force': 'float',
        'max_payload': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.magnetic_force = kwargs.get('magnetic_force', float())
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
        if self.magnetic_force != other.magnetic_force:
            return False
        if self.max_payload != other.max_payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def magnetic_force(self):
        """Message field 'magnetic_force'."""
        return self._magnetic_force

    @magnetic_force.setter
    def magnetic_force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'magnetic_force' field must be of type 'float'"
        self._magnetic_force = value

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


class Metaclass_SpecsMagneticGripper(type):
    """Metaclass of service 'SpecsMagneticGripper'."""

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
                'hrim_actuator_gripper_srvs.srv.SpecsMagneticGripper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__specs_magnetic_gripper

            from hrim_actuator_gripper_srvs.srv import _specs_magnetic_gripper
            if _specs_magnetic_gripper.Metaclass_SpecsMagneticGripper_Request._TYPE_SUPPORT is None:
                _specs_magnetic_gripper.Metaclass_SpecsMagneticGripper_Request.__import_type_support__()
            if _specs_magnetic_gripper.Metaclass_SpecsMagneticGripper_Response._TYPE_SUPPORT is None:
                _specs_magnetic_gripper.Metaclass_SpecsMagneticGripper_Response.__import_type_support__()


class SpecsMagneticGripper(metaclass=Metaclass_SpecsMagneticGripper):
    from hrim_actuator_gripper_srvs.srv._specs_magnetic_gripper import SpecsMagneticGripper_Request as Request
    from hrim_actuator_gripper_srvs.srv._specs_magnetic_gripper import SpecsMagneticGripper_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
