// dynamic_cast is used for converting pointers between base classes 
// and derived classes, when there is at least one virtual function in base class.

// C++ program demonstrates if there is no virtual function used in the Base class
#include <iostream>
using namespace std;

// Base class declaration
class Base {
public:
	// void print()
	virtual void print(const char* s)
	{
		cout << "Base: " << s << endl;
	}
};

// Derived Class 1 declaration
class Derived1 : public Base {
public:
	void print(const char* s)
	{
		cout << "Derived1: " << s << endl;
	}
};

// Derived class 2 declaration
class Derived2 : public Base {
public:
	void print(const char* s)
	{
		cout << "Derived2: "  << s<< endl;
	}
};

// Driver Code
int main()
{
	// call Derived1's print()
	Derived1 d1;
    d1.print("d1 (no cast)");

    // call Derived1's print() via base pointer
    Base *bp = &d1;
    bp->print("bp (via base pointer)");

    // do it with references
    Base & br = d1;
    br.print("br (via base reference)");


	// Dynamic casting - used to safely cast pointers between base and derived classes
	// Base class pointer holds Derived1
	// class object
	Base* bp1 = dynamic_cast<Base*>(&d1);
    bp1->print("bp1 (dynamic_cast)");

    // C casting - lets you turn anything into anything else
	// This is the worst kind of casting
	// C casting is not checked, even at compile-time
    Derived2 *evil = (Derived2*)(bp);
    evil->print("evil - C cast Derived2 from Base");

    // static_cast casting
	// static cast is almost as bad as C casting, but it 
	// is checked at compile time for compatibility
    Derived2 *evil2 = static_cast<Derived2*>(bp);
    evil2->print("evil2 - static_cast Derived2 from Base");

	// Dynamic casting - returns nullptr if the cast is not possible
	Derived2* dp2 = dynamic_cast<Derived2*>(bp);
	if (dp2 == nullptr)
    {
		cout << "You can't cast a Derived1 into a Derived2" << endl;
    }
    else
    {
		dp2->print("dp2");
    }


	return 0;
}
