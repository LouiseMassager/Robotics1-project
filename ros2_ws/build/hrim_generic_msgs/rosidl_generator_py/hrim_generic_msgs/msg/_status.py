# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hrim_generic_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
                'hrim_generic_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

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


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_header',
        '_instance_id',
        '_system_cpu',
        '_core_temperature',
        '_system_ram_total',
        '_system_ram_used',
        '_system_ram_free',
        '_system_io_in',
        '_system_io_out',
        '_system_ipv4_ip',
        '_system_ipv4_received',
        '_system_ipv4_sent',
        '_ipv4_tcpsock',
        '_ipv4_tcppackets_received',
        '_ipv4_tcppackets_sent',
        '_ipv4_tcp_errors',
        '_ipv4_udppackets_received',
        '_ipv4_udppackets_sent',
        '_ipv4_udp_errors',
        '_cpu_interrupts',
        '_cpu_context_switches',
        '_softnet_processed',
        '_softnet_dropped',
        '_softnet_squeezed',
        '_softnet_received_rps',
        '_softnet_flow_limit_count',
        '_softirqs_hi',
        '_softirqs_timer',
        '_softirqs_net_tx',
        '_softirqs_net_rx',
        '_softirqs_block',
        '_softirqs_irq_poll',
        '_softirqs_tasklet',
        '_softirqs_sched',
        '_softirqs_hrtimer',
        '_softirqs_rcu',
        '_load1',
        '_load5',
        '_load15',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'instance_id': 'uint32',
        'system_cpu': 'float',
        'core_temperature': 'float',
        'system_ram_total': 'uint32',
        'system_ram_used': 'uint32',
        'system_ram_free': 'uint32',
        'system_io_in': 'float',
        'system_io_out': 'float',
        'system_ipv4_ip': 'sequence<string>',
        'system_ipv4_received': 'float',
        'system_ipv4_sent': 'float',
        'ipv4_tcpsock': 'uint16',
        'ipv4_tcppackets_received': 'float',
        'ipv4_tcppackets_sent': 'float',
        'ipv4_tcp_errors': 'float',
        'ipv4_udppackets_received': 'float',
        'ipv4_udppackets_sent': 'float',
        'ipv4_udp_errors': 'float',
        'cpu_interrupts': 'float',
        'cpu_context_switches': 'float',
        'softnet_processed': 'uint32',
        'softnet_dropped': 'uint32',
        'softnet_squeezed': 'uint32',
        'softnet_received_rps': 'uint32',
        'softnet_flow_limit_count': 'uint32',
        'softirqs_hi': 'uint64',
        'softirqs_timer': 'uint64',
        'softirqs_net_tx': 'uint64',
        'softirqs_net_rx': 'uint64',
        'softirqs_block': 'uint64',
        'softirqs_irq_poll': 'uint64',
        'softirqs_tasklet': 'uint64',
        'softirqs_sched': 'uint64',
        'softirqs_hrtimer': 'uint64',
        'softirqs_rcu': 'uint64',
        'load1': 'float',
        'load5': 'float',
        'load15': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.instance_id = kwargs.get('instance_id', int())
        self.system_cpu = kwargs.get('system_cpu', float())
        self.core_temperature = kwargs.get('core_temperature', float())
        self.system_ram_total = kwargs.get('system_ram_total', int())
        self.system_ram_used = kwargs.get('system_ram_used', int())
        self.system_ram_free = kwargs.get('system_ram_free', int())
        self.system_io_in = kwargs.get('system_io_in', float())
        self.system_io_out = kwargs.get('system_io_out', float())
        self.system_ipv4_ip = kwargs.get('system_ipv4_ip', [])
        self.system_ipv4_received = kwargs.get('system_ipv4_received', float())
        self.system_ipv4_sent = kwargs.get('system_ipv4_sent', float())
        self.ipv4_tcpsock = kwargs.get('ipv4_tcpsock', int())
        self.ipv4_tcppackets_received = kwargs.get('ipv4_tcppackets_received', float())
        self.ipv4_tcppackets_sent = kwargs.get('ipv4_tcppackets_sent', float())
        self.ipv4_tcp_errors = kwargs.get('ipv4_tcp_errors', float())
        self.ipv4_udppackets_received = kwargs.get('ipv4_udppackets_received', float())
        self.ipv4_udppackets_sent = kwargs.get('ipv4_udppackets_sent', float())
        self.ipv4_udp_errors = kwargs.get('ipv4_udp_errors', float())
        self.cpu_interrupts = kwargs.get('cpu_interrupts', float())
        self.cpu_context_switches = kwargs.get('cpu_context_switches', float())
        self.softnet_processed = kwargs.get('softnet_processed', int())
        self.softnet_dropped = kwargs.get('softnet_dropped', int())
        self.softnet_squeezed = kwargs.get('softnet_squeezed', int())
        self.softnet_received_rps = kwargs.get('softnet_received_rps', int())
        self.softnet_flow_limit_count = kwargs.get('softnet_flow_limit_count', int())
        self.softirqs_hi = kwargs.get('softirqs_hi', int())
        self.softirqs_timer = kwargs.get('softirqs_timer', int())
        self.softirqs_net_tx = kwargs.get('softirqs_net_tx', int())
        self.softirqs_net_rx = kwargs.get('softirqs_net_rx', int())
        self.softirqs_block = kwargs.get('softirqs_block', int())
        self.softirqs_irq_poll = kwargs.get('softirqs_irq_poll', int())
        self.softirqs_tasklet = kwargs.get('softirqs_tasklet', int())
        self.softirqs_sched = kwargs.get('softirqs_sched', int())
        self.softirqs_hrtimer = kwargs.get('softirqs_hrtimer', int())
        self.softirqs_rcu = kwargs.get('softirqs_rcu', int())
        self.load1 = kwargs.get('load1', float())
        self.load5 = kwargs.get('load5', float())
        self.load15 = kwargs.get('load15', float())

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
        if self.instance_id != other.instance_id:
            return False
        if self.system_cpu != other.system_cpu:
            return False
        if self.core_temperature != other.core_temperature:
            return False
        if self.system_ram_total != other.system_ram_total:
            return False
        if self.system_ram_used != other.system_ram_used:
            return False
        if self.system_ram_free != other.system_ram_free:
            return False
        if self.system_io_in != other.system_io_in:
            return False
        if self.system_io_out != other.system_io_out:
            return False
        if self.system_ipv4_ip != other.system_ipv4_ip:
            return False
        if self.system_ipv4_received != other.system_ipv4_received:
            return False
        if self.system_ipv4_sent != other.system_ipv4_sent:
            return False
        if self.ipv4_tcpsock != other.ipv4_tcpsock:
            return False
        if self.ipv4_tcppackets_received != other.ipv4_tcppackets_received:
            return False
        if self.ipv4_tcppackets_sent != other.ipv4_tcppackets_sent:
            return False
        if self.ipv4_tcp_errors != other.ipv4_tcp_errors:
            return False
        if self.ipv4_udppackets_received != other.ipv4_udppackets_received:
            return False
        if self.ipv4_udppackets_sent != other.ipv4_udppackets_sent:
            return False
        if self.ipv4_udp_errors != other.ipv4_udp_errors:
            return False
        if self.cpu_interrupts != other.cpu_interrupts:
            return False
        if self.cpu_context_switches != other.cpu_context_switches:
            return False
        if self.softnet_processed != other.softnet_processed:
            return False
        if self.softnet_dropped != other.softnet_dropped:
            return False
        if self.softnet_squeezed != other.softnet_squeezed:
            return False
        if self.softnet_received_rps != other.softnet_received_rps:
            return False
        if self.softnet_flow_limit_count != other.softnet_flow_limit_count:
            return False
        if self.softirqs_hi != other.softirqs_hi:
            return False
        if self.softirqs_timer != other.softirqs_timer:
            return False
        if self.softirqs_net_tx != other.softirqs_net_tx:
            return False
        if self.softirqs_net_rx != other.softirqs_net_rx:
            return False
        if self.softirqs_block != other.softirqs_block:
            return False
        if self.softirqs_irq_poll != other.softirqs_irq_poll:
            return False
        if self.softirqs_tasklet != other.softirqs_tasklet:
            return False
        if self.softirqs_sched != other.softirqs_sched:
            return False
        if self.softirqs_hrtimer != other.softirqs_hrtimer:
            return False
        if self.softirqs_rcu != other.softirqs_rcu:
            return False
        if self.load1 != other.load1:
            return False
        if self.load5 != other.load5:
            return False
        if self.load15 != other.load15:
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
    def system_cpu(self):
        """Message field 'system_cpu'."""
        return self._system_cpu

    @system_cpu.setter
    def system_cpu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_cpu' field must be of type 'float'"
        self._system_cpu = value

    @property
    def core_temperature(self):
        """Message field 'core_temperature'."""
        return self._core_temperature

    @core_temperature.setter
    def core_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'core_temperature' field must be of type 'float'"
        self._core_temperature = value

    @property
    def system_ram_total(self):
        """Message field 'system_ram_total'."""
        return self._system_ram_total

    @system_ram_total.setter
    def system_ram_total(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_ram_total' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'system_ram_total' field must be an unsigned integer in [0, 4294967295]"
        self._system_ram_total = value

    @property
    def system_ram_used(self):
        """Message field 'system_ram_used'."""
        return self._system_ram_used

    @system_ram_used.setter
    def system_ram_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_ram_used' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'system_ram_used' field must be an unsigned integer in [0, 4294967295]"
        self._system_ram_used = value

    @property
    def system_ram_free(self):
        """Message field 'system_ram_free'."""
        return self._system_ram_free

    @system_ram_free.setter
    def system_ram_free(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_ram_free' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'system_ram_free' field must be an unsigned integer in [0, 4294967295]"
        self._system_ram_free = value

    @property
    def system_io_in(self):
        """Message field 'system_io_in'."""
        return self._system_io_in

    @system_io_in.setter
    def system_io_in(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_io_in' field must be of type 'float'"
        self._system_io_in = value

    @property
    def system_io_out(self):
        """Message field 'system_io_out'."""
        return self._system_io_out

    @system_io_out.setter
    def system_io_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_io_out' field must be of type 'float'"
        self._system_io_out = value

    @property
    def system_ipv4_ip(self):
        """Message field 'system_ipv4_ip'."""
        return self._system_ipv4_ip

    @system_ipv4_ip.setter
    def system_ipv4_ip(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'system_ipv4_ip' field must be a set or sequence and each value of type 'str'"
        self._system_ipv4_ip = value

    @property
    def system_ipv4_received(self):
        """Message field 'system_ipv4_received'."""
        return self._system_ipv4_received

    @system_ipv4_received.setter
    def system_ipv4_received(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_ipv4_received' field must be of type 'float'"
        self._system_ipv4_received = value

    @property
    def system_ipv4_sent(self):
        """Message field 'system_ipv4_sent'."""
        return self._system_ipv4_sent

    @system_ipv4_sent.setter
    def system_ipv4_sent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_ipv4_sent' field must be of type 'float'"
        self._system_ipv4_sent = value

    @property
    def ipv4_tcpsock(self):
        """Message field 'ipv4_tcpsock'."""
        return self._ipv4_tcpsock

    @ipv4_tcpsock.setter
    def ipv4_tcpsock(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ipv4_tcpsock' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ipv4_tcpsock' field must be an unsigned integer in [0, 65535]"
        self._ipv4_tcpsock = value

    @property
    def ipv4_tcppackets_received(self):
        """Message field 'ipv4_tcppackets_received'."""
        return self._ipv4_tcppackets_received

    @ipv4_tcppackets_received.setter
    def ipv4_tcppackets_received(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipv4_tcppackets_received' field must be of type 'float'"
        self._ipv4_tcppackets_received = value

    @property
    def ipv4_tcppackets_sent(self):
        """Message field 'ipv4_tcppackets_sent'."""
        return self._ipv4_tcppackets_sent

    @ipv4_tcppackets_sent.setter
    def ipv4_tcppackets_sent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipv4_tcppackets_sent' field must be of type 'float'"
        self._ipv4_tcppackets_sent = value

    @property
    def ipv4_tcp_errors(self):
        """Message field 'ipv4_tcp_errors'."""
        return self._ipv4_tcp_errors

    @ipv4_tcp_errors.setter
    def ipv4_tcp_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipv4_tcp_errors' field must be of type 'float'"
        self._ipv4_tcp_errors = value

    @property
    def ipv4_udppackets_received(self):
        """Message field 'ipv4_udppackets_received'."""
        return self._ipv4_udppackets_received

    @ipv4_udppackets_received.setter
    def ipv4_udppackets_received(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipv4_udppackets_received' field must be of type 'float'"
        self._ipv4_udppackets_received = value

    @property
    def ipv4_udppackets_sent(self):
        """Message field 'ipv4_udppackets_sent'."""
        return self._ipv4_udppackets_sent

    @ipv4_udppackets_sent.setter
    def ipv4_udppackets_sent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipv4_udppackets_sent' field must be of type 'float'"
        self._ipv4_udppackets_sent = value

    @property
    def ipv4_udp_errors(self):
        """Message field 'ipv4_udp_errors'."""
        return self._ipv4_udp_errors

    @ipv4_udp_errors.setter
    def ipv4_udp_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipv4_udp_errors' field must be of type 'float'"
        self._ipv4_udp_errors = value

    @property
    def cpu_interrupts(self):
        """Message field 'cpu_interrupts'."""
        return self._cpu_interrupts

    @cpu_interrupts.setter
    def cpu_interrupts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_interrupts' field must be of type 'float'"
        self._cpu_interrupts = value

    @property
    def cpu_context_switches(self):
        """Message field 'cpu_context_switches'."""
        return self._cpu_context_switches

    @cpu_context_switches.setter
    def cpu_context_switches(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_context_switches' field must be of type 'float'"
        self._cpu_context_switches = value

    @property
    def softnet_processed(self):
        """Message field 'softnet_processed'."""
        return self._softnet_processed

    @softnet_processed.setter
    def softnet_processed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softnet_processed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'softnet_processed' field must be an unsigned integer in [0, 4294967295]"
        self._softnet_processed = value

    @property
    def softnet_dropped(self):
        """Message field 'softnet_dropped'."""
        return self._softnet_dropped

    @softnet_dropped.setter
    def softnet_dropped(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softnet_dropped' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'softnet_dropped' field must be an unsigned integer in [0, 4294967295]"
        self._softnet_dropped = value

    @property
    def softnet_squeezed(self):
        """Message field 'softnet_squeezed'."""
        return self._softnet_squeezed

    @softnet_squeezed.setter
    def softnet_squeezed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softnet_squeezed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'softnet_squeezed' field must be an unsigned integer in [0, 4294967295]"
        self._softnet_squeezed = value

    @property
    def softnet_received_rps(self):
        """Message field 'softnet_received_rps'."""
        return self._softnet_received_rps

    @softnet_received_rps.setter
    def softnet_received_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softnet_received_rps' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'softnet_received_rps' field must be an unsigned integer in [0, 4294967295]"
        self._softnet_received_rps = value

    @property
    def softnet_flow_limit_count(self):
        """Message field 'softnet_flow_limit_count'."""
        return self._softnet_flow_limit_count

    @softnet_flow_limit_count.setter
    def softnet_flow_limit_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softnet_flow_limit_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'softnet_flow_limit_count' field must be an unsigned integer in [0, 4294967295]"
        self._softnet_flow_limit_count = value

    @property
    def softirqs_hi(self):
        """Message field 'softirqs_hi'."""
        return self._softirqs_hi

    @softirqs_hi.setter
    def softirqs_hi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_hi' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_hi' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_hi = value

    @property
    def softirqs_timer(self):
        """Message field 'softirqs_timer'."""
        return self._softirqs_timer

    @softirqs_timer.setter
    def softirqs_timer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_timer' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_timer' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_timer = value

    @property
    def softirqs_net_tx(self):
        """Message field 'softirqs_net_tx'."""
        return self._softirqs_net_tx

    @softirqs_net_tx.setter
    def softirqs_net_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_net_tx' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_net_tx' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_net_tx = value

    @property
    def softirqs_net_rx(self):
        """Message field 'softirqs_net_rx'."""
        return self._softirqs_net_rx

    @softirqs_net_rx.setter
    def softirqs_net_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_net_rx' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_net_rx' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_net_rx = value

    @property
    def softirqs_block(self):
        """Message field 'softirqs_block'."""
        return self._softirqs_block

    @softirqs_block.setter
    def softirqs_block(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_block' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_block' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_block = value

    @property
    def softirqs_irq_poll(self):
        """Message field 'softirqs_irq_poll'."""
        return self._softirqs_irq_poll

    @softirqs_irq_poll.setter
    def softirqs_irq_poll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_irq_poll' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_irq_poll' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_irq_poll = value

    @property
    def softirqs_tasklet(self):
        """Message field 'softirqs_tasklet'."""
        return self._softirqs_tasklet

    @softirqs_tasklet.setter
    def softirqs_tasklet(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_tasklet' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_tasklet' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_tasklet = value

    @property
    def softirqs_sched(self):
        """Message field 'softirqs_sched'."""
        return self._softirqs_sched

    @softirqs_sched.setter
    def softirqs_sched(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_sched' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_sched' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_sched = value

    @property
    def softirqs_hrtimer(self):
        """Message field 'softirqs_hrtimer'."""
        return self._softirqs_hrtimer

    @softirqs_hrtimer.setter
    def softirqs_hrtimer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_hrtimer' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_hrtimer' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_hrtimer = value

    @property
    def softirqs_rcu(self):
        """Message field 'softirqs_rcu'."""
        return self._softirqs_rcu

    @softirqs_rcu.setter
    def softirqs_rcu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'softirqs_rcu' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'softirqs_rcu' field must be an unsigned integer in [0, 18446744073709551615]"
        self._softirqs_rcu = value

    @property
    def load1(self):
        """Message field 'load1'."""
        return self._load1

    @load1.setter
    def load1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load1' field must be of type 'float'"
        self._load1 = value

    @property
    def load5(self):
        """Message field 'load5'."""
        return self._load5

    @load5.setter
    def load5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load5' field must be of type 'float'"
        self._load5 = value

    @property
    def load15(self):
        """Message field 'load15'."""
        return self._load15

    @load15.setter
    def load15(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load15' field must be of type 'float'"
        self._load15 = value
