// derived classes - polygon4.cpp
// base class references
// http://www.cplusplus.com/doc/tutorial/inheritance/
#include <iostream>

class Polygon
{
protected:
    int width, height;
public:
    Polygon(int a = 0, int b = 0) { set_values(a,b); }
    void set_values(int a, int b) { width = a; height = b; }
};

class Rectangle : public Polygon
{
public:
    Rectangle(int a = 0, int b = 0) : Polygon(a,b) { }
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
    Rectangle rect;
    Triangle tri;
    // These are valid assignments, because 
    // Rectangle and Triangle are both Polygons
    Polygon & rpoly1 = rect;
    Polygon & rpoly2 = tri;

    // This is valid because set_values() 
    // is in the base classs
    rpoly1.set_values(5, 6);
    rpoly2.set_values(5, 6);

    // area() is only defined in the derived classes...
    // do it has to be called from rect and tri
    std::cout << rect.area() << std::endl;
    std::cout << tri.area() << std::endl;

    // This won't work
    // std::cout << rpoly1.area() << std::endl;
    return 0;
}

