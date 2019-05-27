#include "GradeBook.h"
#include <iostream>
using namespace std;

// 1) ������
GradeBook::GradeBook(string name):maximumGrade(0) // Member Initializer�� ���
{
	setCourseName(name);
}

// 2) Setters & Getters
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25) // string Ŭ������ ����Լ� size()�� ���ڿ� ���̸� ����
		courseName = name;
	else
	{
		courseName = name.substr(0, 25); // string Ŭ������ �ɹ��Լ� substr(i,j)�� string�� i��°���� j��° �ε����� �ش��ϴ� �κ� ���ڿ��� ����
		cerr << "Name \"" << name << "\" exceeds maimum length(25)." << endl << "Limiting courseName to first 25 characters." << endl;
	}
}
string GradeBook::getCourseName() const
{
	return courseName;
}

// 3) �Է�ó��
void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;
}
void GradeBook::inputGrades()
{
	int grade[3];
	cout << "Enter three integer grades" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "input " << (i + 1) << " : ";
		cin >> grade[i];
	}
	maximumGrade = maximum(grade[0], grade[1], grade[2]);
}

// 4) ��ó��
int GradeBook::maximum(int a, int b, int c) const
{
	int max = a; // ó�� ���� ���ڸ� ���� ũ�ٰ� ����
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

// 5) ���ó��
void GradeBook::displayGradeReport() const
{
	cout << "Maximum of grades entered: " << maximumGrade << endl;
}
