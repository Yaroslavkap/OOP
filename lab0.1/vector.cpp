#include "vector.h"

#include <cmath>

Vector::Vector() : x_(0.0), y_(0.0), z_(0.0) {}

Vector::Vector(double x, double y, double z) : x_(x), y_(y), z_(z) {}

Vector::Vector(std::istream& is) {
    is >> x_ >> y_ >> z_;
}

double Vector::dist(Vector& other) {
    double dx = (other.x_ - x_);
    double dy = (other.y_ - y_);
    return std::sqrt(dx * dx + dy * dy);
}

double Vector::getX()
{
    return x_;
}

double Vector::getY()
{
    return y_;
}

double Vector::getZ()
{
    return z_;
}

void Vector::setX(double a)
{
    x_ = a;
}

void Vector::setY(double a)
{
    y_ = a;
}

void Vector::setZ(double a)
{
    z_ = a;
}

double Vector::Len()
{
    double l = sqrt(x_ * x_ + y_ * y_ + z_ * z_);
    return l;
}

double Vector:: Angle( Vector& v2)
{
    double cos = (x_ * v2.x_ + y_ * v2.y_ + z_ * v2.z_) / (Len() * v2.Len());
    return acos(cos) * 180/3.1415;
}

std::istream& operator>>(std::istream& is, Vector& p) {
    is >> p.x_ >> p.y_ >> p.z_;
    return is;
}

std::ostream& operator<<(std::ostream& os,  Vector& p) {
    os << "(" << p.x_ << ", " << p.y_ << ", " << p.z_ << ")";
    return os;
}

bool operator== (Vector& p1, Vector& p2)
{
    return (p1.getX() == p2.getX() &&
        p1.getY() == p2.getY() &&
        p1.getZ() == p2.getZ());
}

bool operator!= (Vector& p1, Vector& p2)
{
    return !(p1 == p2);
}

Vector operator+ (Vector& v1, Vector& v2)
{
    Vector v3;
    v3.x_ = v1.x_ + v2.x_;
    v3.y_ = v1.y_ + v2.y_;
    v3.z_ = v1.z_ + v2.z_;

    return v3;
}

Vector operator- (Vector& v1, Vector& v2)
{
    Vector v3;
    v3.x_ = v1.x_ - v2.x_;
    v3.y_ = v1.y_ - v2.y_;
    v3.z_ = v1.z_ - v2.z_;

    return v3;
}

Vector operator* (Vector& v1, Vector& v2)
{
    Vector v3;
    v3.x_ = v1.y_ * v2.z_ - v1.z_ * v2.y_;
    v3.y_ = v1.z_ * v2.x_ - v1.x_ * v2.z_;
    v3.z_ = v1.x_ * v2.y_ - v1.y_ * v2.x_;

    return v3;
}

Vector operator* (Vector& v1, double a)
{
    Vector v3;
    v3.x_ = v1.x_ * a;
    v3.y_ = v1.y_ * a;
    v3.z_ = v1.z_ * a;

    return v3;
}

double Vector::SkalarUm(Vector& v2)
{
    double s = x_ * v2.x_ + y_ * v2.y_ + z_ * v2.z_;
    return s;
}