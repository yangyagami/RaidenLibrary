cmake_minimum_required(VERSION 2.6)

project(RaidenLibrary)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(RaidenLibrary/src/core)
include_directories(RaidenLibrary/src/external)
include_directories(RaidenLibrary/src/renderer)
include_directories(RaidenLibrary/src)

aux_source_directory(RaidenLibrary/src/core RAIDEN_CORE_SRC)
aux_source_directory(RaidenLibrary/src/renderer RAIDEN_RENDERER_SRC)
aux_source_directory(RaidenLibrary/src/external RAIDEN_EXTERNAL_SRC)

add_executable(Sandbox main.c ${RAIDEN_CORE_SRC} ${RAIDEN_RENDERER_SRC} ${RAIDEN_EXTERNAL_SRC})

target_link_libraries(Sandbox GL dl X11 Xrandr glfw m)
