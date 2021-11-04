#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
	Point();
	Point(std::istream& is);
	Point(double x, double y);

	double dist(Point& t);
	double getX();
	double getY();
	void setX(double a);
	void setY(double a);

	friend std::istream& operator>>(std::istream& is, Point& p);
	friend std::ostream& operator<<(std::ostream& os, const Point& p);

	friend bool operator== (Point& p1, Point& p2);
	friend bool operator!= (Point& p1, Point& p2);

private:
	double x_;
	double y_;
};

#endif
