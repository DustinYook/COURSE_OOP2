#include "shape.h"

Shape::Shape(int w, int h) // Base Ŭ������ ������
{
	setWidth(w);
	setHeight(h);
}

void Shape::setWidth(int w)
{
	width = w;
}

void Shape::setHeight(int h)
{
	height = h;
}