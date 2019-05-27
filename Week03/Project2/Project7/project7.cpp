// 프로그램 설명: 재귀호출을 이용한 팩토리알의 구현
#include <iostream>
using namespace std;
int fact(int);

int main(void)
{
	int num;
	cout << "Please input an integer: ";
	cin >> num;

	int result = fact(num);
	if (result != -1)
		cout << num << "! = " << result << endl;

	return 0;
}

int fact(int input)
{
	int fac;
	if (input < 0) // Exception Handling
	{
		cerr << "Input data error" << endl; // 예외처리 방법 잘 기억!
		return -1;
	}
	if (input == 0 || input == 1) // Base case
		fac = 1;
	else
		fac = input*fact(input - 1);
	return fac;

	return 0;
}