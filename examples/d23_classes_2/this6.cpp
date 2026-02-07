// this5.cpp - adding a compare() function
#include <iostream>
#include <cmath>

class Point
{
private:
    double m_x, m_y;
public:
    double getR() const;
    double getThetaInRadians() const;
    Point(double, double);
    void printRT() const;
    double compare(const Point &) const;
    Point* max(Point &other);
    Point& maxr(Point &other);
};

Point::Point(double x = 0.0, double y = 0.0) {
    this->m_x = x;
    this->m_y = y;
}
double Point::getR() const {
    return sqrt(pow(this->m_x, 2) + pow(this->m_y, 2));
}
double Point::getThetaInRadians() const {
    return atan(this->m_y / this->m_x);
}
void Point::printRT() const {
    std::cout.precision(3);
    std::cout << "r,theta="  << std::fixed
              << this->getR() << ", " 
              << this->getThetaInRadians() << std::endl;
}
double Point::compare(const Point &other) const
{
    return this->getR() - other.getR();
}

Point* Point::max(Point &other) 
{
    if (this->getR() > other.getR())
        return this;
    else
        return &other;
}
Point& Point::maxr(Point &other) 
{
    if (this->getR() > other.getR())
        return *this;
    else
        return other;
}


int main() {
    Point p1(3.0, 4.0);
    Point p2(2.0, 5.0);

    Point *max = p1.max(p2);
    Point &maxr = p1.maxr(p2);
    std::cout << "max "; 
    max->printRT();
    maxr.printRT();
    return 0;
}

