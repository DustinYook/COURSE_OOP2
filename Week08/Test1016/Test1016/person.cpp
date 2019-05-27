#include "person.h"

void Person::input() //define member function input to get data
{
	cout << "Name :";
	cin >> name;
	cout << "Gender:";
	cin >> gender;
	cout << "Serial number:";
	cin >> sn;
}
void Person::print()  //define member function print to show info.
{
	cout << "Serial number:" << sn << endl;
	cout << "Name:" << name << endl;
	cout << "Gender:" << gender << endl;
}