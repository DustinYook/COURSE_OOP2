#include <iostream>
#include <iomanip> // setw()�� left�� �������� ��ó����
using namespace std;

int main(void)
{
	// 1) �ݺ� �Է�ó��
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "input " << (i + 1) << " : ";
		cin >> a[i];
	} cout << endl;

	// 2) �ݺ� ���ó��
	int* aPtr = a;
	for (aPtr = a; aPtr < a + 10; aPtr++) // �̷��� ó����� �˾Ƶ� ��
		cout << setw(3) << left << *aPtr;
	cout << endl;

	return 0;
}