#include <iostream>
#include <vector>
using namespace std;

class Base
{
    public:
        virtual void doSomething() = 0;
        virtual ~Base() = default;
};

// h file
class D1 : public Base
{
    public:
        void doSomething() override;
};

// cpp file
void D1::doSomething() 
{
    cout << "yay! I'm doing something as D1!" << endl;
    Base::doSomething();
}

// h file
class D2 : public Base
{
    public:
        void doSomething() override;
};

// cpp file
void D2::doSomething() 
{
    cout << "yay! I'm doing something as D2!" << endl;
}


int main()
{
    D1 dee1;
    D2 dee2;

    //////////////////////////////////////////////////////

    std::vector<Base *> stuff;
    stuff.push_back(&dee1);
    stuff.push_back(&dee2);

    for (auto b: stuff)
    {
        b->doSomething();
    }
    return 0;
}