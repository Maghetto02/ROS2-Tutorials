// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_first_personal_project:msg/Number.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__STRUCT_H_
#define MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Number in the package my_first_personal_project.
typedef struct my_first_personal_project__msg__Number
{
  rosidl_runtime_c__String node_id;
  uint32_t number;
} my_first_personal_project__msg__Number;

// Struct for a sequence of my_first_personal_project__msg__Number.
typedef struct my_first_personal_project__msg__Number__Sequence
{
  my_first_personal_project__msg__Number * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_personal_project__msg__Number__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__STRUCT_H_
