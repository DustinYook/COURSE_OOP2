#include <array>
#include <string>
using namespace std;
// GradeBook class definition
class GradeBook
{
public:
	//contants  --number of students who took the test
	static const size_t students = 10; // number of students
	GradeBook() {};
	// GradeBook(const std::string &, const std::array< int, students > &);
	void setCourseName(const std::string &); // set the course name
	string getCourseName() const; // retrieve the course name
	void displayMessage() const; // display a welcome message
	// void processGrades() const; // perform operations on the grade data
	int getMinimum() const; // find the minimum grade in the grade book
	int getMaximum() const; // find the maximum grade in the grade book
	double getAverage() const;
	void outputBarChart() const; // output bar chart of grade distribution
	void outputGrades() const; // output the contents of the grades array
private:
	std::string courseName; // course name for this grade book
	const array< int, GradeBook::students > grades = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
};  // end class GradeBook
