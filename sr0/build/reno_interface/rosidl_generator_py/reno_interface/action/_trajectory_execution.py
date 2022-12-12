# generated from rosidl_generator_py/resource/_idl.py.em
# with input from reno_interface:action/TrajectoryExecution.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryExecution_Goal(type):
    """Metaclass of message 'TrajectoryExecution_Goal'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__goal

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


class TrajectoryExecution_Goal(metaclass=Metaclass_TrajectoryExecution_Goal):
    """Message class 'TrajectoryExecution_Goal'."""

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryExecution_Result(type):
    """Metaclass of message 'TrajectoryExecution_Result'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__result

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


class TrajectoryExecution_Result(metaclass=Metaclass_TrajectoryExecution_Result):
    """Message class 'TrajectoryExecution_Result'."""

    __slots__ = [
        '_final_point',
    ]

    _fields_and_field_types = {
        'final_point': 'trajectory_msgs/JointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.final_point != other.final_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_TrajectoryExecution_Feedback(type):
    """Metaclass of message 'TrajectoryExecution_Feedback'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__feedback

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


class TrajectoryExecution_Feedback(metaclass=Metaclass_TrajectoryExecution_Feedback):
    """Message class 'TrajectoryExecution_Feedback'."""

    __slots__ = [
        '_actual_point',
    ]

    _fields_and_field_types = {
        'actual_point': 'trajectory_msgs/JointTrajectoryPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectoryPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectoryPoint
        self.actual_point = kwargs.get('actual_point', JointTrajectoryPoint())

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
        if self.actual_point != other.actual_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def actual_point(self):
        """Message field 'actual_point'."""
        return self._actual_point

    @actual_point.setter
    def actual_point(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectoryPoint
            assert \
                isinstance(value, JointTrajectoryPoint), \
                "The 'actual_point' field must be a sub message of type 'JointTrajectoryPoint'"
        self._actual_point = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryExecution_SendGoal_Request(type):
    """Metaclass of message 'TrajectoryExecution_SendGoal_Request'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__send_goal__request

            from reno_interface.action import TrajectoryExecution
            if TrajectoryExecution.Goal.__class__._TYPE_SUPPORT is None:
                TrajectoryExecution.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryExecution_SendGoal_Request(metaclass=Metaclass_TrajectoryExecution_SendGoal_Request):
    """Message class 'TrajectoryExecution_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'reno_interface/TrajectoryExecution_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['reno_interface', 'action'], 'TrajectoryExecution_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from reno_interface.action._trajectory_execution import TrajectoryExecution_Goal
        self.goal = kwargs.get('goal', TrajectoryExecution_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from reno_interface.action._trajectory_execution import TrajectoryExecution_Goal
            assert \
                isinstance(value, TrajectoryExecution_Goal), \
                "The 'goal' field must be a sub message of type 'TrajectoryExecution_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryExecution_SendGoal_Response(type):
    """Metaclass of message 'TrajectoryExecution_SendGoal_Response'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__send_goal__response

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


class TrajectoryExecution_SendGoal_Response(metaclass=Metaclass_TrajectoryExecution_SendGoal_Response):
    """Message class 'TrajectoryExecution_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
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


class Metaclass_TrajectoryExecution_SendGoal(type):
    """Metaclass of service 'TrajectoryExecution_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__trajectory_execution__send_goal

            from reno_interface.action import _trajectory_execution
            if _trajectory_execution.Metaclass_TrajectoryExecution_SendGoal_Request._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_SendGoal_Request.__import_type_support__()
            if _trajectory_execution.Metaclass_TrajectoryExecution_SendGoal_Response._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_SendGoal_Response.__import_type_support__()


class TrajectoryExecution_SendGoal(metaclass=Metaclass_TrajectoryExecution_SendGoal):
    from reno_interface.action._trajectory_execution import TrajectoryExecution_SendGoal_Request as Request
    from reno_interface.action._trajectory_execution import TrajectoryExecution_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryExecution_GetResult_Request(type):
    """Metaclass of message 'TrajectoryExecution_GetResult_Request'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryExecution_GetResult_Request(metaclass=Metaclass_TrajectoryExecution_GetResult_Request):
    """Message class 'TrajectoryExecution_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryExecution_GetResult_Response(type):
    """Metaclass of message 'TrajectoryExecution_GetResult_Response'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__get_result__response

            from reno_interface.action import TrajectoryExecution
            if TrajectoryExecution.Result.__class__._TYPE_SUPPORT is None:
                TrajectoryExecution.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryExecution_GetResult_Response(metaclass=Metaclass_TrajectoryExecution_GetResult_Response):
    """Message class 'TrajectoryExecution_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'reno_interface/TrajectoryExecution_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['reno_interface', 'action'], 'TrajectoryExecution_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from reno_interface.action._trajectory_execution import TrajectoryExecution_Result
        self.result = kwargs.get('result', TrajectoryExecution_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from reno_interface.action._trajectory_execution import TrajectoryExecution_Result
            assert \
                isinstance(value, TrajectoryExecution_Result), \
                "The 'result' field must be a sub message of type 'TrajectoryExecution_Result'"
        self._result = value


class Metaclass_TrajectoryExecution_GetResult(type):
    """Metaclass of service 'TrajectoryExecution_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__trajectory_execution__get_result

            from reno_interface.action import _trajectory_execution
            if _trajectory_execution.Metaclass_TrajectoryExecution_GetResult_Request._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_GetResult_Request.__import_type_support__()
            if _trajectory_execution.Metaclass_TrajectoryExecution_GetResult_Response._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_GetResult_Response.__import_type_support__()


class TrajectoryExecution_GetResult(metaclass=Metaclass_TrajectoryExecution_GetResult):
    from reno_interface.action._trajectory_execution import TrajectoryExecution_GetResult_Request as Request
    from reno_interface.action._trajectory_execution import TrajectoryExecution_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryExecution_FeedbackMessage(type):
    """Metaclass of message 'TrajectoryExecution_FeedbackMessage'."""

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
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_execution__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_execution__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_execution__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_execution__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_execution__feedback_message

            from reno_interface.action import TrajectoryExecution
            if TrajectoryExecution.Feedback.__class__._TYPE_SUPPORT is None:
                TrajectoryExecution.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryExecution_FeedbackMessage(metaclass=Metaclass_TrajectoryExecution_FeedbackMessage):
    """Message class 'TrajectoryExecution_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'reno_interface/TrajectoryExecution_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['reno_interface', 'action'], 'TrajectoryExecution_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from reno_interface.action._trajectory_execution import TrajectoryExecution_Feedback
        self.feedback = kwargs.get('feedback', TrajectoryExecution_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from reno_interface.action._trajectory_execution import TrajectoryExecution_Feedback
            assert \
                isinstance(value, TrajectoryExecution_Feedback), \
                "The 'feedback' field must be a sub message of type 'TrajectoryExecution_Feedback'"
        self._feedback = value


class Metaclass_TrajectoryExecution(type):
    """Metaclass of action 'TrajectoryExecution'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('reno_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'reno_interface.action.TrajectoryExecution')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__trajectory_execution

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from reno_interface.action import _trajectory_execution
            if _trajectory_execution.Metaclass_TrajectoryExecution_SendGoal._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_SendGoal.__import_type_support__()
            if _trajectory_execution.Metaclass_TrajectoryExecution_GetResult._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_GetResult.__import_type_support__()
            if _trajectory_execution.Metaclass_TrajectoryExecution_FeedbackMessage._TYPE_SUPPORT is None:
                _trajectory_execution.Metaclass_TrajectoryExecution_FeedbackMessage.__import_type_support__()


class TrajectoryExecution(metaclass=Metaclass_TrajectoryExecution):

    # The goal message defined in the action definition.
    from reno_interface.action._trajectory_execution import TrajectoryExecution_Goal as Goal
    # The result message defined in the action definition.
    from reno_interface.action._trajectory_execution import TrajectoryExecution_Result as Result
    # The feedback message defined in the action definition.
    from reno_interface.action._trajectory_execution import TrajectoryExecution_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from reno_interface.action._trajectory_execution import TrajectoryExecution_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from reno_interface.action._trajectory_execution import TrajectoryExecution_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from reno_interface.action._trajectory_execution import TrajectoryExecution_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
