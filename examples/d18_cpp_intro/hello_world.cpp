#include <iostream>
#include <cstdint>

int main()
{
    uint8_t data_array[] = {31, 32, 33, 34};
    const char *name = "Professor Moon";
    int age = 55;
    int *page = &age;
    double pi = 3.14159;
    std::cout << "Hello world!" << std::endl
              << "My name is " << name << ". "
              << "My age is " << age << ". "
              << " And the pointer to age is " << page << ". " << std::endl
              << "And the data array is " << data_array
              << "It's pi day! Pi is approx " << pi << std::endl;
    return 0;
}
