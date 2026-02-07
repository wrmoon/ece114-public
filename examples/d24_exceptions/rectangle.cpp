// rectangle.cpp from C How to Program p 656
#include <stdexcept> // for invalid argument
#include <iostream> // for cout
#include "rectangle.h"

Rectangle::Rectangle(double l, double w) 
{
    setLength(l);
    setWidth(w);
}

void Rectangle::setLength(double l)
{
    if (l > 0.0 && l < 20.0)
    {
        m_length = l;
    }
    else 
    {
        throw std::invalid_argument("length must be > 0.0 and < 20.0");
    }
}

void Rectangle::setWidth(double w)
{
    if (w > 0.0 && w < 20.0)
    {
        m_width = w;
    }
    else 
    {
        throw std::invalid_argument("width must be > 0.0 and < 20.0");
    }
}

double Rectangle::perimeter() const
{
    // throw an 'out-of-range' exception if perimeter is >= 50
    double perimeter = 2.0 * (m_width + m_length);
    if (perimeter >= 50.0)
    {
        throw std::out_of_range("perimeter must be < 50.0");
    }
    return perimeter;
}

double Rectangle::area() const
{
    return m_width * m_length;
}

void Rectangle::dump() const
{
    std::cout << std::fixed; 
    std::cout.precision(1);

    std::cout << "length = " << getLength()
        << ": width =" << getWidth()
        << "; perimeter = " << perimeter()
        << "; area = " << area() << std::endl;
}