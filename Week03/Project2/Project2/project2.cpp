// ���α׷� ����: �� ������ �Է¹ް� ũ�⸦ ���ϴ� ���α׷�
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int a, b, temp;
	int* aPtr = &a; // aPtr�� a�� ��������
	int* bPtr = &b; // bPtr�� b�� ��������

	// �Է�ó��
	cout << "Please input 2 integers you want to compare with: ";
	cin >> a >> b;

	if (*aPtr < *bPtr) // a�� b�� swap����
	{
		temp = *aPtr;
		*aPtr = *bPtr;
		*bPtr = temp;
	}
	cout << *aPtr << " is bigger than " << *bPtr << endl;
	return 0;
}