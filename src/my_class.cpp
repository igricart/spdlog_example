#include "my_class.hpp"

my_class::my_class(/* args */)
{
    std::cout << "Constructor from my_class" << std::endl;
    // File logger
    file_logger = spdlog::basic_logger_mt("file_logger", "logs/basic-log.txt");
    // file_logger->info("I logged an info from inside the function.");
    // Stdout logger
    console_logger = spdlog::stdout_color_mt("console");    
    // Stderr logger
    err_logger = spdlog::stderr_color_mt("stderr");
    std::cout << "1 2 3 ... Go !" << std::endl;
}

my_class::~my_class()
{
}

void my_class::printSomething(const std::string &str)
{
    spdlog::info(str);
}

void my_class::printToFile(const std::string &str)
{
    file_logger->info(str);
    file_logger->warn(str);
}

void my_class::printConsole(const std::string &str)
{
    console_logger->info(str);
}

void my_class::printErr(const std::string &str)
{
    err_logger->error(str);
}