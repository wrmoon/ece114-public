// This program shows how to use manipulators
// to control cout's floating point output.
#include <iostream> 
#include <iomanip>

int main()
{
    using namespace std;
    double sYear = 365.256363004; 
    cout << "Fixed notation:" << endl
         << fixed
         << "p(15): " << setprecision(15) << sYear << endl
         << "p(9):  " << setprecision(9) << sYear << endl;
    cout << "Scientific notation:" << endl
         << scientific
         << "p(15): " << setprecision(15) << sYear << endl
         << "p(9):  " << setprecision(9) << sYear << endl;
    cout << "Default notation:" << endl
         << defaultfloat
         << "p(15): " << setprecision(15) << sYear << endl
         << "p(9):  " << setprecision(9) << sYear << endl;
    return 0;
}

