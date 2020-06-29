##########################################################################

cmake_minimum_required(VERSION 2.8)

##########################################################################

project(unit-test-binary)

##########################################################################

include_directories(external/catch/v2.12.2/include)
include_directories(../../src/)

##########################################################################

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

##########################################################################

set(TEST_TARGET ${CMAKE_PROJECT_NAME})

##########################################################################

set(TEST_TARGET_SRCS
  src/test-main.cpp
  src/test-add.cpp
  ../../src/add.cpp
)

##########################################################################

add_executable(${TEST_TARGET} ${TEST_TARGET_SRCS})

##########################################################################

# Build unit tests as a post build step
add_custom_command(TARGET ${TEST_TARGET} POST_BUILD
  COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${TEST_TARGET}
)
