// ���α׷� ����: �л� �����͸� ��ȸ�ϴ� ���α׷�
#include "student.h"
#include <iostream>
using namespace std;

int main(void)
{
	int i, st_num;

	cout << "Please input the student ID: ";
	cin >> st_num;

	for (i = 0; i < 4; i++) // �л��� ID�� ã�� ó�� (�˾Ƶα�!)
		if (st_num == st[i].num) // �Է��� ID�� �л��� ������������ ���Ͽ� ã��
			break;
	if (i < 4) // �����ͺ��̽����� ã�� ���
	{
		cout << "The student " << st_num << " information as follows." << endl;
		cout << "Name: " << st[i].name << endl;
		cout << "Sex: " << ((st[i].sex == 'M') ? "Male" : "Female") << endl;
		cout << "Birthday: " << st[i].birthday.year << "." << st[i].birthday.month << "." << st[i].birthday.day << endl;
	}
	else // �����ͺ��̽����� ã�� ���� ���
		cout << "ID " << st_num << " student is not on the list." << endl;
	return 0;
}