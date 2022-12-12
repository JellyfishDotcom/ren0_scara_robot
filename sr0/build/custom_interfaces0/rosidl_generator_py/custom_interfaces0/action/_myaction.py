# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces0:action/Myaction.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'goal_position'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Myaction_Goal(type):
    """Metaclass of message 'Myaction_Goal'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Myaction_Goal(metaclass=Metaclass_Myaction_Goal):
    """Message class 'Myaction_Goal'."""

    __slots__ = [
        '_goal_position',
    ]

    _fields_and_field_types = {
        'goal_position': 'int64[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'goal_position' not in kwargs:
            self.goal_position = numpy.zeros(3, dtype=numpy.int64)
        else:
            self.goal_position = numpy.array(kwargs.get('goal_position'), dtype=numpy.int64)
            assert self.goal_position.shape == (3, )

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
        if all(self.goal_position != other.goal_position):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_position(self):
        """Message field 'goal_position'."""
        return self._goal_position

    @goal_position.setter
    def goal_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int64, \
                "The 'goal_position' numpy.ndarray() must have the dtype of 'numpy.int64'"
            assert value.size == 3, \
                "The 'goal_position' numpy.ndarray() must have a size of 3"
            self._goal_position = value
            return
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'goal_position' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._goal_position = numpy.array(value, dtype=numpy.int64)


# Import statements for member types

# Member 'result_position'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_Myaction_Result(type):
    """Metaclass of message 'Myaction_Result'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Myaction_Result(metaclass=Metaclass_Myaction_Result):
    """Message class 'Myaction_Result'."""

    __slots__ = [
        '_result_position',
    ]

    _fields_and_field_types = {
        'result_position': 'int64[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'result_position' not in kwargs:
            self.result_position = numpy.zeros(3, dtype=numpy.int64)
        else:
            self.result_position = numpy.array(kwargs.get('result_position'), dtype=numpy.int64)
            assert self.result_position.shape == (3, )

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
        if all(self.result_position != other.result_position):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result_position(self):
        """Message field 'result_position'."""
        return self._result_position

    @result_position.setter
    def result_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int64, \
                "The 'result_position' numpy.ndarray() must have the dtype of 'numpy.int64'"
            assert value.size == 3, \
                "The 'result_position' numpy.ndarray() must have a size of 3"
            self._result_position = value
            return
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'result_position' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._result_position = numpy.array(value, dtype=numpy.int64)


# Import statements for member types

# Member 'current_position'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_Myaction_Feedback(type):
    """Metaclass of message 'Myaction_Feedback'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Myaction_Feedback(metaclass=Metaclass_Myaction_Feedback):
    """Message class 'Myaction_Feedback'."""

    __slots__ = [
        '_current_position',
    ]

    _fields_and_field_types = {
        'current_position': 'int64[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'current_position' not in kwargs:
            self.current_position = numpy.zeros(3, dtype=numpy.int64)
        else:
            self.current_position = numpy.array(kwargs.get('current_position'), dtype=numpy.int64)
            assert self.current_position.shape == (3, )

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
        if all(self.current_position != other.current_position):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def current_position(self):
        """Message field 'current_position'."""
        return self._current_position

    @current_position.setter
    def current_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int64, \
                "The 'current_position' numpy.ndarray() must have the dtype of 'numpy.int64'"
            assert value.size == 3, \
                "The 'current_position' numpy.ndarray() must have a size of 3"
            self._current_position = value
            return
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'current_position' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._current_position = numpy.array(value, dtype=numpy.int64)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Myaction_SendGoal_Request(type):
    """Metaclass of message 'Myaction_SendGoal_Request'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__send_goal__request

            from custom_interfaces0.action import Myaction
            if Myaction.Goal.__class__._TYPE_SUPPORT is None:
                Myaction.Goal.__class__.__import_type_support__()

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


class Myaction_SendGoal_Request(metaclass=Metaclass_Myaction_SendGoal_Request):
    """Message class 'Myaction_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'custom_interfaces0/Myaction_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_interfaces0', 'action'], 'Myaction_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from custom_interfaces0.action._myaction import Myaction_Goal
        self.goal = kwargs.get('goal', Myaction_Goal())

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
            from custom_interfaces0.action._myaction import Myaction_Goal
            assert \
                isinstance(value, Myaction_Goal), \
                "The 'goal' field must be a sub message of type 'Myaction_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Myaction_SendGoal_Response(type):
    """Metaclass of message 'Myaction_SendGoal_Response'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__send_goal__response

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


class Myaction_SendGoal_Response(metaclass=Metaclass_Myaction_SendGoal_Response):
    """Message class 'Myaction_SendGoal_Response'."""

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


class Metaclass_Myaction_SendGoal(type):
    """Metaclass of service 'Myaction_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__myaction__send_goal

            from custom_interfaces0.action import _myaction
            if _myaction.Metaclass_Myaction_SendGoal_Request._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_SendGoal_Request.__import_type_support__()
            if _myaction.Metaclass_Myaction_SendGoal_Response._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_SendGoal_Response.__import_type_support__()


class Myaction_SendGoal(metaclass=Metaclass_Myaction_SendGoal):
    from custom_interfaces0.action._myaction import Myaction_SendGoal_Request as Request
    from custom_interfaces0.action._myaction import Myaction_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Myaction_GetResult_Request(type):
    """Metaclass of message 'Myaction_GetResult_Request'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__get_result__request

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


class Myaction_GetResult_Request(metaclass=Metaclass_Myaction_GetResult_Request):
    """Message class 'Myaction_GetResult_Request'."""

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


class Metaclass_Myaction_GetResult_Response(type):
    """Metaclass of message 'Myaction_GetResult_Response'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__get_result__response

            from custom_interfaces0.action import Myaction
            if Myaction.Result.__class__._TYPE_SUPPORT is None:
                Myaction.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Myaction_GetResult_Response(metaclass=Metaclass_Myaction_GetResult_Response):
    """Message class 'Myaction_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'custom_interfaces0/Myaction_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_interfaces0', 'action'], 'Myaction_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from custom_interfaces0.action._myaction import Myaction_Result
        self.result = kwargs.get('result', Myaction_Result())

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
            from custom_interfaces0.action._myaction import Myaction_Result
            assert \
                isinstance(value, Myaction_Result), \
                "The 'result' field must be a sub message of type 'Myaction_Result'"
        self._result = value


class Metaclass_Myaction_GetResult(type):
    """Metaclass of service 'Myaction_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__myaction__get_result

            from custom_interfaces0.action import _myaction
            if _myaction.Metaclass_Myaction_GetResult_Request._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_GetResult_Request.__import_type_support__()
            if _myaction.Metaclass_Myaction_GetResult_Response._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_GetResult_Response.__import_type_support__()


class Myaction_GetResult(metaclass=Metaclass_Myaction_GetResult):
    from custom_interfaces0.action._myaction import Myaction_GetResult_Request as Request
    from custom_interfaces0.action._myaction import Myaction_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Myaction_FeedbackMessage(type):
    """Metaclass of message 'Myaction_FeedbackMessage'."""

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
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__myaction__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__myaction__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__myaction__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__myaction__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__myaction__feedback_message

            from custom_interfaces0.action import Myaction
            if Myaction.Feedback.__class__._TYPE_SUPPORT is None:
                Myaction.Feedback.__class__.__import_type_support__()

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


class Myaction_FeedbackMessage(metaclass=Metaclass_Myaction_FeedbackMessage):
    """Message class 'Myaction_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'custom_interfaces0/Myaction_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_interfaces0', 'action'], 'Myaction_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from custom_interfaces0.action._myaction import Myaction_Feedback
        self.feedback = kwargs.get('feedback', Myaction_Feedback())

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
            from custom_interfaces0.action._myaction import Myaction_Feedback
            assert \
                isinstance(value, Myaction_Feedback), \
                "The 'feedback' field must be a sub message of type 'Myaction_Feedback'"
        self._feedback = value


class Metaclass_Myaction(type):
    """Metaclass of action 'Myaction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces0')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces0.action.Myaction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__myaction

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from custom_interfaces0.action import _myaction
            if _myaction.Metaclass_Myaction_SendGoal._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_SendGoal.__import_type_support__()
            if _myaction.Metaclass_Myaction_GetResult._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_GetResult.__import_type_support__()
            if _myaction.Metaclass_Myaction_FeedbackMessage._TYPE_SUPPORT is None:
                _myaction.Metaclass_Myaction_FeedbackMessage.__import_type_support__()


class Myaction(metaclass=Metaclass_Myaction):

    # The goal message defined in the action definition.
    from custom_interfaces0.action._myaction import Myaction_Goal as Goal
    # The result message defined in the action definition.
    from custom_interfaces0.action._myaction import Myaction_Result as Result
    # The feedback message defined in the action definition.
    from custom_interfaces0.action._myaction import Myaction_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from custom_interfaces0.action._myaction import Myaction_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from custom_interfaces0.action._myaction import Myaction_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from custom_interfaces0.action._myaction import Myaction_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
