#pragma once
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int, int);
	void setWidth(int);
	void setHeight(int);
protected:
	int width;
	int height;
};