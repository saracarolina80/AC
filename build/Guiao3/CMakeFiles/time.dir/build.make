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
include Guiao3/CMakeFiles/time.dir/depend.make

# Include the progress variables for this target.
include Guiao3/CMakeFiles/time.dir/progress.make

# Include the compile flags for this target's objects.
include Guiao3/CMakeFiles/time.dir/flags.make

Guiao3/CMakeFiles/time.dir/timingExample.c.obj: Guiao3/CMakeFiles/time.dir/flags.make
Guiao3/CMakeFiles/time.dir/timingExample.c.obj: ../Guiao3/timingExample.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\Desktop\AC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Guiao3/CMakeFiles/time.dir/timingExample.c.obj"
	cd /d C:\Users\User\Desktop\AC\build\Guiao3 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\time.dir\timingExample.c.obj   -c C:\Users\User\Desktop\AC\Guiao3\timingExample.c

Guiao3/CMakeFiles/time.dir/timingExample.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/time.dir/timingExample.c.i"
	cd /d C:\Users\User\Desktop\AC\build\Guiao3 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\User\Desktop\AC\Guiao3\timingExample.c > CMakeFiles\time.dir\timingExample.c.i

Guiao3/CMakeFiles/time.dir/timingExample.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/time.dir/timingExample.c.s"
	cd /d C:\Users\User\Desktop\AC\build\Guiao3 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\User\Desktop\AC\Guiao3\timingExample.c -o CMakeFiles\time.dir\timingExample.c.s

# Object files for target time
time_OBJECTS = \
"CMakeFiles/time.dir/timingExample.c.obj"

# External object files for target time
time_EXTERNAL_OBJECTS =

Guiao3/time.exe: Guiao3/CMakeFiles/time.dir/timingExample.c.obj
Guiao3/time.exe: Guiao3/CMakeFiles/time.dir/build.make
Guiao3/time.exe: Guiao3/CMakeFiles/time.dir/linklibs.rsp
Guiao3/time.exe: Guiao3/CMakeFiles/time.dir/objects1.rsp
Guiao3/time.exe: Guiao3/CMakeFiles/time.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\Desktop\AC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable time.exe"
	cd /d C:\Users\User\Desktop\AC\build\Guiao3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\time.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Guiao3/CMakeFiles/time.dir/build: Guiao3/time.exe

.PHONY : Guiao3/CMakeFiles/time.dir/build

Guiao3/CMakeFiles/time.dir/clean:
	cd /d C:\Users\User\Desktop\AC\build\Guiao3 && $(CMAKE_COMMAND) -P CMakeFiles\time.dir\cmake_clean.cmake
.PHONY : Guiao3/CMakeFiles/time.dir/clean

Guiao3/CMakeFiles/time.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\Desktop\AC C:\Users\User\Desktop\AC\Guiao3 C:\Users\User\Desktop\AC\build C:\Users\User\Desktop\AC\build\Guiao3 C:\Users\User\Desktop\AC\build\Guiao3\CMakeFiles\time.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Guiao3/CMakeFiles/time.dir/depend

