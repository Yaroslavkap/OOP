#include "point.h"

#include <cmath>

Point::Point() : x_(0.0), y_(0.0) {}

Point::Point(double x, double y) : x_(x), y_(y) {}

Point::Point(std::istream& is) {
    is >> x_ >> y_;
}

double Point::dist(Point& other) {
    double dx = (other.x_ - x_);
    double dy = (other.y_ - y_);
    return std::sqrt(dx * dx + dy * dy);
}

double Point::getX()
{
    return x_;
}

double Point::getY()
{
    return y_;
}

void Point::setX(double a)
{
    x_ = a;
}

void Point::setY(double a)
{
    y_ = a;
}

std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x_ >> p.y_;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x_ << ", " << p.y_ << ")";
    return os;
}

bool operator== (Point& p1, Point& p2)
{
    return (p1.getX() == p2.getY() &&
        p1.getY() == p2.getY());
}

bool operator!= (Point& p1, Point& p2)
{
    return !(p1 == p2);
}