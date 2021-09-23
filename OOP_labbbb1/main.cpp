#include <iostream>
#include"point.h"
#include"rectangle.h"
#include"rhombus.h"
#include"trapezoid.h"
using namespace std;



int main()
{

	Point a(0, 0);
	Point b(0, 4);
	Point c(4, 4);
	Point d(4, 0);
	

	Rectangle rc(a, b, c, d);
	cout << rc.Area()<< endl;
	rc.Print(std::cout);
	rc.VertexesNumber();

	Trapezoid rec(std::cin);
	rec.Print(std::cout);
	cout << rec.Area() << endl;

	return 0;

}