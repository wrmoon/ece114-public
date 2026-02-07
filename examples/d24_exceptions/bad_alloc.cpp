// bad_alloc.cpp standard exception example
// from https://www.cplusplus.com/doc/tutorial/exceptions/
#include <iostream>
#include <exception>
int main()
{
    try
    {
        int *myarray = new int[1000000000000000];
        std::cout << myarray[99];
    }
    catch (std::exception &e)
    {
        std::cout << "Friendly Standard exception: "
                  << e.what() << std::endl;
    }
    return 0;
}

