// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dyros_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef DYROS_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define DYROS_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package dyros_interface.
typedef struct dyros_interface__srv__AddThreeInts_Request
{
  int16_t a;
  int16_t b;
  int16_t c;
} dyros_interface__srv__AddThreeInts_Request;

// Struct for a sequence of dyros_interface__srv__AddThreeInts_Request.
typedef struct dyros_interface__srv__AddThreeInts_Request__Sequence
{
  dyros_interface__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dyros_interface__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package dyros_interface.
typedef struct dyros_interface__srv__AddThreeInts_Response
{
  int16_t sum;
} dyros_interface__srv__AddThreeInts_Response;

// Struct for a sequence of dyros_interface__srv__AddThreeInts_Response.
typedef struct dyros_interface__srv__AddThreeInts_Response__Sequence
{
  dyros_interface__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dyros_interface__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYROS_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
