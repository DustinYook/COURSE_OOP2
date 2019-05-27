// 프로그램 설명: 세 명의 성적을 입력받고 가장 높은 점수를 알려주는 프로그램
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(void)
{
	GradeBook myGradeBook("CS101 C++ Programming"); // 객체생성 및 초기화
	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
	return 0;
}