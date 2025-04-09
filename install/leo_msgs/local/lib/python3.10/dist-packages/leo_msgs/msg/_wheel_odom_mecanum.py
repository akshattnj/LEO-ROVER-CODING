# generated from rosidl_generator_py/resource/_idl.py.em
# with input from leo_msgs:msg/WheelOdomMecanum.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelOdomMecanum(type):
    """Metaclass of message 'WheelOdomMecanum'."""

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
            module = import_type_support('leo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'leo_msgs.msg.WheelOdomMecanum')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_odom_mecanum
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_odom_mecanum
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_odom_mecanum
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_odom_mecanum
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_odom_mecanum

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WheelOdomMecanum(metaclass=Metaclass_WheelOdomMecanum):
    """Message class 'WheelOdomMecanum'."""

    __slots__ = [
        '_stamp',
        '_velocity_lin_x',
        '_velocity_lin_y',
        '_velocity_ang',
        '_pose_x',
        '_pose_y',
        '_pose_yaw',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'velocity_lin_x': 'float',
        'velocity_lin_y': 'float',
        'velocity_ang': 'float',
        'pose_x': 'float',
        'pose_y': 'float',
        'pose_yaw': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.velocity_lin_x = kwargs.get('velocity_lin_x', float())
        self.velocity_lin_y = kwargs.get('velocity_lin_y', float())
        self.velocity_ang = kwargs.get('velocity_ang', float())
        self.pose_x = kwargs.get('pose_x', float())
        self.pose_y = kwargs.get('pose_y', float())
        self.pose_yaw = kwargs.get('pose_yaw', float())

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
        if self.stamp != other.stamp:
            return False
        if self.velocity_lin_x != other.velocity_lin_x:
            return False
        if self.velocity_lin_y != other.velocity_lin_y:
            return False
        if self.velocity_ang != other.velocity_ang:
            return False
        if self.pose_x != other.pose_x:
            return False
        if self.pose_y != other.pose_y:
            return False
        if self.pose_yaw != other.pose_yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def velocity_lin_x(self):
        """Message field 'velocity_lin_x'."""
        return self._velocity_lin_x

    @velocity_lin_x.setter
    def velocity_lin_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_lin_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_lin_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_lin_x = value

    @builtins.property
    def velocity_lin_y(self):
        """Message field 'velocity_lin_y'."""
        return self._velocity_lin_y

    @velocity_lin_y.setter
    def velocity_lin_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_lin_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_lin_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_lin_y = value

    @builtins.property
    def velocity_ang(self):
        """Message field 'velocity_ang'."""
        return self._velocity_ang

    @velocity_ang.setter
    def velocity_ang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_ang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_ang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_ang = value

    @builtins.property
    def pose_x(self):
        """Message field 'pose_x'."""
        return self._pose_x

    @pose_x.setter
    def pose_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pose_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_x = value

    @builtins.property
    def pose_y(self):
        """Message field 'pose_y'."""
        return self._pose_y

    @pose_y.setter
    def pose_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pose_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_y = value

    @builtins.property
    def pose_yaw(self):
        """Message field 'pose_yaw'."""
        return self._pose_yaw

    @pose_yaw.setter
    def pose_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pose_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_yaw = value
