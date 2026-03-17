#include <iostream>
#include <cstdint>
#include <cmath>

int main()
{
    uint16_t data_array[] = {31, 32, 33, 34};
    const char *name = "Professor Moon";
    int age = 56;
    int *page = &age;
    double pi = M_PI;
    std::cout << "Hello world!" << std::endl
              << "My name is " << name << ". "
              << "My age is " << age << ". "
              << " And the pointer to age is " << page << ". " << std::endl
              << "And the data array is " << data_array << std::endl
              << "It's pi day! Pi is approx " << pi << std::endl;
    return 0;
}
