#include <iostream>

// x.h
class X
{
private:
    int m_a;

public:
    void whoAreYou() const;

};

// x.cpp
void X::whoAreYou() const
{
    std::cout << "I am " << this << std::endl;
}


int main()
{
    X xx{};
    xx.whoAreYou();

    X* pxx = new X();
    std::cout << "pxx is " << pxx << std::endl;

    pxx->whoAreYou();
    delete pxx;
    pxx = nullptr;

    return 0;
}
