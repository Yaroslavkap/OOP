#include "vector.h"
#include <iostream>

using namespace std;

int main() {

	Vector v1(1, 2, 3);
	cout << v1 <<   "vector 1" << endl;

	Vector v2(4, 5, 6);
	cout << v2 << "  vector 2" << endl;

	Vector v3;
	v3 = v1 + v2;
	cout << v3 <<"  +" << endl;

	v3 = v2 - v1;
	cout << v3 <<"  2 - 1" << endl;

	Vector v4;
	v4 = v1 * v2;
	cout << v4 <<"  vector*" << endl;

	v4 = v1 * 2;
	cout << v4 << "  vector1 * 2" << endl;

	

	double l1 = v1.Len();
	cout << l1 << "  lengh vector1" << endl;

	double angl = v1.Angle(v2);
	cout << angl << "  angle between 1 and 2" << endl;

	double s = v1.SkalarUm(v2);
	cout << s << "  Skalar*" << endl;

	return 0;
}