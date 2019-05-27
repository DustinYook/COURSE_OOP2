// 프로그램 설명: 20보다 작은 짝수를 찾고 이를 더하는 프로그램
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	unsigned int total = 0;
	for (unsigned int number = 2; number <= 20; number += 2) // 이렇게 짝수들만 연산하는 방법도 있음
	{
		total += number;
		cout << "total = " << setw(5) << left << total << "number = " << setw(5) << left << number << endl;
	} cout << "Sum is " << total << endl;
	return 0;
}