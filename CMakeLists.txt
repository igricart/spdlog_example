cmake_minimum_required(VERSION 3.10)

project(Test_SPDLOG)
add_executable(spdlog_exec src/main.cpp)
target_include_directories(spdlog_exec PUBLIC thirdparty)