#include <iostream>

int num_apples = 7;

long s1 = (long)num_apples;  // cast num_apples to a long, c style
long s2 = long(num_apples);  // cast num_apples to a long, c++ style

int main()
{
    std::cout << int('Q');   // displays the ASCII code for 'Q'

    // General forms
    (typename) value    // C style
    typename (value)    // C++ style

    return 0;
}

// auto

auto nancy = 10;                // nancy is int
auto gemini = 20.7;             // gemini is double
auto avocado = 6.02214076e23L;  // avocado is long double
auto tp = 273.16f;              // tp is a float
auto grade = 'B';               // grade is a char

