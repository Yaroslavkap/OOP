#include <iostream>
#include"point.h"
#include"trapezoid.h"
#include<math.h>
using namespace std;

Trapezoid::Trapezoid(Point a1, Point a2, Point a3, Point a4) {
	a = a1;
	b = a2;
	c = a3;
	d = a4;
}
double Trapezoid::Area() {
	
	double la = a.dist(d);
	double lb = b.dist(c);
	double lc = c.dist(d);
	double ld = a.dist(b);
	if (la > lb) {
		double t = la;
		la = lb;
		lb = t;
	}
	double numenator = (lb - la) * (lb - la) + lc * lc - ld * ld;
	double denumenator = 2 * (lb - la);
	if (denumenator == 0) {
		return (la * lc);
	}
	double h = sqrt(lc * lc - ((numenator * numenator) / (denumenator * denumenator)));
	return ((la + lb) / 2 * h);

	
}

void Trapezoid::Print(std::ostream& os)
{
	std::cout << "Trapezoid: " << a << " " << b << " " << c << " " << d << endl;
}

size_t Trapezoid::VertexesNumber()
{
	return (size_t)4;
}
Trapezoid::Trapezoid(std::istream& is) {

	cin >> a >> b >> c >> d;
}