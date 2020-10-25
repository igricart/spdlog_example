#include "my_class.hpp"

#include "spdlog/sinks/basic_file_sink.h"
void basic_logfile_example(std::shared_ptr<spdlog::logger> &export_logger)
{
    try 
    {
        auto logger = spdlog::basic_logger_mt("basic_logger", "logs/basic-log.txt");
        logger->info("I logged an info from inside the function.");
        export_logger = logger;
    }
    catch (const spdlog::spdlog_ex &ex)
    {
        std::cout << "Log init failed: " << ex.what() << std::endl;
    }
}

void fill_logfile(std::shared_ptr<spdlog::logger> &export_logger)
{
    try 
    {
        auto logger = spdlog::basic_logger_mt("basic_logger", "logs/basic-log.txt");
    }
    catch (const spdlog::spdlog_ex &ex)
    {
        std::cout << "Log init failed: " << ex.what() << std::endl;
    }
}

int main() 
{
    my_class new_obj;
    std::string my_string = "Testing string";
    std::string my_info = "Testing info";
    std::string my_error = "Testing error";
    std::string my_warn = "Testing warn";

    new_obj.printToFile(my_info);
    new_obj.printConsole(my_warn);
    new_obj.printErr(my_error);

    spdlog::cfg::load_env_levels();
    spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);
    
    spdlog::warn("Easy padding in numbers like {:08d}", 12);
    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");
    
    spdlog::set_level(spdlog::level::debug); // Set global log level to debug
    spdlog::debug("This message should be displayed..");    
    
    // change log pattern
    // spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
    
    // Compile time log levels
    // define SPDLOG_ACTIVE_LEVEL to desired level
    SPDLOG_TRACE("Some trace message with param {}", 42);
    SPDLOG_DEBUG("Some debug message");
}