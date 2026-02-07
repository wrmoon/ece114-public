#include <iostream>


// h.h
class H
{
private:
    int m_a;
    double m_b;

public:
    H() 
    { 
        m_a = 0; 
        m_b = 0.0;
    };
    void display() { std::cout << m_a << std::endl; }
};

// h.cpp


// main.cpp
int main()
{
    H h1;
    H h2{};
    H h3{};
    h1.display();
    h2.display();
    h3.display();


    return 0;
}
