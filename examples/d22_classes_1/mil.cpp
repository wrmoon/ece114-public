// mil.cpp
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
};

// foo.cpp
Foo::Foo(double d = 20.0)
{
    m_a = 0;
    m_b = 0;
    m_c = 0;
    // m_d = d; // can't set this because it's const
}

// main.cpp
int main()
{
    Foo bar;
    return 0;
}


