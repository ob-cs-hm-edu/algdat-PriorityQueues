cmake_minimum_required(VERSION 3.3)
project(PriorityQueues)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(pqueues)

set(SOURCE_FILES main.cpp)
add_executable(PriorityQueues ${SOURCE_FILES})
target_link_libraries (PriorityQueues LINK_PUBLIC pqueues)
