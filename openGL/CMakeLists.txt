cmake_minimum_required(VERSION 3.10)

project(hello_world)

add_executable(hello_world src/main.cpp)

add_library(glfw STATIC IMPORTED)

set_target_properties(glfw PROPERTIES
    IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/dependencies/glfw/lib-mingw-w64/libglfw3.a
)

target_include_directories(hello_world PRIVATE
    dependencies/glfw/include
)

target_link_libraries(hello_world
    glfw
    gdi32
    opengl32
)

target_compile_definitions(hello_world PRIVATE GLFW_INCLUDE_NONE)