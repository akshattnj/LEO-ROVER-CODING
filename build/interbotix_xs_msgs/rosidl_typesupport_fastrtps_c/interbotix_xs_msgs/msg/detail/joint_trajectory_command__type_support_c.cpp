// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__struct.h"
#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // cmd_type, name
#include "rosidl_runtime_c/string_functions.h"  // cmd_type, name
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"  // traj

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interbotix_xs_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interbotix_xs_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory)();


using _JointTrajectoryCommand__ros_msg_type = interbotix_xs_msgs__msg__JointTrajectoryCommand;

static bool _JointTrajectoryCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointTrajectoryCommand__ros_msg_type * ros_message = static_cast<const _JointTrajectoryCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    const rosidl_runtime_c__String * str = &ros_message->cmd_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->traj, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointTrajectoryCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointTrajectoryCommand__ros_msg_type * ros_message = static_cast<_JointTrajectoryCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cmd_type.data) {
      rosidl_runtime_c__String__init(&ros_message->cmd_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cmd_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cmd_type'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->traj))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t get_serialized_size_interbotix_xs_msgs__msg__JointTrajectoryCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointTrajectoryCommand__ros_msg_type * ros_message = static_cast<const _JointTrajectoryCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cmd_type.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name traj

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->traj), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointTrajectoryCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_xs_msgs__msg__JointTrajectoryCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t max_serialized_size_interbotix_xs_msgs__msg__JointTrajectoryCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cmd_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: traj
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interbotix_xs_msgs__msg__JointTrajectoryCommand;
    is_plain =
      (
      offsetof(DataType, traj) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointTrajectoryCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interbotix_xs_msgs__msg__JointTrajectoryCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointTrajectoryCommand = {
  "interbotix_xs_msgs::msg",
  "JointTrajectoryCommand",
  _JointTrajectoryCommand__cdr_serialize,
  _JointTrajectoryCommand__cdr_deserialize,
  _JointTrajectoryCommand__get_serialized_size,
  _JointTrajectoryCommand__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectoryCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointTrajectoryCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, msg, JointTrajectoryCommand)() {
  return &_JointTrajectoryCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
