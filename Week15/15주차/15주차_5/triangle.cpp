#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

bool decide(int a, int b, int c)
{
	bool expr1 = (a < b + c);
	bool expr2 = (b < a + c);
	bool expr3 = (c < a + b);
	if (expr1 && expr2 && expr3 && (a || b || c))
		return true;
	else
		return false;
}

int main(void)
{
	int a, b, c;
	while (true)
	{
		cout << "input the three sides of triangle: ";
		try
		{
			cin >> a >> b >> c;
			while (a * b * c != 0)
			{
				cin >> a >> b >> c;
				if (decide(a, b, c))
				{
					double s = static_cast<double>(a + b + c) / 2.0;
					double area = sqrt(s*(s - a)*(s - b)*(s - c));
					cout << "total area of the triangle = " << area << endl;
				}
				else
					throw exception("input error!");
			}
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
		}
	}

	system("pause");
	return 0;
}