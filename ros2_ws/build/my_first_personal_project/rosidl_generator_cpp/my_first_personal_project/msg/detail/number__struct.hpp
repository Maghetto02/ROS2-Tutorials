// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_first_personal_project:msg/Number.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__STRUCT_HPP_
#define MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_first_personal_project__msg__Number __attribute__((deprecated))
#else
# define DEPRECATED__my_first_personal_project__msg__Number __declspec(deprecated)
#endif

namespace my_first_personal_project
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Number_
{
  using Type = Number_<ContainerAllocator>;

  explicit Number_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->number = 0ul;
    }
  }

  explicit Number_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->number = 0ul;
    }
  }

  // field types and members
  using _node_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_id_type node_id;
  using _number_type =
    uint32_t;
  _number_type number;

  // setters for named parameter idiom
  Type & set__node_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__number(
    const uint32_t & _arg)
  {
    this->number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_first_personal_project::msg::Number_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_first_personal_project::msg::Number_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_first_personal_project::msg::Number_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_first_personal_project::msg::Number_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_first_personal_project::msg::Number_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_first_personal_project::msg::Number_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_first_personal_project::msg::Number_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_first_personal_project::msg::Number_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_first_personal_project::msg::Number_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_first_personal_project::msg::Number_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_first_personal_project__msg__Number
    std::shared_ptr<my_first_personal_project::msg::Number_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_first_personal_project__msg__Number
    std::shared_ptr<my_first_personal_project::msg::Number_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Number_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    return true;
  }
  bool operator!=(const Number_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Number_

// alias to use template instance with default allocator
using Number =
  my_first_personal_project::msg::Number_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_first_personal_project

#endif  // MY_FIRST_PERSONAL_PROJECT__MSG__DETAIL__NUMBER__STRUCT_HPP_
