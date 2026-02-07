// This program shows how to use functions
// to control cout's floating point output.
#include <iostream> 

int main()
{
    using namespace std;
    double sYear = 365.256363004; 
    cout << "Fixed notation:" << endl;
    cout.setf(ios_base::fixed);
    cout << "p(15): ";
    cout.precision(15);
    cout << sYear << endl << "p(9): ";
    cout.precision(9);
    cout << sYear << endl;
    cout << "Scientific notation:" << endl;
    cout.unsetf(ios_base::fixed);
    cout.setf(ios_base::scientific);
    cout << "p(15): ";
    cout.precision(15);
    cout << sYear << endl << "p(9): ";
    cout.precision(9);
    cout << sYear << endl;
    cout << "Default notation:" << endl;
    cout.unsetf(ios_base::scientific);
    cout << "p(15): ";
    cout.precision(15);
    cout << sYear << endl << "p(9): ";
    cout.precision(9);
    cout << sYear << endl;
    return 0;
}

