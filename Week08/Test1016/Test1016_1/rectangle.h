#pragma once
#include "shape.h"

class Rectangle: public Shape 
{
public:
	Rectangle::Rectangle(int w, int h) :Shape(w, h) {}; // Shape(w, h)�� ���� ���� // BaseŬ�����κ��� �����ڸ� ��ӹ���
	int getArea();
};