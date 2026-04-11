#include <iostream>
#include <string>

struct Tracer
{
    Tracer(std::string name)
    {
        std::cout << "Constructing: " << name << "\n";
    }
};

struct Base
{
    Base()
    {
        std::cout << "Constructing: Base\n";
    }
};

struct Derived : public Base
{
    Tracer m_a;
    Tracer m_b;

    // MIL is written in scrambled order — watch what actually happens
    Derived() : m_b("m_b"), Base(), m_a("m_a") {}
};

int main()
{
    Derived d;
}