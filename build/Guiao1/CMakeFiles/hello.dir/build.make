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
CMAKE_COMMAND = C:\Users\User\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\User\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\User\Desktop\AC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\Desktop\AC\build

# Include any dependencies generated for this target.
include Guiao1/CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include Guiao1/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include Guiao1/CMakeFiles/hello.dir/flags.make

Guiao1/CMakeFiles/hello.dir/hello_world.c.obj: Guiao1/CMakeFiles/hello.dir/flags.make
Guiao1/CMakeFiles/hello.dir/hello_world.c.obj: ../Guiao1/hello_world.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\Desktop\AC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Guiao1/CMakeFiles/hello.dir/hello_world.c.obj"
	cd /d C:\Users\User\Desktop\AC\build\Guiao1 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\hello.dir\hello_world.c.obj   -c C:\Users\User\Desktop\AC\Guiao1\hello_world.c

Guiao1/CMakeFiles/hello.dir/hello_world.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/hello_world.c.i"
	cd /d C:\Users\User\Desktop\AC\build\Guiao1 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\User\Desktop\AC\Guiao1\hello_world.c > CMakeFiles\hello.dir\hello_world.c.i

Guiao1/CMakeFiles/hello.dir/hello_world.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/hello_world.c.s"
	cd /d C:\Users\User\Desktop\AC\build\Guiao1 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\User\Desktop\AC\Guiao1\hello_world.c -o CMakeFiles\hello.dir\hello_world.c.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello_world.c.obj"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

Guiao1/hello.exe: Guiao1/CMakeFiles/hello.dir/hello_world.c.obj
Guiao1/hello.exe: Guiao1/CMakeFiles/hello.dir/build.make
Guiao1/hello.exe: Guiao1/CMakeFiles/hello.dir/linklibs.rsp
Guiao1/hello.exe: Guiao1/CMakeFiles/hello.dir/objects1.rsp
Guiao1/hello.exe: Guiao1/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\Desktop\AC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hello.exe"
	cd /d C:\Users\User\Desktop\AC\build\Guiao1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hello.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Guiao1/CMakeFiles/hello.dir/build: Guiao1/hello.exe

.PHONY : Guiao1/CMakeFiles/hello.dir/build

Guiao1/CMakeFiles/hello.dir/clean:
	cd /d C:\Users\User\Desktop\AC\build\Guiao1 && $(CMAKE_COMMAND) -P CMakeFiles\hello.dir\cmake_clean.cmake
.PHONY : Guiao1/CMakeFiles/hello.dir/clean

Guiao1/CMakeFiles/hello.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\Desktop\AC C:\Users\User\Desktop\AC\Guiao1 C:\Users\User\Desktop\AC\build C:\Users\User\Desktop\AC\build\Guiao1 C:\Users\User\Desktop\AC\build\Guiao1\CMakeFiles\hello.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Guiao1/CMakeFiles/hello.dir/depend

