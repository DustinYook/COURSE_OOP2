// point.h: the definition of class Point
#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Point
{
	friend ostream& operator<<(ostream&, Point&);
	friend istream& operator>>(istream&, Point&);
public:
	Point::Point() {}
	Point::Point(int, int);
	Point operator+(Point&);
	Point operator-(Point&);
private:
	int xCoordinate;
	int yCoordinate;
};