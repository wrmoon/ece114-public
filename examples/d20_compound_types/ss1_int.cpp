#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string str {"123"};
    std::stringstream ss(str);
    int num;
    ss >> num;
    std::cout << "The integer is " << num << std::endl;
    return 0;
}

