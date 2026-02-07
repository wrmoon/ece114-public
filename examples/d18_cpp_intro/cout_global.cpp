// This program shows that cout is instantiated globally
#include <iostream>
#include <iomanip>

using namespace std;
void print14()
{
     cout << 14.77777777777 << endl;
     cout << "&cout ==" << &cout << endl;
}

int main()
{
     double sYear = 365.256363004;
     cout << "&cout ==" << &cout << endl;
     cout << "Fixed notation:" << endl
          << fixed
          << "p(15): " << setprecision(15) << sYear << endl
          << "p(9):  " << setprecision(9) << sYear << endl;
     print14();
     cout << "Scientific notation:" << endl
          << scientific
          << "p(15): " << setprecision(15) << sYear << endl
          << "p(9):  " << setprecision(9) << sYear << endl;
     print14();
     cout << "Default notation:" << endl
          << defaultfloat
          << "p(15): " << setprecision(15) << sYear << endl
          << "p(9):  " << setprecision(9) << sYear << endl;
     print14();
     return 0;
}