#include <iostream>

void  example1()
{
    double temperature = 98.6;
    int temp1 = (int)temperature;

    int temp2 = static_cast<int>(temperature);

    std::cout << temperature 
              << " " << temp1 
              << " " << temp2 
              << std::endl;
}

void example2()
{
    char c = 'X';
    char* pc = &c;

    int *pi = (int*)pc;

    // error: static_cast from 'char*' to 'int*' is not allowed
    // int *pi2 = static_cast<int*>(&c);

    long pi3 = (long)pc;
    // long pi3 = static_cast<long>(pc);

    std::cout << c 
              << " " << *pc
              << " " << (int)*pc
              << " " << *pi
              << " " << pi3
              << std::endl;
}

int main ()
{
    example1();
    example2();
    return 0;
}

// punchline:
// * c-style cast is extremely powerful (read: dangerous)
// static_cast is a safer alternative, as it prevents you from doing anything stupid
// static_cast is evaluated at compile-time, like c-casts
