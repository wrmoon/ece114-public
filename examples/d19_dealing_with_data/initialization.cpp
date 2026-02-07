#include <cstddef>  // For NULL

int cats = 101;     // traditional C initialization
int dogs(420);      // alternate C++ syntax - sets dogs to 420

int femurs = {10};  // { } is not just for arrays anymore!
int lemurs {20};    // The = is not needed!

double temps[] {10.0, 20.0, 30.0}; // no = needed

int fiddle = {};    // Initializes fiddle to 0
float violin {};    // Initializes violin to 0.0

char *ptr1 = NULL;      // Traditional C way of setting null pointer
char *ptr2 = nullptr;   // C++ way of setting null pointer
char *ptr3(nullptr);    // Another C++ way of setting null pointer
char *ptr4 {};          // Another way to set pointer to nullptr

#if 0
// Things you can't do:
// Narrowing conversions are not allowed in { } initializers
long alist[] {25, 92, 3.0};   // not allowed
char clist[4] { 'h', 'i', 1024, '\0'}; // not allowed
#endif


#include <iostream>
int main()
{
    using namespace std;
    int a = 3.0;
    int b {3.0}; // not allowed
    cout << a << endl
         << b << endl;
    return 0;
}
