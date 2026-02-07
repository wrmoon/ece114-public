// mil2.cpp
#include <iostream>
#include <vector>

// foo.h
class Foo
{
private:
    int m_a, m_b, m_c;
    const double m_d{0};

public:
    Foo(double);
    Foo(double, double);
};

// foo.cpp
Foo::Foo(double d=20.0) : m_a(0), m_b(0), m_c(0), m_d(d)
{
    std::cout << "m_d = " << m_d << std::endl;
}

Foo::Foo(double c, double d) : m_c{c}, m_d{d} { }

// main.cpp
int main()
{
    Foo bar;
    return 0;
}

