// https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm
// (modified)
#include <iostream>
class Box
{
public:
    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    : m_length(l), m_breadth(b), m_height(h)
    {
        std::cout << "Constructor called." << std::endl;

        // Increase every time object is created
        objectCount++;
    }
    double Volume() { return m_length * m_breadth * m_height; }
    static int getCount() { return objectCount; }
private:
    double m_length;  // Length of a box
    double m_breadth; // Breadth of a box
    double m_height;  // Height of a box
    static int objectCount; // Object count
};

// Initialize static member of class Box
// This would go typically in box.cpp
int Box::objectCount = 0;

int main(void)
{
    Box box1(3.3, 1.2, 1.5); // Declare box1
    Box box2(8.5, 6.0, 2.0); // Declare box2

    std::cout << box1.Volume();

    // Print total number of objects.
    std::cout << "Total objects: " 
              << Box::getCount() << std::endl;

    return 0;
}

