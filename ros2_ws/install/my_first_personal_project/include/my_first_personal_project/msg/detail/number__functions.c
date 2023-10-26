// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_first_personal_project:msg/Number.idl
// generated code does not contain a copyright notice
#include "my_first_personal_project/msg/detail/number__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_id`
#include "rosidl_runtime_c/string_functions.h"

bool
my_first_personal_project__msg__Number__init(my_first_personal_project__msg__Number * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__init(&msg->node_id)) {
    my_first_personal_project__msg__Number__fini(msg);
    return false;
  }
  // number
  return true;
}

void
my_first_personal_project__msg__Number__fini(my_first_personal_project__msg__Number * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  rosidl_runtime_c__String__fini(&msg->node_id);
  // number
}

bool
my_first_personal_project__msg__Number__are_equal(const my_first_personal_project__msg__Number * lhs, const my_first_personal_project__msg__Number * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_id), &(rhs->node_id)))
  {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
my_first_personal_project__msg__Number__copy(
  const my_first_personal_project__msg__Number * input,
  my_first_personal_project__msg__Number * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__copy(
      &(input->node_id), &(output->node_id)))
  {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

my_first_personal_project__msg__Number *
my_first_personal_project__msg__Number__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_first_personal_project__msg__Number * msg = (my_first_personal_project__msg__Number *)allocator.allocate(sizeof(my_first_personal_project__msg__Number), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_first_personal_project__msg__Number));
  bool success = my_first_personal_project__msg__Number__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_first_personal_project__msg__Number__destroy(my_first_personal_project__msg__Number * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_first_personal_project__msg__Number__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_first_personal_project__msg__Number__Sequence__init(my_first_personal_project__msg__Number__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_first_personal_project__msg__Number * data = NULL;

  if (size) {
    data = (my_first_personal_project__msg__Number *)allocator.zero_allocate(size, sizeof(my_first_personal_project__msg__Number), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_first_personal_project__msg__Number__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_first_personal_project__msg__Number__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_first_personal_project__msg__Number__Sequence__fini(my_first_personal_project__msg__Number__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_first_personal_project__msg__Number__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_first_personal_project__msg__Number__Sequence *
my_first_personal_project__msg__Number__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_first_personal_project__msg__Number__Sequence * array = (my_first_personal_project__msg__Number__Sequence *)allocator.allocate(sizeof(my_first_personal_project__msg__Number__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_first_personal_project__msg__Number__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_first_personal_project__msg__Number__Sequence__destroy(my_first_personal_project__msg__Number__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_first_personal_project__msg__Number__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_first_personal_project__msg__Number__Sequence__are_equal(const my_first_personal_project__msg__Number__Sequence * lhs, const my_first_personal_project__msg__Number__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_first_personal_project__msg__Number__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_first_personal_project__msg__Number__Sequence__copy(
  const my_first_personal_project__msg__Number__Sequence * input,
  my_first_personal_project__msg__Number__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_first_personal_project__msg__Number);
    my_first_personal_project__msg__Number * data =
      (my_first_personal_project__msg__Number *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_first_personal_project__msg__Number__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          my_first_personal_project__msg__Number__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_first_personal_project__msg__Number__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
