// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dyros_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef DYROS_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
#define DYROS_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dyros_interface/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dyros_interface
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dyros_interface::msg::Num num(::dyros_interface::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dyros_interface::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dyros_interface::msg::Num>()
{
  return dyros_interface::msg::builder::Init_Num_num();
}

}  // namespace dyros_interface

#endif  // DYROS_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
