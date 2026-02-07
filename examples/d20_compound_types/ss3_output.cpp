#include <iostream>
#include <sstream>

int main() {
    std::stringstream ss;
    std::string name = "Becky";
    int age = 25;
    double height = 1.65;

    ss << "My name is " << name << ", I'm " << age 
       << " years old, and I'm " << height << " meters tall.";

    std::string str = ss.str();

    std::cout << str << std::endl;

    return 0;
}
