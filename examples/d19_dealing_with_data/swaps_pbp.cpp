// listing 8.4 (modified) swaps.cpp
// Prata, Stephen. C++ Primer Plus (pp. 387-388). Pearson Education.
#include <iostream>
void swapp(int *p, int *q); // p, q are addresses of ints
int main()
{
   using namespace std;
   int wallet1 = 100;
   int wallet2 = 350;

   cout << "Starting values:" << endl
        << "wallet1 = $" << wallet1
        << " wallet2 = $" << wallet2 << endl;

   cout << "Swap via passing by pointer:\n";
   swapp(&wallet1, &wallet2); // pass addresses of variables
   cout << "wallet1 = $" << wallet1
        << " wallet2 = $" << wallet2 << endl;
   return 0;
}
void swapp(int *p, int *q) // use pointers
{
   int temp;
   temp = *p; // use *p, *q for values of variables
   *p = *q;
   *q = temp;
}

