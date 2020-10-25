cmake_minimum_required(VERSION 3.10)

project(Test_SPDLOG)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_executable(spdlog_exec src/main.cpp src/my_class.cpp)
target_include_directories(spdlog_exec PUBLIC thirdparty include)