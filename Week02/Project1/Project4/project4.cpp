// ���α׷� ����: ������ ���α׷� �ۼ��� ���� �������� ����
#include <iostream>
using namespace std;

int main(void)
{
	int a = 7;
	int* aPtr = &a; // aPtr�� a�� �ּҸ� �����ϴ� �����͓м�

	cout << "The address of a is " << &a << endl; // �ּҿ�����(&)�� ���� a�� �ּҸ� ���
	cout << "The value of aPtr is " << aPtr << endl; // aPtr�� a�� �ּҸ� �����ϰ� ����

	cout << "The value of a is " << a << endl; // �Ϲݺ��� a�� ���尪�� ���
	cout << "the value of *aPtr is " << *aPtr << endl; 
	// ����Ʈ�����ڸ� ���� �����ͺ����� ���������ϰ� �ִ� �ּ�(&a)�� ����� ���� ���
 
	return 0;
}