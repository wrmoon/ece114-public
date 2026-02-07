// namespaces
#include <iostream>

const char* value (const char* f) { return f; }

namespace foo
{
  int value(void);
}

namespace bar
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}

int main () {
  using namespace std;
  cout << value("hello") << endl;
  cout << foo::value() << '\n';
  cout << bar::value() << '\n';
  cout << bar::pi << '\n';
  return 0;
}

int foo::value(void)
{
  return 5;
}

