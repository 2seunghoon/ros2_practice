// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dyros_interface:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef DYROS_INTERFACE__MSG__DETAIL__SPHERE__TRAITS_HPP_
#define DYROS_INTERFACE__MSG__DETAIL__SPHERE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dyros_interface/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace dyros_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sphere & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sphere & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sphere & msg, bool use_flow_style = false)
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
  const dyros_interface::msg::Sphere & msg,
  std::ostream & out, size_t indentation = 0)
{
  dyros_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dyros_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dyros_interface::msg::Sphere & msg)
{
  return dyros_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dyros_interface::msg::Sphere>()
{
  return "dyros_interface::msg::Sphere";
}

template<>
inline const char * name<dyros_interface::msg::Sphere>()
{
  return "dyros_interface/msg/Sphere";
}

template<>
struct has_fixed_size<dyros_interface::msg::Sphere>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<dyros_interface::msg::Sphere>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<dyros_interface::msg::Sphere>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYROS_INTERFACE__MSG__DETAIL__SPHERE__TRAITS_HPP_
