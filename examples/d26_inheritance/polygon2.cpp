// derived classes - polygon2.cpp
// explicitly calling base class constructor
// http://www.cplusplus.com/doc/tutorial/inheritance/
#include <iostream>

class Polygon
{
protected:
    int width, height;
public:
    Polygon() { }
    Polygon(int a , int b ) { set_values(a,b); }
    void set_values(int a, int b) { width = a; height = b; }
};

class Rectangle : public Polygon
{
public:
    Rectangle(int a = 0, int b = 0) { Polygon(a,b); }
    int area() { return width * height; }
};

class Triangle : public Polygon
{
public:
    Triangle(int a = 0, int b = 0) : Polygon(a,b) { }
    int area() { return width * height / 2; }
};

int main()
{
    Rectangle rect(4,5);
    Triangle tri(4,5);
    std::cout << rect.area() << '\n';
    std::cout << tri.area() << '\n';
    return 0;
}
