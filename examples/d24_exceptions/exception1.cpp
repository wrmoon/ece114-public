// exception1.cpp
#include <iostream>
double divide(double numerator, double denominator) {
    if (denominator == 0.0) {
        throw "bad argument: denominator cannot be 0.0";
    }
    return numerator / denominator;
}

int main() {
    double x,y,z;
    std::cout << "Enter two numbers ";
    while (std::cin >> x >> y) {
        try {
            z = divide(x,y);
        }
        catch (const char* msg) {
            std::cout << msg << std::endl;
            std::cout << "Enter another pair of numbers: ";
            continue;
        }
        std::cout << x << " divided by " << y 
                  << " is " << z << std::endl;
        std::cout << "Enter next pair of numbers (q=quit): ";
    }
    std::cout << "so long.." << std::endl;
    return 0;
}

