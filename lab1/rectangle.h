#include <iostream>
#include"point.h"
#include"figure.h"
class Rectangle : Figure {
public:
	double Area();
	void Print(std::ostream& os);
	size_t VertexesNumber();
	Rectangle(Point a1, Point a2, Point a3, Point a4);
	Rectangle(std::istream& is);


};