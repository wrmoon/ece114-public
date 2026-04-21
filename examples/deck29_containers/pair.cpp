#include <utility>
#include <iostream>
#include <cstdlib>

// simple example of using std::pair
void example1()
{
    // Create
    std::pair<std::string, int> p = std::make_pair("Alice", 42);

    // Use
    std::string name = p.first;
    int age = p.second;

    std::cout << "name=" << name << " age=" << age << std::endl;
}

// example of using std::pair with using declaration
void example2()
{

    // This makes the code a little more self-documenting
    using Person = std::pair<std::string, int>;

    // Create
    Person p = std::make_pair("Alice", 42);

    // Use
    std::cout << "name=" << p.first << " age=" << p.second << std::endl;
}

using ErrorStatus = std::pair<bool, std::string>;

ErrorStatus areTheyAboutTheSame(int num1, int num2)
{
    // if num1 and num2 are about the same, return true
    if (std::abs(num1 - num2) < 2)
    {
        return ErrorStatus(true, "");
    }
    return ErrorStatus(false, "the numbers are not about the same");
}

    int main()
{
    example1();
    example2();

    ErrorStatus e = areTheyAboutTheSame(3, 10);
    if (not e.first)
    {
        std::cout << "ERROR: " << e.second << std::endl;
    }

    return 0;
}