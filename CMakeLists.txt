cmake_minimum_required(VERSION 3.15)
project(SaldoranCore)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(example tests/example_usage.cpp)