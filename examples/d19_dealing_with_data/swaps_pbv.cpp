// listing 8.4 (modified) swaps.cpp
// Prata, Stephen. C++ Primer Plus (pp. 387-388). Pearson Education.
#include <iostream>
void swapv(int a, int b);
int main()
{
   using namespace std;
   int wallet1 = 100;
   int wallet2 = 350;

   cout << "Starting values:" << endl
        << "wallet1 = $" << wallet1
        << " wallet2 = $" << wallet2 << endl;

   cout << "Trying to swap via passing by value:\n";
   swapv(wallet1, wallet2); // pass values of variables
   cout << "wallet1 = $" << wallet1
        << " wallet2 = $" << wallet2 << endl;
   return 0;
}
void swapv(int a, int b) 
{
   int temp;
   temp = a; // use a, b for values of variables
   a = b;
   b = temp;
}