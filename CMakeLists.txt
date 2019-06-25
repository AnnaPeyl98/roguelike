cmake_minimum_required(VERSION 3.14)
project(mygame)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMake")

find_package(BearLibTerminal REQUIRED)
include_directories(SYSTEM ${BLT_INCLUDE_DIRS})

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/src)

FILE(GLOB_RECURSE HEADERS ${PROJECT_HEADERS_DIR}/*.h)
FILE(GLOB_RECURSE SOURCES ${PROJECT_SOURCES_DIR}/*.cpp)

add_executable(mygame ${HEADERS} ${SOURCES} include/Map.h src/Map.cpp include/Controls.h src/Controls.cpp include/Player.h src/Player.cpp include/Level.h src/Level.cpp main.cpp)

target_link_libraries(${PROJECT_NAME} ${BLT_LIBRARIES})

file(COPY ${BLT_LIBRARY} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})







