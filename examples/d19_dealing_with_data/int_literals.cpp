#include <iostream>

int main()
{
    using namespace std;
    int number{};
    cout << "Pick a number, any number: ";
    cin >> number;

    cout << "The number is:" << endl
         << number << " decimal" << endl
         << hex << number << " hex" << endl
         << oct << number << " octal" << endl;

    return 0;
}