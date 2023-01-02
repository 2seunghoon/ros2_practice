// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dyros_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef DYROS_INTERFACE__MSG__DETAIL__NUM__STRUCT_H_
#define DYROS_INTERFACE__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package dyros_interface.
typedef struct dyros_interface__msg__Num
{
  int32_t num;
} dyros_interface__msg__Num;

// Struct for a sequence of dyros_interface__msg__Num.
typedef struct dyros_interface__msg__Num__Sequence
{
  dyros_interface__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dyros_interface__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYROS_INTERFACE__MSG__DETAIL__NUM__STRUCT_H_
