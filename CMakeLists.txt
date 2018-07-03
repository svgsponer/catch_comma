cmake_minimum_required(VERSION 3.8)

find_package(Catch2 REQUIRED)
enable_testing()

add_executable(mytest test.cpp)
target_link_libraries(mytest Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(mytest)
