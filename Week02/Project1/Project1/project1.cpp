// ���α׷� ����: 20���� ���� ¦���� ã�� �̸� ���ϴ� ���α׷�
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	unsigned int total = 0;
	for (unsigned int number = 2; number <= 20; number += 2) // �̷��� ¦���鸸 �����ϴ� ����� ����
	{
		total += number;
		cout << "total = " << setw(5) << left << total << "number = " << setw(5) << left << number << endl;
	} cout << "Sum is " << total << endl;
	return 0;
}