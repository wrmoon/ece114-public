// from https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
#include <iostream>
using namespace std;

class Base { };

class Derived : private Base // <-- notice private
{ 
};

class Other { };

int main()
{
    Derived d1;
    Base *b1 = (Base *)(&d1); // allowed
    Base *b2 = static_cast<Base *>(&d1); // error

    Other* o = (Other*)(&d1); // allowed
    Other* o2 = static_cast<Other*>(&d1); // error

    return 0;
}

// punchline:
// * c-style cast is extremely powerful (read: dangerous)
// static_cast is a safer alternative, as it prevents you from doing anything stupid
