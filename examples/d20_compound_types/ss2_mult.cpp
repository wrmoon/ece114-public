#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input_string = "0x1f Hello xxxx 3.14";
    std::stringstream ss(input_string);
    
    int number;
    std::string word;
    double dbl;
    
    ss >> std::hex >> number;
    ss >> word;
    if (!(ss >> dbl))
    {
        std::cout << "not a double!" << std::endl;
    }
    
    std::cout << "Hex integer: " << number  << " "
              << "Word: " << word << " "
              << "Double: " << dbl << std::endl;
    
    return 0;
}
