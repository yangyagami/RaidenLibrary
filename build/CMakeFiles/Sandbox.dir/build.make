# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yangsiyu/Workspace/RaidenLibrary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yangsiyu/Workspace/RaidenLibrary/build

# Include any dependencies generated for this target.
include CMakeFiles/Sandbox.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sandbox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sandbox.dir/flags.make

CMakeFiles/Sandbox.dir/main.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Sandbox.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/main.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/main.c

CMakeFiles/Sandbox.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/main.c > CMakeFiles/Sandbox.dir/main.c.i

CMakeFiles/Sandbox.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/main.c -o CMakeFiles/Sandbox.dir/main.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.o: ../RaidenLibrary/src/core/Matrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Matrix.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Matrix.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Matrix.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.o: ../RaidenLibrary/src/core/Vec.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Vec.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Vec.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Vec.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.o: ../RaidenLibrary/src/core/Window.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Window.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Window.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/core/Window.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.o: ../RaidenLibrary/src/renderer/Buffer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Buffer.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Buffer.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Buffer.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.o: ../RaidenLibrary/src/renderer/Renderer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Renderer.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Renderer.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Renderer.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.o: ../RaidenLibrary/src/renderer/Shader.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Shader.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Shader.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/Shader.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.o: ../RaidenLibrary/src/renderer/VertexArray.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/VertexArray.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/VertexArray.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/renderer/VertexArray.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.s

CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.o: CMakeFiles/Sandbox.dir/flags.make
CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.o: ../RaidenLibrary/src/external/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.o -c /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/external/glad.c

CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/external/glad.c > CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.i

CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yangsiyu/Workspace/RaidenLibrary/RaidenLibrary/src/external/glad.c -o CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.s

# Object files for target Sandbox
Sandbox_OBJECTS = \
"CMakeFiles/Sandbox.dir/main.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.o" \
"CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.o"

# External object files for target Sandbox
Sandbox_EXTERNAL_OBJECTS =

Sandbox: CMakeFiles/Sandbox.dir/main.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Matrix.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Vec.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/core/Window.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Buffer.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Renderer.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/Shader.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/renderer/VertexArray.c.o
Sandbox: CMakeFiles/Sandbox.dir/RaidenLibrary/src/external/glad.c.o
Sandbox: CMakeFiles/Sandbox.dir/build.make
Sandbox: CMakeFiles/Sandbox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable Sandbox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sandbox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sandbox.dir/build: Sandbox

.PHONY : CMakeFiles/Sandbox.dir/build

CMakeFiles/Sandbox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sandbox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sandbox.dir/clean

CMakeFiles/Sandbox.dir/depend:
	cd /home/yangsiyu/Workspace/RaidenLibrary/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yangsiyu/Workspace/RaidenLibrary /home/yangsiyu/Workspace/RaidenLibrary /home/yangsiyu/Workspace/RaidenLibrary/build /home/yangsiyu/Workspace/RaidenLibrary/build /home/yangsiyu/Workspace/RaidenLibrary/build/CMakeFiles/Sandbox.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sandbox.dir/depend

