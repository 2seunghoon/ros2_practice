// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dyros_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef DYROS_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_
#define DYROS_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dyros_interface/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dyros_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dyros_interface

namespace rosidl_generator_traits
{

[[deprecated("use dyros_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dyros_interface::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  dyros_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dyros_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dyros_interface::msg::Num & msg)
{
  return dyros_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dyros_interface::msg::Num>()
{
  return "dyros_interface::msg::Num";
}

template<>
inline const char * name<dyros_interface::msg::Num>()
{
  return "dyros_interface/msg/Num";
}

template<>
struct has_fixed_size<dyros_interface::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dyros_interface::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dyros_interface::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYROS_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_
