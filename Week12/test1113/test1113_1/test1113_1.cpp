#include <iostream>
using namespace std;

int main(void)
{
	int num = 5;
	float real = 0.f;

	real = static_cast<float>(num); // ����� ����ȯ ���� (�Լ�ȣ��)
	cout << real << endl;

	return 0;
}