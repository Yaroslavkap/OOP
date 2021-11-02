#include <iostream>
#include"point.h"
#include"rectangle.h"
using namespace std;

Rectangle::Rectangle(Point a1, Point a2, Point a3, Point a4) {
	a = a1;
	b = a2;
	c = a3;
	d = a4;
}

Rectangle::Rectangle() {
	a.setX(0);
	a.setY(0);
	b.setX(0);
	b.setY(0);
	c.setX(0);
	c.setY(0);
	d.setX(0);
	d.setY(0);

}

double Rectangle::Area() {
	double A = a.dist(b);
	double B = b.dist(c);
	return A * B;
}

void Rectangle::Print(std::ostream& os)
{
	std::cout << "Rectangle: " << a << " " << b << " " << c << " " << d << endl;
}

size_t Rectangle::VertexesNumber()
{
	return (size_t)4;
}
Rectangle::Rectangle(std::istream& is) {

	cin >> a >> b >> c >> d;
}

std::istream& operator>>(std::istream& is, Rectangle& p) {
	is >> p.a >> p.b >> p.c >> p.d;
	return is;
}

std::ostream& operator<<(std::ostream& os,const Rectangle& p) {
	os << p.a << " " << p.b << " " << p.c << " " << p.d;
	return os;
}

bool operator== (Rectangle& p1, Rectangle& p2)
{
	return (p1.a == p2.a &&
		p1.b == p2.b && p1.c == p2.c && p1.d == p2.d);
}

bool operator!= (Rectangle& p1, Rectangle& p2)
{
	return !(p1 == p2);
}