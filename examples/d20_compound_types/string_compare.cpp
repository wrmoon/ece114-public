// comparing apples with apples
// https://www.cplusplus.com/reference/string/string/compare/
#include <iostream>
#include <string>

int main ()
{
    std::string str1 ("green apple");
    std::string str2 ("red apple");

    if (str1.compare(str2) != 0) {
        std::cout << str1 << " is not " << str2 << '\n';
    }

    if (str1.compare(6,5,"apple") == 0) {
        std::cout << "still, " << str1 << " is an apple\n";
    }

    return 0;
}

