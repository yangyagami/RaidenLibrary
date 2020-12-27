cmake_minimum_required(VERSION 3.0)

project(RaidenLibrary)

set(CMAKE_C_COMPILER "C:\\MinGW\\bin\\gcc.exe")
set(CMAKE_CXX_COMPILER "C:\\MinGW\\bin\\g++.exe")
##set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_MAKE_PROGRAM Ninja)

include_directories(RaidenLibrary/src/core)
include_directories(RaidenLibrary/src/external)
include_directories(RaidenLibrary/src/renderer)
include_directories(RaidenLibrary/src/input)
include_directories(RaidenLibrary/src)

aux_source_directory(RaidenLibrary/src/core RAIDEN_CORE_SRC)
aux_source_directory(RaidenLibrary/src/renderer RAIDEN_RENDERER_SRC)
aux_source_directory(RaidenLibrary/src/external RAIDEN_EXTERNAL_SRC)
aux_source_directory(RaidenLibrary/src/external/stb_image RAIDEN_IMAGE_SRC)
aux_source_directory(RaidenLibrary/src/input RAIDEN_INPUT_SRC)

link_directories(${PROJECT_SOURCE_DIR}/build/lib)
add_executable(Sandbox main.c ${RAIDEN_IMAGE_SRC} ${RAIDEN_CORE_SRC} ${RAIDEN_RENDERER_SRC} ${RAIDEN_EXTERNAL_SRC} ${RAIDEN_INPUT_SRC})

##target_link_libraries(Sandbox GL dl X11 Xrandr glfw m)
target_link_libraries(Sandbox glfw3)