#include <iostream>
#include <stdexcept>

int divide(int n, int d)
{
    if (d == 0)
    {
        throw std::overflow_error("You can't divide by zero, Einstein.");
    }
    return n/d;
}
int main()
{
    try
    {
        double d = 100.0;
        double dz = 0.0;
        std::cout << "100.0/0 = " << d/dz << std::endl;

        int i = 100;
        int iz = 0;
        //std::cout << "100/0 = " << i/iz << std::endl;
        std::cout << "100/0 = " << divide(i,iz) << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "EXCEPTION: " <<  e.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "Whoa Nellie!" << std::endl;
    }
    return 0;
}