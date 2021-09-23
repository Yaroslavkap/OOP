#include <iostream>
#include"point.h"
#include"figure.h"
class Trapezoid {
public:
	double Area();
	void Print(std::ostream& os);
	size_t VertexesNumber();
	Trapezoid(Point a1, Point a2, Point a3, Point a4);
	Trapezoid(std::istream& is);

private:
	Point a;
	Point b;
	Point c;
	Point d;
};
