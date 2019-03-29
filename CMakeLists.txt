# cmake_minimum_required(VERSION <specify CMake version here>)
project(Learning)

set(CMAKE_CXX_STANDARD 14)

add_executable(one chapter9/hotel.c chapter9/usehotel.c)

add_executable(test test/a.c test/test.c)
add_executable(loccheck chapter9/loccheck.c)
add_executable(swap1 chapter9/swap1.c)
add_executable(swap3 chapter9/swap3.c)