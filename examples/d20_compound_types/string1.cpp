#include <iostream>
#include <string>
int main()
{
    using namespace std;
    // char str1[20]{};        // create an empty char array
    // char str2[] {"jaguar"}; // initialize char array with string literal
    string str1;            // create an empty string object
    string str2 {"jaguar"}; // initialize string object with string literal

    cout << "Enter a kind of feline: ";
    cin >> str1;
    cout << "Here are some felines: "
         << str1 << ", " 
         << str2 << endl;
    cout << "The third letter in " << str1 << " is " << str1[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;

    return 0;
}

