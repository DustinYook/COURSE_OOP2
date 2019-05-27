#include "teacher.h"

void Teacher::input()  // transform the bass class meber
{
	Person::input(); //call same memeber function from base class
	cout << "Position:";
	cin >> pos;
	cout << "Department:";
	cin >> dep;
}
void Teacher::print()
{
	Person::print();
	cout << "Position:" << pos << endl;
	cout << "Department:" << dep << endl;
}