# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MaximalniTok.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MaximalniTok.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MaximalniTok.dir/flags.make

CMakeFiles/MaximalniTok.dir/main.c.obj: CMakeFiles/MaximalniTok.dir/flags.make
CMakeFiles/MaximalniTok.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MaximalniTok.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MaximalniTok.dir\main.c.obj   -c "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\main.c"

CMakeFiles/MaximalniTok.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MaximalniTok.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\main.c" > CMakeFiles\MaximalniTok.dir\main.c.i

CMakeFiles/MaximalniTok.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MaximalniTok.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\main.c" -o CMakeFiles\MaximalniTok.dir\main.c.s

CMakeFiles/MaximalniTok.dir/Nodes.c.obj: CMakeFiles/MaximalniTok.dir/flags.make
CMakeFiles/MaximalniTok.dir/Nodes.c.obj: ../Nodes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MaximalniTok.dir/Nodes.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MaximalniTok.dir\Nodes.c.obj   -c "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\Nodes.c"

CMakeFiles/MaximalniTok.dir/Nodes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MaximalniTok.dir/Nodes.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\Nodes.c" > CMakeFiles\MaximalniTok.dir\Nodes.c.i

CMakeFiles/MaximalniTok.dir/Nodes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MaximalniTok.dir/Nodes.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\Nodes.c" -o CMakeFiles\MaximalniTok.dir\Nodes.c.s

CMakeFiles/MaximalniTok.dir/Edges.c.obj: CMakeFiles/MaximalniTok.dir/flags.make
CMakeFiles/MaximalniTok.dir/Edges.c.obj: ../Edges.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MaximalniTok.dir/Edges.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MaximalniTok.dir\Edges.c.obj   -c "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\Edges.c"

CMakeFiles/MaximalniTok.dir/Edges.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MaximalniTok.dir/Edges.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\Edges.c" > CMakeFiles\MaximalniTok.dir\Edges.c.i

CMakeFiles/MaximalniTok.dir/Edges.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MaximalniTok.dir/Edges.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\Edges.c" -o CMakeFiles\MaximalniTok.dir\Edges.c.s

# Object files for target MaximalniTok
MaximalniTok_OBJECTS = \
"CMakeFiles/MaximalniTok.dir/main.c.obj" \
"CMakeFiles/MaximalniTok.dir/Nodes.c.obj" \
"CMakeFiles/MaximalniTok.dir/Edges.c.obj"

# External object files for target MaximalniTok
MaximalniTok_EXTERNAL_OBJECTS =

MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/main.c.obj
MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/Nodes.c.obj
MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/Edges.c.obj
MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/build.make
MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/linklibs.rsp
MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/objects1.rsp
MaximalniTok.exe: CMakeFiles/MaximalniTok.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable MaximalniTok.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MaximalniTok.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MaximalniTok.dir/build: MaximalniTok.exe

.PHONY : CMakeFiles/MaximalniTok.dir/build

CMakeFiles/MaximalniTok.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MaximalniTok.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MaximalniTok.dir/clean

CMakeFiles/MaximalniTok.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok" "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok" "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug" "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug" "C:\Users\Petr Tomsik\Desktop\Peta\C\MaximalniTok\cmake-build-debug\CMakeFiles\MaximalniTok.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MaximalniTok.dir/depend

