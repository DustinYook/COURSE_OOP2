#include "student.h"
#include "teacher.h"

int main(void)
{
	Student s1;
	Teacher t1;

	cout << "Please input the data for the student s1" << endl;
	s1.input();
	cout << endl;

	cout << "Please input the data for the teacher t1" << endl;
	t1.input();
	cout << endl;

	cout << "The data of the student s1 is as follows" << endl;
	s1.print();
	cout << endl;

	cout << "The data of the teacher t1 is as follows" << endl;
	t1.print();
	cout << endl;

	return 0;
}