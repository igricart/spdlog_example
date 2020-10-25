#pragma once
#include <iostream>
#include <string>
#include <memory> //shared_ptr
#include "spdlog/spdlog.h"
#include "spdlog/cfg/env.h" // Load log levels from env variables or from argv
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h" // create stdout and stderr loggers

class my_class
{
private:
    std::shared_ptr<spdlog::logger> file_logger;
    std::shared_ptr<spdlog::logger> console_logger;  
    std::shared_ptr<spdlog::logger> err_logger;

public:
    my_class();
    ~my_class();
    void printSomething(const std::string &str);
    void printToFile(const std::string &str);
    void printConsole(const std::string &str);
    void printErr(const std::string &str);
};
