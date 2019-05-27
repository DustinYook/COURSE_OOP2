// This program is written by YOOK DONGHYUN (12131819)
#include <iostream>
using namespace std;

class Time;
class Date // the definition of class Date
{
public:
	Date(int y, int m, int d) :year(y), month(m), day(d)
	{
	}
	void showDateTime(Time t);
private:
	int year, month, day;
};

class Time // the definition of class Time
{
public:
	Time(int h, int m, int s) : hour(h), minute(m), second(s)
	{
	}
private:
	int hour, minute, second;
	friend class Date; // declare Date is friend of Time
};

void Date::showDateTime(Time t)
{
	cout << "now is " << year << ".";

	if (month < 10)
		cout << "0";
	cout << month << ".";

	if (day < 10)
		cout << "0";
	cout << day << " ";

	if (t.hour < 10)
		cout << "0";
	cout << t.hour << ":";

	if (t.minute < 10)
		cout << "0";
	cout << t.minute << ":";

	if (t.second < 10)
		cout << "0";
	cout << t.second << endl;
}

int main(void)
{
	Date d(2017, 9, 18);
	Time t(17, 5, 20);
	d.showDateTime(t); // the member function of class Date, which is showDatetime(), can access to the member variable in class Time
	system("pause");
	return 0;
}