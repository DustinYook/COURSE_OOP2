#include <string>
using namespace std;

class GradeBook
{
public: 
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage() const;
	void inputGrades();
	int maximum(int, int, int) const;
	void displayGradeReport() const;
	
private:
	string courseName;
	int maximumGrade;
};