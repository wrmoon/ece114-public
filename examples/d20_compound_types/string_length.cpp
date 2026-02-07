// string::length
// https://www.cplusplus.com/reference/string/string/length/
// adapted
#include <iostream>
#include <string>
#include <string.h>

int main ()
{
  std::string s1 {"Test string"};
  std::cout << "The size of str is " << s1.length() << " bytes.\n";

  char *str = new char[s1.length() + 1];
  strcpy(str, s1.c_str());
  std::cout << str << std::endl;
  delete str;
  str = nullptr;
  return 0;
}


