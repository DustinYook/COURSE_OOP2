// ���α׷� ����: rethrow�� ���� ����
#include <iostream>
#include <stdexcept> // ǥ�ؿ���Ŭ������ �̿��ϱ� ���� ��ó����
using namespace std;
void throwException();

int main(void)
{
	try
	{
		cout << "main���� ���ܸ� �߻���Ű�� �Լ��� ȣ���մϴ�." << endl; // (1)
		throwException(); // ���ܸ� �߻���Ű�� �Լ�ȣ�� (2)
		cout << "��µ��� ����[1]" << endl; // ���ܰ� �߻��ϴ� ��� �� ������ ������� ���� -> �ٷ� catch������� �̵�
	}
	catch(exception& ex1)
	{
		cout << "main�Լ����� ����ó���� �����մϴ�." << endl; // (8)
		cout << ex1.what() << endl; // (9)
		cout << "main�Լ����� ����ó���� �����մϴ�." << endl; // (10)
	}
	cout << "���α׷��� ���������� �����մϴ�." << endl; // (11)
	system("pause");
	return 0;
}

void throwException()
{
	try
	{
		cout << "\tthrowException�Լ����� ���������� ���ܸ� �߻���ŵ�ϴ�." << endl; // (3)
		throw exception(); // ���������� ���ܸ� �߻���Ŵ (4)
		cout << "��µ��� ����[2]" << endl;
	}
	catch (exception& ex2) // throwException�Լ����� ����ó��
	{
		cout << "\tthrowException�Լ����� ���ܸ� ó���մϴ�." << endl; // (5)
		cout << '\t' << ex2.what() << endl; // (6)
		cout << "\tthrowEception�Լ����� �ٽ� throw�� �մϴ�." << endl; // (7)
		throw;
	} cout << "��µ��� ����[3]" << endl;
}