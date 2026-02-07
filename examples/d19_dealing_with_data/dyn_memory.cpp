#include <iostream>

int main()
{
    // allocate memory
    int * pn = new int; 

    // use the memory
    *pn = 4;
    std::cout << "*pn is " << *pn << std::endl;

    // free memory
    delete pn;
    pn = nullptr;

    return 0;
}

