cmake_minimum_required(VERSION 3.25)

project(learn-cpp VERSION 1.0)

### GLAD CONFIGURATION 
set(GLAD_CMAKE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/vendor/glad/cmake")
add_subdirectory("${GLAD_CMAKE_PATH}" "glad_cmake")

set(egl_VERSIONS 1.0 1.1 1.2 1.3 1.4 1.5)
set(gl_VERSIONS 1.0 1.1 1.2 1.3 1.4 1.5 2.0 2.1 3.0 3.1 3.2 3.3 4.0 4.1 4.2 4.3 4.4 4.5 4.6)
set(gles1_VERSIONS 1.0)
set(gles2_VERSIONS 2.0 3.0 3.1 3.2)
set(glsc2_VERSIONS 2.0)
set(glx_VERSIONS 1.0 1.1 1.2 1.3 1.4)
set(vulkan_VERSIONS 1.0 1.1)
set(wgl_VERSIONS 1.0)

set(gl_PROFILES core compatibility)

set(egl_SYSTEMS Linux Windows Darwin)
set(gl_SYSTEMS Linux Windows Darwin)
set(gles1_SYSTEMS Linux Windows Darwin)
set(gles2_SYSTEMS Linux Windows Darwin)
set(glsc2_SYSTEMS Linux Windows Darwin)
set(glx_SYSTEMS Linux)
set(vulkan_SYSTEMS Linux Windows Darwin)
set(wgl_SYSTEMS Windows)

set(APIS egl gl gles1 gles2 glsc2 glx vulkan wgl)

### END GLAD CONFIGURATION

add_library(glad 

add_executable(${PROJECT_NAME} "./src/main.cpp")