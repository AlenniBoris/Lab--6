cmake_minimum_required(VERSION 3.20)
project(Lab__6)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab__6 main.cpp Functions/FunctionsLab.cpp Functions/FunctionsLab.h)

# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run Functions/FunctionsLab.cpp Functions/FunctionsLab.h
        TestsLab6/TestsForMultiply.cpp
        TestsLab6/TestsForSum.cpp
        TestsLab6/TestsForNum&Den.cpp
        TestsLab6/TestsForDivision.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
