#pragma once
#include "shape.h"

class Rectangle: public Shape 
{
public:
	Rectangle::Rectangle(int w, int h) :Shape(w, h) {}; // Shape(w, h)의 값이 전달 // Base클래스로부터 생성자를 상속받음
	int getArea();
};