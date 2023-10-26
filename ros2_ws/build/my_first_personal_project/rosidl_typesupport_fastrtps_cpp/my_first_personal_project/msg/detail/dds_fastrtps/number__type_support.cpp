// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_first_personal_project:msg/Number.idl
// generated code does not contain a copyright notice
#include "my_first_personal_project/msg/detail/number__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_first_personal_project/msg/detail/number__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_first_personal_project
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_personal_project
cdr_serialize(
  const my_first_personal_project::msg::Number & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_id
  cdr << ros_message.node_id;
  // Member: number
  cdr << ros_message.number;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_personal_project
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_first_personal_project::msg::Number & ros_message)
{
  // Member: node_id
  cdr >> ros_message.node_id;

  // Member: number
  cdr >> ros_message.number;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_personal_project
get_serialized_size(
  const my_first_personal_project::msg::Number & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_id.size() + 1);
  // Member: number
  {
    size_t item_size = sizeof(ros_message.number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_personal_project
max_serialized_size_Number(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: node_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Number__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_first_personal_project::msg::Number *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Number__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_first_personal_project::msg::Number *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Number__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_first_personal_project::msg::Number *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Number__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Number(full_bounded, 0);
}

static message_type_support_callbacks_t _Number__callbacks = {
  "my_first_personal_project::msg",
  "Number",
  _Number__cdr_serialize,
  _Number__cdr_deserialize,
  _Number__get_serialized_size,
  _Number__max_serialized_size
};

static rosidl_message_type_support_t _Number__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Number__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_first_personal_project

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_first_personal_project
const rosidl_message_type_support_t *
get_message_type_support_handle<my_first_personal_project::msg::Number>()
{
  return &my_first_personal_project::msg::typesupport_fastrtps_cpp::_Number__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_first_personal_project, msg, Number)() {
  return &my_first_personal_project::msg::typesupport_fastrtps_cpp::_Number__handle;
}

#ifdef __cplusplus
}
#endif
