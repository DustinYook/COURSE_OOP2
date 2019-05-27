// 12131819 육동현 _ 중간고사 (실기)
#include <iostream>
using namespace std;

class shape
{
public:
	virtual float area() = 0;
};


class triangle : public shape
{
public:
	triangle(float w, float h)
	{
		width = w;
		height = h;
	}
	virtual float area() override;
private:
	float width;
	float height;
};
float triangle::area()
{
	return (0.5) * (float)width * (float)height;
}

class rectangle : public shape
{
public:
	rectangle(float w, float h)
	{
		width = w;
		height = h;
	}
	virtual float area() override;
private:
	float width;
	float height;
};
float rectangle::area()
{
	return width*height;
}

float total(triangle& t, rectangle& r)
{
	float sum = 0.0;
	sum = t.area() + r.area();
	return sum;
}

int main(void)
{
	triangle t(4, 6);
	rectangle r(5, 7);

	cout << "Triangle area is " << t.area() << endl;
	cout << "Rectangle area is " << r.area() << endl;
	cout << "Sum of area is " << total(t, r) << endl;

	return 0;
}