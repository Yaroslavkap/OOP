#pragma once
#include <iostream>


class Vector {
public:
	Vector();
	Vector(std::istream& is);
	Vector(double x, double y, double z);

	double dist(Vector& other);
	double getX();
	double getY();
	double getZ();

	void setX(double a);
	void setY(double a);
	void setZ(double a);

	friend std::istream& operator>>(std::istream& is, Vector& p);
	friend std::ostream& operator<<(std::ostream& os, Vector& p);

	friend bool operator== (Vector& p1, Vector& p2);
	friend bool operator!= (Vector& p1, Vector& p2);

	friend Vector operator+ (Vector& v1, Vector& v2);
	friend Vector operator- (Vector& v1, Vector& v2);

	friend Vector operator* (Vector& v1, Vector& v2);
	friend Vector operator* (Vector& v1, double a);


	double Len();

	double Angle(Vector& v2);
	double SkalarUm(Vector& v2);

private:
	double x_;
	double y_;
	double z_;
};

Vector operator""_fn(const char* string, size_t size);