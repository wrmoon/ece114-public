#include <iostream>
class Point
{
private: 
    int m_x, m_y;

public:
    Point() {}
    Point(int x1, int y1) { m_x = x1; m_y = y1; }

    // Copy constructor
    Point(const Point &p2) { m_x = p2.m_x; m_y = p2.m_y; }

    // Assignment operator
    Point & operator=(const Point &p2) { m_x = p2.m_y; m_y = p2.m_x; return *this; }


    int getX() { return m_x; }
    int getY() { return m_y; }

    void dump() { std::cout << "x=" << m_x << " y=" << m_y << std::endl;  }
};


int main()
{
    Point p1(10, 15); // Use normal constructor
    Point p2 = p1;    // Use copy constructor
    Point p3(-5,-5);  // Use normal constructor
    p3 = p1;          // Use assignment operator

    std::cout << "p1: ";
    p1.dump();
    std::cout << "p2: ";
    p2.dump();
    std::cout << "p3: ";
    p3.dump();
    return 0;
}