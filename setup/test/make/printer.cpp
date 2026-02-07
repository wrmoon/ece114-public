#include <iostream>
#include "printer.h"

void Printer::printLine(int length)
{
    for (int c = 0; c < length; c++)
    {
        std::cout << "=";
    }
    std::cout << std::endl;
}

void Printer::printMsg(const std::string& str)
{
    std::cout << str << std::endl;
}