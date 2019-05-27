#include "GradeBook.h"
#include <iostream>
using namespace std;

// 1) 생성자
GradeBook::GradeBook(string name):maximumGrade(0) // Member Initializer를 사용
{
	setCourseName(name);
}

// 2) Setters & Getters
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25) // string 클래스의 멤버함수 size()는 문자열 길이를 리턴
		courseName = name;
	else
	{
		courseName = name.substr(0, 25); // string 클래스의 맴버함수 substr(i,j)는 string의 i번째부터 j번째 인덱스에 해당하는 부분 문자열을 리턴
		cerr << "Name \"" << name << "\" exceeds maimum length(25)." << endl << "Limiting courseName to first 25 characters." << endl;
	}
}
string GradeBook::getCourseName() const
{
	return courseName;
}

// 3) 입력처리
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

// 4) 비교처리
int GradeBook::maximum(int a, int b, int c) const
{
	int max = a; // 처음 받은 인자를 가장 크다고 가정
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

// 5) 출력처리
void GradeBook::displayGradeReport() const
{
	cout << "Maximum of grades entered: " << maximumGrade << endl;
}
