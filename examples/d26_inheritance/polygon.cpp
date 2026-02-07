// derived classes - polygon.cpp
// simple inheritance w/ default constructors
// http://www.cplusplus.com/doc/tutorial/inheritance/
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;
public:
    void set_values(int a, int b) { width = a; height = b; }
};

class Rectangle : public Polygon
{
public:
    int area() { return width * height; }
};

class Triangle : public Polygon
{
public:
    int area() { return width * height / 2; }
};

int main()
{
    Rectangle rect;
    Triangle tri;
    rect.set_values(4, 5);
    tri.set_values(4, 5);
    cout << rect.area() << '\n';
    cout << tri.area() << '\n';
    return 0;
}
