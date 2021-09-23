#include <iostream>
#include"point.h"
#include"rhombus.h"
using namespace std;

Rhombus::Rhombus(Point a1, Point a2, Point a3, Point a4) {
	a = a1;
	b = a2;
	c = a3;
	d = a4;
}
double Rhombus::Area() {
	double A = a.dist(c);
	double B = b.dist(d);
	return A * B / 2;
}

void Rhombus::Print(std::ostream& os)
{
	std::cout << "Rhombus: " << a << " " << b << " " << c << " " << d << endl;
}

size_t Rhombus::VertexesNumber()
{
	return (size_t)4;
}
Rhombus::Rhombus(std::istream& is) {

	cin >> a >> b >> c >> d;
}