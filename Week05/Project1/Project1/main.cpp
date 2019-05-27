#include <array>
#include <iostream>
using namespace std;
#include "GradeBook.h" // GradeBook class definition
// function main begins program execution
int main(void)
{
	// array of student grades
	string courseName = "CS101 Introduction to C++ Programming!";
	GradeBook g;
	g.displayMessage();
	g.setCourseName(courseName);
	cout << g.getCourseName() << endl;
	g.outputGrades();
	cout << endl;
	cout << "Class average is " << g.getAverage() << endl;
	cout << "Lowest grade is " << g.getMinimum() << endl;
	cout << "Highest grade is " << g.getMaximum() << endl;
	g.outputBarChart();
	system("pause");
	return 0;
} // end main
