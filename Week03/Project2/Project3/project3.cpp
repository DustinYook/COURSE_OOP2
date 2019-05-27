// 프로그램 설명: 학생 데이터를 조회하는 프로그램
#include "student.h"
#include <iostream>
using namespace std;

int main(void)
{
	int i, st_num;

	cout << "Please input the student ID: ";
	cin >> st_num;

	for (i = 0; i < 4; i++) // 학생의 ID를 찾는 처리 (알아두기!)
		if (st_num == st[i].num) // 입력한 ID와 학생의 데이터정보를 비교하여 찾음
			break;
	if (i < 4) // 데이터베이스에서 찾은 경우
	{
		cout << "The student " << st_num << " information as follows." << endl;
		cout << "Name: " << st[i].name << endl;
		cout << "Sex: " << ((st[i].sex == 'M') ? "Male" : "Female") << endl;
		cout << "Birthday: " << st[i].birthday.year << "." << st[i].birthday.month << "." << st[i].birthday.day << endl;
	}
	else // 데이터베이스에서 찾지 못한 경우
		cout << "ID " << st_num << " student is not on the list." << endl;
	return 0;
}