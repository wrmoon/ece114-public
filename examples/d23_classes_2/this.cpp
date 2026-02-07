// this.cpp - a simple class, all in one file
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
    m_x = x;
    m_y = y;
}
double Point::getR() {
    return sqrt(pow(m_x, 2) + pow(m_y, 2));
}
double Point::getThetaInRadians() {
    return atan(m_y / m_x);
}

int main() {
    Point p(3.0, 4.0);
    std::cout.precision(3);
    std::cout << "r,theta="  << std::fixed
              << p.getR() << ", " 
              << p.getThetaInRadians() << std::endl;
    return 0;
}