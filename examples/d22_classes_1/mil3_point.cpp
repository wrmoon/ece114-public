#include <iostream>

// point.h
class Point 
{
private:
    const double m_x;
    const double m_y;
public:
    Point(double x, double y) : m_x(x), m_y(y) {}
    double getX() const { return m_x; }
    double getY() const { return m_y; }
    void print(); // const
};

// point.cpp
void Point::print() // const
{ 
    std::cout << "Point(" << m_x << ", " << m_y << ")" << std::endl; 
}

// main.cpp
int main()
{
    Point p{1.0, 2.0};
    std::cout << "p.getX() = " << p.getX() << std::endl;
    std::cout << "p.getY() = " << p.getY() << std::endl;
    p.print();

#if 0
    const Point origin{0.0, 0.0};
    origin.print();
#endif
    return 0;
}
