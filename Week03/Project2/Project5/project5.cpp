// ���α׷� ����: ���ڿ����� "������"�� "*������"�� �ǹ�
#include <iostream>
using namespace std;

int main(void)
{
	char* p = "hello";
	cout << "p: " << p << endl; // p�� ���ڿ��� �����ּҺ��� NULL�� ���������� ����� ���� ���
	cout << "*p: " << *p << endl << endl; // *p�� ���ڿ��� �����ּҿ� ����� ������ ���

	p++;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl << endl;

	char buffer[10] = "ABC";
	p = buffer;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl << endl;

	p = p + 2;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl << endl;

	return 0;
}