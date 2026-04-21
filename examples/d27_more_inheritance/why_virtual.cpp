// derived classes - runtime polymorphism for fun and profit
// http://www.cplusplus.com/doc/tutorial/inheritance/
#include <iostream>
#include <vector>

class Polygon
{
protected:
    int width, height;
public:
    Polygon(int a = 0, int b = 0) { set_values(a,b); }
    void set_values(int a, int b) { width = a; height = b; }
    virtual int area() = 0;
    virtual std::string whatAmI() const = 0;
};

class Rectangle : public Polygon
{
public:
    Rectangle(int a = 0, int b = 0) : Polygon(a,b) { }
    int area() override { return width * height; }
    std::string whatAmI() const override { return "rectangle"; }
};

class Triangle : public Polygon
{
public:
    Triangle(int a = 0, int b = 0) : Polygon(a,b) { }
    int area() override { return width * height / 2; }
    std::string whatAmI() const override { return "triangle"; }
};

int main()
{
    // Notice we have a vector of pointers to Polygon, 
    // which can be _any_ class that derives from Polygon
    std::vector<Polygon*> shapes{ 
        new Rectangle{3,4},
        new Triangle{3,4}
    };

    Rectangle r2{10,20};
    shapes.push_back(&r2);

    for (auto &s : shapes)
    {
        std::cout << s->whatAmI() << " area: " << s->area() << std::endl;
    }

    return 0;
}

