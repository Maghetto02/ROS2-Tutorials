# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maghetto/ros2_ws/build/turtlesim

# Include any dependencies generated for this target.
include CMakeFiles/mimic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mimic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mimic.dir/flags.make

CMakeFiles/mimic.dir/tutorials/mimic.cpp.o: CMakeFiles/mimic.dir/flags.make
CMakeFiles/mimic.dir/tutorials/mimic.cpp.o: /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim/tutorials/mimic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maghetto/ros2_ws/build/turtlesim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mimic.dir/tutorials/mimic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mimic.dir/tutorials/mimic.cpp.o -c /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim/tutorials/mimic.cpp

CMakeFiles/mimic.dir/tutorials/mimic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mimic.dir/tutorials/mimic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim/tutorials/mimic.cpp > CMakeFiles/mimic.dir/tutorials/mimic.cpp.i

CMakeFiles/mimic.dir/tutorials/mimic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mimic.dir/tutorials/mimic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim/tutorials/mimic.cpp -o CMakeFiles/mimic.dir/tutorials/mimic.cpp.s

# Object files for target mimic
mimic_OBJECTS = \
"CMakeFiles/mimic.dir/tutorials/mimic.cpp.o"

# External object files for target mimic
mimic_EXTERNAL_OBJECTS =

mimic: CMakeFiles/mimic.dir/tutorials/mimic.cpp.o
mimic: CMakeFiles/mimic.dir/build.make
mimic: /opt/ros/foxy/lib/libament_index_cpp.so
mimic: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/librclcpp_action.so
mimic: /opt/ros/foxy/lib/libstd_srvs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libstd_srvs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libstd_srvs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/libstd_srvs__rosidl_typesupport_cpp.so
mimic: libturtlesim__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/librclcpp.so
mimic: /opt/ros/foxy/lib/liblibstatistics_collector.so
mimic: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/librcl_action.so
mimic: /opt/ros/foxy/lib/librcl.so
mimic: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
mimic: /opt/ros/foxy/lib/libyaml.so
mimic: /opt/ros/foxy/lib/libtracetools.so
mimic: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/librmw_implementation.so
mimic: /opt/ros/foxy/lib/librcl_logging_spdlog.so
mimic: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.5.0
mimic: /opt/ros/foxy/lib/librmw.so
mimic: /opt/ros/foxy/lib/libstd_srvs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libaction_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_generator_c.so
mimic: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
mimic: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
mimic: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
mimic: /opt/ros/foxy/lib/librosidl_typesupport_c.so
mimic: /opt/ros/foxy/lib/librosidl_runtime_c.so
mimic: /opt/ros/foxy/lib/librcpputils.so
mimic: /opt/ros/foxy/lib/librcutils.so
mimic: CMakeFiles/mimic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maghetto/ros2_ws/build/turtlesim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mimic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mimic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mimic.dir/build: mimic

.PHONY : CMakeFiles/mimic.dir/build

CMakeFiles/mimic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mimic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mimic.dir/clean

CMakeFiles/mimic.dir/depend:
	cd /home/maghetto/ros2_ws/build/turtlesim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim /home/maghetto/ros2_ws/src/ros_tutorials/turtlesim /home/maghetto/ros2_ws/build/turtlesim /home/maghetto/ros2_ws/build/turtlesim /home/maghetto/ros2_ws/build/turtlesim/CMakeFiles/mimic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mimic.dir/depend

