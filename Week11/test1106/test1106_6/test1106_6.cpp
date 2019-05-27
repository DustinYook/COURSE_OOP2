#include <iostream>
#include <iomanip>
using namespace std;

class Complex
{
	friend ostream& operator<<(ostream&, Complex&);
public:
	Complex::Complex() {}
	Complex::Complex(double r = 0.0, double i = 0.0);
	Complex operator+(Complex&);
	Complex operator-(Complex&);
private:
	double real;
	double imag;
};

int main(void)
{
	Complex c1(1.0, 1.0);
	Complex c2(2.0, 2.0);
	cout << c1 + c2 << endl;
	cout << c1 - c2 << endl;
	system("pause");
	return 0;
}

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex Complex::operator+(Complex& c)
{
	return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(Complex& c)
{
	return Complex(real - c.real, imag - c.imag);
}

ostream& operator<<(ostream& output, Complex& c)
{
	cout << showpoint << fixed << setprecision(1);
	output << "(" << c.real << "," << c.imag << ")";
	return output;
}