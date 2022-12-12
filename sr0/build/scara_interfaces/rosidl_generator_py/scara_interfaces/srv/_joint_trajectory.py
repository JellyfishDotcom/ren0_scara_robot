# generated from rosidl_generator_py/resource/_idl.py.em
# with input from scara_interfaces:srv/JointTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointTrajectory_Request(type):
    """Metaclass of message 'JointTrajectory_Request'."""

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
            module = import_type_support('scara_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_interfaces.srv.JointTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_trajectory__request

            from trajectory_msgs.msg import JointTrajectoryPoint
            if JointTrajectoryPoint.__class__._TYPE_SUPPORT is None:
                JointTrajectoryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointTrajectory_Request(metaclass=Metaclass_JointTrajectory_Request):
    """Message class 'JointTrajectory_Request'."""

    __slots__ = [
        '_initial_point',
        '_final_point',
    ]

    _fields_and_field_types = {
        'initial_point': 'trajectory_msgs/JointTrajectoryPoint',
        'final_point': 'trajectory_msgs/JointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.initial_point = kwargs.get('initial_point', JointTrajectoryPoint())
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.final_point = kwargs.get('final_point', JointTrajectoryPoint())

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
        if self.initial_point != other.initial_point:
            return False
        if self.final_point != other.final_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def initial_point(self):
        """Message field 'initial_point'."""
        return self._initial_point

    @initial_point.setter
    def initial_point(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'initial_point' field must be a sub message of type 'JointTrajectoryPoint'"
        self._initial_point = value

    @property
    def final_point(self):
        """Message field 'final_point'."""
        return self._final_point

    @final_point.setter
    def final_point(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'final_point' field must be a sub message of type 'JointTrajectoryPoint'"
        self._final_point = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_JointTrajectory_Response(type):
    """Metaclass of message 'JointTrajectory_Response'."""

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
            module = import_type_support('scara_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_interfaces.srv.JointTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_trajectory__response

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointTrajectory_Response(metaclass=Metaclass_JointTrajectory_Response):
    """Message class 'JointTrajectory_Response'."""

    __slots__ = [
        '_trajectory',
    ]

    _fields_and_field_types = {
        'trajectory': 'trajectory_msgs/JointTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectory
        self.trajectory = kwargs.get('trajectory', JointTrajectory())

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
        if self.trajectory != other.trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'trajectory' field must be a sub message of type 'JointTrajectory'"
        self._trajectory = value


class Metaclass_JointTrajectory(type):
    """Metaclass of service 'JointTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_interfaces.srv.JointTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__joint_trajectory

            from scara_interfaces.srv import _joint_trajectory
            if _joint_trajectory.Metaclass_JointTrajectory_Request._TYPE_SUPPORT is None:
                _joint_trajectory.Metaclass_JointTrajectory_Request.__import_type_support__()
            if _joint_trajectory.Metaclass_JointTrajectory_Response._TYPE_SUPPORT is None:
                _joint_trajectory.Metaclass_JointTrajectory_Response.__import_type_support__()


class JointTrajectory(metaclass=Metaclass_JointTrajectory):
    from scara_interfaces.srv._joint_trajectory import JointTrajectory_Request as Request
    from scara_interfaces.srv._joint_trajectory import JointTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
