// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dyros_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef DYROS_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define DYROS_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dyros_interface/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dyros_interface
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::dyros_interface::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::dyros_interface::srv::AddThreeInts_Request c(::dyros_interface::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dyros_interface::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::dyros_interface::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::dyros_interface::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::dyros_interface::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::dyros_interface::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::dyros_interface::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dyros_interface::srv::AddThreeInts_Request>()
{
  return dyros_interface::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace dyros_interface


namespace dyros_interface
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dyros_interface::srv::AddThreeInts_Response sum(::dyros_interface::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dyros_interface::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dyros_interface::srv::AddThreeInts_Response>()
{
  return dyros_interface::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace dyros_interface

#endif  // DYROS_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
