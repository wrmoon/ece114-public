// overriding base class functions - virtual
// http://www.cplusplus.com/doc/tutorial/inheritance/
#include <iostream>

class Polygon
{
protected:
    int width, height;
public:
    Polygon(int a = 0, int b = 0) { set_values(a,b); }
    void set_values(int a, int b) { width = a; height = b; }
    virtual int area() { return -1;}
};

class Rectangle : public Polygon
{
public:
    Rectangle(int a = 0, int b = 0) : Polygon(a,b) { }
    int area() override { return width * height; }
};

class Triangle : public Polygon
{
public:
    Triangle(int a = 0, int b = 0) : Polygon(a,b) { }
    int area() override { return width * height / 2; }
};

int main()
{
    Rectangle rect{10,20};
    Triangle tri{10,20};

    // here, we're calling Rectangle::area()
    std::cout << "Rect area: " << rect.area() 
              << std::endl;

    // here, we're calling Triangle::area()
    std::cout << "Tri area: " << tri.area() 
              << std::endl;

    Polygon & rpoly = rect;
    // here, we're calling Rectangle:area()
    std::cout << "RectPoly area: " << rpoly.area() 
              << std::endl;

    // here, we're calling Polygon::area()
    std::cout << "Tri base class area: " << tri.Polygon::area() 
              << std::endl;

    return 0;
}

