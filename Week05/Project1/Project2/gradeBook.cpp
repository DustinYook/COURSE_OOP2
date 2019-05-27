#include <iostream>
#include <iomanip> 
using namespace std;
#include "GradeBook.h" // GradeBook class definition

GradeBook::GradeBook(const string &name,const array< int, students > &gradesArray): courseName(name), grades(gradesArray) { }  

string GradeBook::getCourseName() const
{
	return courseName;
} 

void GradeBook::setCourseName(const string &name)
{
	courseName = name; // store the course name
} // end function setCourseName

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for" << endl << getCourseName() << "!" << endl ;
} 

void GradeBook::processGrades() const
{
	outputGrades();  // output grades array
	cout << setprecision(2) << fixed; // call function getAverage to calculate the average grade
	cout << endl << "Class averages is " << getAverage() << endl;
	cout << "Lowest grade is " << getMinimum() << endl << "Highest Grade is " << getMaximum() << endl;   // call functions getMinimum and getMaximum
	outputBarChart(); // call function outputBarChart to print grade distribution chart
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
	for (int grade : grades) // advanced for loop for array
		total += grade;
	// return average of grades
	return static_cast< double >(total) / grades.size();
}  // end function getAverage

void GradeBook::outputBarChart() const
{
	cout << "\nGrade distribution:" << endl;
	const size_t frequencySize = 11;
	array< unsigned int, frequencySize > frequency = {};
	for (int grade : grades)
		++frequency[grade / 10];
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
	} 
} 

void GradeBook::outputGrades() const
{
	cout << "\nThe grades are:\n\n";
	for (size_t student = 0; student < grades.size(); ++student)
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3)
		<< grades[student] << endl;
}