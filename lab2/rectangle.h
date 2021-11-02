#pragma once
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
	Rectangle();
	friend std::istream& operator>>(std::istream& is, Rectangle& p);
	friend std::ostream& operator<<(std::ostream& os,const Rectangle& p);

	friend bool operator== (Rectangle& r1, Rectangle& r2);
	friend bool operator!= (Rectangle& r1, Rectangle& r2);

private:

};
