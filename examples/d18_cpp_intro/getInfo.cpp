// listing 2.3 (adapted) getinfo.cpp -- input and output
// Prata, Stephen. C++ Primer Plus (p. 45-46).
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots; // C++ input
    cout << "Here are two more. ";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}

