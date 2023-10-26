// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_personal_project:msg/Number.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__BUILDER_HPP_
#define MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__BUILDER_HPP_

#include "my_first_personal_project/msg/detail/number__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_first_personal_project
{

namespace msg
{

namespace builder
{

class Init_Number_number
{
public:
  explicit Init_Number_number(::my_first_personal_project::msg::Number & msg)
  : msg_(msg)
  {}
  ::my_first_personal_project::msg::Number number(::my_first_personal_project::msg::Number::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_personal_project::msg::Number msg_;
};

class Init_Number_pid
{
public:
  Init_Number_pid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Number_number pid(::my_first_personal_project::msg::Number::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_Number_number(msg_);
  }

private:
  ::my_first_personal_project::msg::Number msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_personal_project::msg::Number>()
{
  return my_first_personal_project::msg::builder::Init_Number_pid();
}

}  // namespace my_first_personal_project

#endif  // MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__BUILDER_HPP_
