// GradeBook.h: 클래스 정의부
#include <array>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class GradeBook
{
public:
	static const size_t students = 10;
	static const size_t tests = 3;
	// 멤버함수
	GradeBook(const string &, array<array<int, tests>, students> &); // 생성자함수
	string getCourseName() const; // Getters
	void setCourseName(const string &); // Setters 
	void displayMessage() const; 
	void processGrades() const;
	int getMinimum() const; 
	int getMaximum() const;
	double getAverage(const array<int, tests> &) const;
	void outputBarChart() const; 
	void outputGrades() const;
private:
	string courseName;
	array<array<int, GradeBook::tests>, GradeBook::students> grades;
}; 