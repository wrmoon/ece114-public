// Listing 2.2: carrots.cpp (adapted)
// Prata, Stephen. C++ Primer Plus (p. 41).
#include <iostream>
int main()
{
    using namespace std;

    int carrots = 25;

    cout << "I have ";
    cout << carrots; // display the value of the variable
    cout << " carrots.";
    cout << endl;
    cout << "Crunch, crunch. Now I have " << --carrots << " carrots." << endl;
    return 0;
}
