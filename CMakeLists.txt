cmake_minimum_required(VERSION 3.25)

project(learn-cpp VERSION 1.0)

find_package(OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} 
    src/main.cpp)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(vendor/glfw)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(vendor/glad)
target_link_libraries(${PROJECT_NAME} glad)
