#include <iostream>


int main()
{
    int foo = 7;

    int &bar = foo;

    std::cout << "foo is " << foo++ << std::endl;
    std::cout << "bar is " << --bar << std::endl;

    return 0;
}