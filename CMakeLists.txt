cmake_minimum_required (VERSION 2.8.11)
project (room)

add_executable (room main.cpp)
target_include_directories (room PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/room)
target_sources(room PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/room/room.cpp)

add_executable (room_tests tests/room/tests.cpp)
