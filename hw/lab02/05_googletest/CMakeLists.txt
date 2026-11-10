cmake_minimum_required(VERSION 3.15)
project(CalcTests LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

add_library(math_lib STATIC calc.cpp calc.h)
add_executable(calc_tests tests.cpp)
target_link_libraries(calc_tests PRIVATE math_lib gtest_main)

include(CTest)
include(GoogleTest)
gtest_discover_tests(calc_tests)
