#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;
#include "GradeBook.h" // GradeBook class definition

/* // constructor initializes courseName and grades array // 나는 이 함수 안씀
GradeBook::GradeBook(const string &name,const array< int, students > &gradesArray): courseName(name), grades(gradesArray)
{
} // end GradeBook constructor */

// function to set the course name
void GradeBook::setCourseName(const string &name)
{
	courseName = name; // store the course name
} // end function setCourseName
  
// function to retrieve the course name
string GradeBook::getCourseName() const
{
	return courseName;
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for" << endl;
	// this statement calls getCourseName to get the
	// name of the course this GradeBook represents
} // end function displayMessage

/*  // perform various operations on the data // 나는 이 함수 안씀
void GradeBook::processGrades() const
{
	// output grades array
	// call function getAverage to calculate the average grade
	// call functions getMinimum and getMaximum
	// call function outputBarChart to print grade distribution chart
} // end function processGrades */

int GradeBook::getMinimum() const
{
	int lowGrade = 100; // assume lowest grade is 100
	// loop through grades array
	for (int grade : grades)
	{
		// if current grade lower than lowGrade, assign it to lowGrade
		if (grade < lowGrade)
			lowGrade = grade; // new lowest grade
	} // end for
	return lowGrade; // return lowest grade
} // end function getMinimum

int GradeBook::getMaximum() const
{
	int highGrade = 0; // assume highest grade is 0
	for (int grade : grades)
	{
		// if current grade lower than lowGrade, assign it to lowGrade
		if (grade > highGrade)
			highGrade = grade; // new lowest grade
	} // end for
	return highGrade; // return lowest grade
}

double GradeBook::getAverage() const
{
	int total = 0; // initialize total
	// sum grades in array
	for (int grade : grades)
	total += grade;
	// return average of grades
	return static_cast< double >(total) / grades.size();
}  // end function getAverage

void GradeBook::outputBarChart() const
{
	cout << "\nGrade distribution:" << endl;

	// stores frequency of grades in each range of 10 grades
	const size_t frequencySize = 11;
	array< unsigned int, frequencySize > frequency = {}; // init to 0s

	// for each grade, increment the appropriate frequency
	for (int grade : grades)
		++frequency[grade / 10];

	// for each grade frequency, print bar in chart
	for (size_t count = 0; count < frequencySize; ++count)
	{
		// output bar labels ("0-9:", ..., "90-99:", "100:" )
		if (0 == count)
			cout << " 0-9 : ";
		else if (10 == count)
			cout << " 100 : ";
		else
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		// print bar of asterisks
		for (unsigned int stars = 0; stars < frequency[count]; ++stars)
			cout << '*';
		cout << endl; // start a new line of output
	} // end outer for
} // end function outputBarChart

void GradeBook::outputGrades() const
{
	cout << "\nThe grades are:\n\n";
	// output each student's grade
	for (size_t student = 0; student < grades.size(); ++student)
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3)
		<< grades[student] << endl;
}