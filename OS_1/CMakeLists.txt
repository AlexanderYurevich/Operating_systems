cmake_minimum_required(VERSION 3.10)
project(Lab_1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/aa2e91fd6918519dafa3bee4aa706d04857e7d06.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(include)
add_executable(Lab_1 src/main.cpp)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

enable_testing()
add_subdirectory(tests)