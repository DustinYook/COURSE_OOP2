// 프로그램 설명: 포인터의 간접참조 개념의 이해
#include <iostream>
using namespace std;

int main(void)
{
	int i = 14;
	int* iPtr = &i;
	
	cout << "The value of i is " << i << endl;
	cout << "The address of i is " << &i << endl;
	cout << "The value of iPtr is " << iPtr << endl;
	cout << "The value of *iPtr is " << *iPtr << endl;
	cout << "The address of iPtr is " << &iPtr << endl << endl;

	*iPtr = 38; 
	cout << "The value of i is " << i << endl;
	cout << "The address of i is " << &i << endl;
	cout << "The value of iPtr is " << iPtr << endl;
	cout << "The value of *iPtr is " << *iPtr << endl;
	cout << "The address of iPtr is " << &iPtr << endl << endl;

	return 0;
}