// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_first_personal_project:msg/Number.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__TRAITS_HPP_
#define MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__TRAITS_HPP_

#include "my_first_personal_project/msg/detail/number__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pid'
#include "my_first_personal_project/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_personal_project::msg::Number>()
{
  return "my_first_personal_project::msg::Number";
}

template<>
inline const char * name<my_first_personal_project::msg::Number>()
{
  return "my_first_personal_project/msg/Number";
}

template<>
struct has_fixed_size<my_first_personal_project::msg::Number>
  : std::integral_constant<bool, has_fixed_size<my_first_personal_project::msg::String>::value> {};

template<>
struct has_bounded_size<my_first_personal_project::msg::Number>
  : std::integral_constant<bool, has_bounded_size<my_first_personal_project::msg::String>::value> {};

template<>
struct is_message<my_first_personal_project::msg::Number>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__TRAITS_HPP_
