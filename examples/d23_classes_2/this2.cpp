// this2.cpp - a simple class, now using this
#include <iostream>
#include <cmath>

class Point
{
private:
    double m_x, m_y;
public:
    double getR();
    double getThetaInRadians();
    Point(double, double);
};

Point::Point(double x = 0.0, double y = 0.0) {
    this->m_x = x;
    this->m_y = y;
}
double Point::getR() {
    return sqrt(pow(this->m_x, 2) + pow(this->m_y, 2));
}
double Point::getThetaInRadians() {
    return atan(this->m_y / this->m_x);
}

int main() {
    Point p(3.0, 4.0);
    std::cout.precision(3);
    std::cout << "r,theta="  << std::fixed
              << p.getR() << ", " 
              << p.getThetaInRadians() << std::endl;
    return 0;
}