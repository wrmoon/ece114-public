// this3.cpp - explicit this, consts
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

int main() {
    Point p(3.0, 4.0);
    p.printRT();
    return 0;
}

