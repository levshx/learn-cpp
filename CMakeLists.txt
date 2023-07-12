cmake_minimum_required(VERSION 3.25)

project(learn-cpp VERSION 1.0)

find_package(OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS})

set(GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only")
set(GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only")

add_subdirectory("./vendor/glfw")

add_executable(MainApp WIN32 "./src/main.cpp")


target_link_libraries(MainApp glfw)
