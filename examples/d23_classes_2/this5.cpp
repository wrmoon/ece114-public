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

int main() {
    Point p1(3.0, 4.0);
    Point p2(2.0, 5.0);

    Point *max {nullptr};
    double c = p1.compare(p2);
    if (c >= 0.0) {
        max = &p1;
    } else {
        max = &p2;
    }
    std::cout << "max "; 
    max->printRT();
    return 0;
}

