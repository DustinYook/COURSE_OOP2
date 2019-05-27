// gradeBook.cpp: 클래스 구현부
#include "GradeBook.h"

GradeBook::GradeBook(const string &name,array< array< int, tests >, students > &gradesArray): courseName(name), grades(gradesArray) { } // 생성자함수
string GradeBook::getCourseName() const // Getters
{ 
	return courseName; 
}
void GradeBook::setCourseName(const string &name) // Setters
{
	courseName = name; 
} 
void GradeBook::displayMessage() const 
{ 
	cout << "Welcome to the grade book for " << getCourseName() << "!" << endl; 
}

void GradeBook::processGrades() const
{
	outputGrades();
	cout << endl << "Lowest grade in the grade book is " << getMinimum() << endl;
	cout << "Highest grade in the grade book is " << getMaximum() << endl;
	outputBarChart();
}

int GradeBook::getMinimum() const
{
	int lowGrade = 100;
	for (auto const &student : grades)
		for (auto const &grade : student)
			if (grade < lowGrade)
				lowGrade = grade;
	return lowGrade;
}

int GradeBook::getMaximum() const
{
	int highGrade = 0; 
	for (auto const &student : grades)
		for (auto const &grade : student)
			if (grade > highGrade)
				highGrade = grade;
	return highGrade;
}

double GradeBook::getAverage(const array<int, tests> &setOfGrades) const
{
	int total = 0;
		for (int grade : setOfGrades)
			total += grade;
		return static_cast< double >(total) / setOfGrades.size();
} 

void GradeBook::outputBarChart() const
{
	cout << endl << "Overall grade distribution:" << endl;
	const size_t frequencySize = 11;
	array<unsigned int, frequencySize> frequency = {}; 
	for (auto const & student : grades)
		for (auto const &test : student)
			++frequency[test / 10];
	for (size_t count = 0; count < frequencySize; ++count)
	{
		if (0 == count)
			cout << "0-9: ";
		else if (10 == count)
			cout << "100:   ";
		else
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		for (unsigned int stars = 0; stars < frequency[count]; ++stars)
			cout << '*';
		cout << endl;
	}
}

void GradeBook::outputGrades() const
{
	cout << endl << "The grades are: " << endl << endl;
	for (size_t student = 0; student < grades.size(); ++student)
	{
		cout << "Student " << setw(2) << student + 1;
		for (size_t test = 0; test < grades[student].size(); ++test)
			cout << setw(8) << grades[student][test];
		double average = getAverage(grades[student]);
		cout << setw(9) << setprecision(2) << fixed << average << endl;
	}
}