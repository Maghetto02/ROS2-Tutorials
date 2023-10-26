// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PERSONAL_PROJECT__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define MY_FIRST_PERSONAL_PROJECT__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_my_first_personal_project __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_my_first_personal_project __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_my_first_personal_project __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_my_first_personal_project __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_my_first_personal_project
    #define ROSIDL_GENERATOR_CPP_PUBLIC_my_first_personal_project ROSIDL_GENERATOR_CPP_EXPORT_my_first_personal_project
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_my_first_personal_project ROSIDL_GENERATOR_CPP_IMPORT_my_first_personal_project
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_my_first_personal_project __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_my_first_personal_project
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_my_first_personal_project __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_my_first_personal_project
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PERSONAL_PROJECT__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
