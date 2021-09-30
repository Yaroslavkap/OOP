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