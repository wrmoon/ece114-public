#include <iostream>
using namespace std;
class Base {
public:
    Base() { cout << "in base default constructor" << endl;}
    Base(int a) { cout << "in base constructor " << a << endl;}
    ~Base() { cout << "in base destructor" << endl; }
};

class Derived : public Base {
public:
    //Derived(int a) : Base(a) { cout << "in derived constructor" << endl; }
    Derived(int a) { cout << "in derived constructor" << endl; }
    ~Derived() { cout << "in derived destructor" << endl; }
};

int main()
{
    Derived d{10};
    return 0;
}

// Base class default constructor is called before derived class constructor.
// You can call the base class constructor explicitly instead if you want. 
// Call the base class constructor in the initialization list of the derived class constructor.
// If the base class has no default constructor, you must call the base class constructor explicitly.
