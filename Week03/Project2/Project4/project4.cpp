// ���α׷� ����: ����������ڷ����� ������ ��� �� �����Ϳ����� �� ������ ���� ȭ��ǥ�������� �̿�
#include <iostream>
using namespace std;

struct student
{
	int num;
	char name[20];
	char sex;
	int age;
};

int main(void)
{
	student st = { 1001, "Tom", 'M', 21 };
	student* stPtr = &st;
	cout << "Student ID: " << (stPtr->num) << endl;
	cout << "Name: " << (stPtr->name) << endl;
	cout << "Sex: " << (((stPtr->sex) == 'M') ? "Male" : "Female") << endl;
	cout << "Age: " << (stPtr->age) << endl;
	return 0;
}