cmake_minimum_required(VERSION 3.22)

project(game C)
add_executable(game main.c)

set(RAYLIB_DIR ../../raylib/)

add_subdirectory(${RAYLIB_DIR} raylib)
target_link_directories(game PUBLIC raylib)
target_link_libraries(game raylib)

include_directories(game PUBLIC ${RAYLIB_DIR}/src/)

