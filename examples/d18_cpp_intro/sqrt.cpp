// sqrt.cpp (adapted) -- using the sqrt() function
// Prata, Stephen. C++ Primer Plus (p. 50-51).
#include <iostream>
#include <cmath> // or math.h
int main()
{
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    cout << fixed;     // write floating-point values in fixed-point notation
    cout.precision(2); // 2 digits after decimal point
    double side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}

