// ���α׷� ����: �� ���� ������ �Է¹ް� ���� ���� ������ �˷��ִ� ���α׷�
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(void)
{
	GradeBook myGradeBook("CS101 C++ Programming"); // ��ü���� �� �ʱ�ȭ
	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
	return 0;
}