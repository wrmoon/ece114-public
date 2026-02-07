#include "printer.h"

int main()
{
    auto p = Printer();
    p.printLine(80);
    p.printMsg("Welcome to ECE114! If you are reading this from your terminal,");
    p.printMsg("then make has been installed correctly.");
    p.printLine(80);
    return 0;
}