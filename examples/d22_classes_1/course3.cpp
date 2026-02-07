#include <iostream>
#include "student03.h"

int main()
{
    std::cout << "const example" << std::endl;
    const Student jdoe ("Jane", "Doe", "jdoe27@college.edu", "U-24601");
    jdoe.printInfo();
    std::cout << std::endl;

    std::cout << "Done" << std::endl;

    return 0;
}




