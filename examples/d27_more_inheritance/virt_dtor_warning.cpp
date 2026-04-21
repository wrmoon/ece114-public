#include <iostream>
using namespace std;

class Base
{
private:
public:
    Base()  { cout << "+++ Base" << endl; }
    // causes compiler error: needs virtual dtor
    ~Base() { cout << "--- Base" << endl; }
    virtual void foo() { cout << "Base::foo()" << endl; }
};

class D : public Base
{
private:
public:
    D()  { cout << "+++ D" << endl; }
    ~D() { cout << "--- D" << endl; }
    void foo() override { cout << "D::foo()" << endl; }
};

int main()
{
    Base* b = new Base;
    b->foo();
    delete b;
    b = nullptr;

    cout << endl;

    D* d = new D;
    d->foo();

    Base *bd = d;
    bd->foo();

    delete d;
    d = nullptr;

    return 0;
}