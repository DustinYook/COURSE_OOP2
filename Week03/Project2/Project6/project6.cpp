// 프로그램 설명: Nested call에 대한 이해
#include <iostream>
#include <iomanip>
using namespace std;
void f1(void);
void f2(void);

int main(void)
{
	cout << "now I enter main" << endl;
	f1();
	cout << "now I exit main" << endl;
	return 0;
}

void f1(void)
{
	cout << setw(20) << right << "now I enter f1" << endl;
	f2(); // Nested call
	cout << setw(20) << right << "now I exit f1" << endl;
}

void f2(void)
{
	cout << setw(30) << right << "now I enter f2" << endl;
	cout << setw(30) << right << "now I exit f2" << endl;
}