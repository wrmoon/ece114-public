#include <iostream>
#include <string>

int main()
{
    const int SIZE{80};
    char array[SIZE]{}; // init a char array

    std::cout << "Tell me true: ";
    std::cin.getline(array, SIZE);

    std::string s1;
    std::cout << "Tell me why: ";
    std::getline(std::cin, s1);

    std::cout << array << " " 
              << s1 << std::endl;
    return 0;
}

