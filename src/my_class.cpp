#include "my_class.hpp"

my_class::my_class(/* args */)
{
    std::cout << "Constructor from my_class" << std::endl;
    std::cout << "1 2 3 ... Go !" << std::endl;
}

my_class::~my_class()
{
}

void my_class::printSomething(const std::string &str)
{
    std::cout << str << std::endl;
}