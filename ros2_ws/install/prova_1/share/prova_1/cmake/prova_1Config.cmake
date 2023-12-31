# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_prova_1_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED prova_1_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(prova_1_FOUND FALSE)
  elseif(NOT prova_1_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(prova_1_FOUND FALSE)
  endif()
  return()
endif()
set(_prova_1_CONFIG_INCLUDED TRUE)

# output package information
if(NOT prova_1_FIND_QUIETLY)
  message(STATUS "Found prova_1: 0.0.0 (${prova_1_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'prova_1' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${prova_1_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(prova_1_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${prova_1_DIR}/${_extra}")
endforeach()
