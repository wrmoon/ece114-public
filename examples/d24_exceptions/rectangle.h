// rectangle.h from C How to Program p 656
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double m_length; // (0.0, 20.0)
    double m_width;  // (0.0, 20.0)
public:
    Rectangle(double l=1.0, double w=1.0);
    void setLength(double l);
    double getLength() const { return m_length; };
    void setWidth(double w);
    double getWidth() const { return m_width; };
    double perimeter() const; 
    double area() const;
    void dump() const;
};
#endif

