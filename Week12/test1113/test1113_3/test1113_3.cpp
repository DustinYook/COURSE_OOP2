#include <iostream>
using namespace std;

class MyInt
{
public:
	int Num;

	operator MyFloat(void);
};

class MyFloat
{
public:
	float Real;
};

int main(void)
{
	MyInt Num = { 5 };
	MyFloat Real = { 0.f };

	Real = static_cast<MyFloat>(Num);
	cout << Real.Real << endl;

	return 0;
}

MyInt::operator MyFloat(void)
{
	MyFloat Float = { static_cast<float>(Num) };
	return Float;
}