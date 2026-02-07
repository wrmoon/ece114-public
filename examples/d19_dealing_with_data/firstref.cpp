// listing 8.2 (modified) firstref.cpp -- defining and using a reference
// Prata, Stephen. C++ Primer Plus (pp. 383-384). Pearson Education.
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats; // rodents is a reference

    cout << "rats = " << rats
         << ", rodents = " << rodents << endl;

    rodents++;
    cout << "rats = " << rats
         << ", rodents = " << rodents << endl;

    cout << "rats address    = " << &rats << endl
         << "rodents address = " << &rodents << endl;
    return 0;
}


int rat = 100;
int & rodent = rat;      // rodent is a ref to rat 
int * const prat = &rat; // prat is a const pointer to rat

*prat = 101;  // sets rat, rodent to 101
rodent = 102; // sets rat, *prat to 102
rat = 103;    // sets rodent, *prat to 103

int rat = 100;
int * const prat = &rat; // prat is a const ptr to rat
int & rodent = *prat;    // rodent is a ref to rat

