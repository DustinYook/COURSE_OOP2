// main.cpp: main() 실행부분
#include "GradeBook.h" 

int main(void)
{
	string courseName = "CS101 Introduction to C++ Programming";
	array<array<int, GradeBook::tests>, GradeBook::students> grades =
	{
		87, 96, 70,
		68, 87, 90,
		94, 100, 90,
		100, 81, 82,
		83, 65, 85,
		78, 87, 65,
		85, 75, 83,
		91, 94, 100,
		76, 72, 84,
		87, 93, 73
	}; // 2D array
	GradeBook g(courseName, grades);
	g.displayMessage();
	g.processGrades();

	return 0;
}