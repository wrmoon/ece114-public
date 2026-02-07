#include <iostream>
#include <string>
int main()
{
    using namespace std;

    //char charA1[20] {};
    //char charA2[] {"centaur"}; // initialize with string literal
    //charA1 = charA2;    // can't do that - we can't assign arrays

    string str1;
    string str2 {"beetlejuice"};
    str1 = str2;    // no problem! str2 is copied to str1

    str1 += str2;   // apppend str2 to str1
    string str3 = str1 + str2; // init with concat
    cout << str3 << endl;

    return 0;
}

