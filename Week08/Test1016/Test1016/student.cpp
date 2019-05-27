#include "student.h"

void Student::input() // transform the bass class memeber
{
	Person::input(); //call same memeber function from base class
	cout << "Class Number:";
	cin >> cn;
	cout << "Major:";
	cin >> maj;
}
void Student::print()  //change member in base class 
{
	Person::print(); // call same memeber function from base class
	cout << "Class Number:" << cn << endl;
	cout << "Major:" << maj << endl;
}
