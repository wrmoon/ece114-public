// listing 8.4 (modified) swaps.cpp
// Prata, Stephen. C++ Primer Plus (pp. 387-388). Pearson Education.
#include <iostream>
void swapr(int &a, int &b); // a, b are aliases for ints
int main()
{
   using namespace std;
   int wallet1 = 100;
   int wallet2 = 350;

   cout << "Starting values:" << endl
        << "wallet1 = $" << wallet1
        << " wallet2 = $" << wallet2 << endl;

   cout << "Swap via passing by reference:\n";
   swapr(wallet1, wallet2); // pass variables
   cout << "wallet1 = $" << wallet1
        << " wallet2 = $" << wallet2 << endl;
   return 0;
}
void swapv(int a, int b) // try using values
{
   int temp;
   temp = a; // use a, b for values of variables
   a = b;
   b = temp;
}
void swapr(int &a, int &b) // use references
{
   int temp;
   temp = a; // use a, b for values of variables
   a = b;
   b = temp;
}
void swapp(int *p, int *q) // use pointers
{
   int temp;
   temp = *p; // use *p, *q for values of variables
   *p = *q;
   *q = temp;
}

