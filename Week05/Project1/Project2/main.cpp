#include <array>
#include <iostream>
using namespace std;
#include "GradeBook.h" 

int main(void)
{
	const array< int, GradeBook::students > grades = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
	string courseName = "CS101 Introduction to C++ Programming!";
	GradeBook g(courseName,grades);
	g.displayMessage();
	g.processGrades();
	system("pause");
	return 0;
}