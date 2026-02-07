#include <iostream>
#include <string>

int main ()
{
    using namespace std;
    char cha1[] {"lions"};
    char cha2[] {"lions"};

    if (cha1 == cha2) {
        // This will never ever happen.
        cout << "Whoa. Just.... Whoa." << endl;
    }

    std::string str1 = "bears";
    std::string str2 {str1};
    std::string str3 {"tigers"};

    if (str1 == str2) {
        // But this will!
        cout << str1 << " == " << str2 << endl
             << "yet &str1 = " << &str1 << endl
             << "and &str2 = " << &str2 << endl;
    }
    if (str3 > str1) {
        cout << str3  << " > " << str1 << endl;
    }
    if (str1 < str3) {
        cout << str1  << " < " << str3 << endl;
    }
    if (str3 > cha1) {
        cout << str3  << " > " << cha1 << endl;
    }

    return 0;
}

