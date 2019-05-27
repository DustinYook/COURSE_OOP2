#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
class Student :public Person // derived class Student from base class Person (Derived class #1)
{
public:
	void input(); // transform the bass class memeber
	void print();  //change member in base class 
private:            //add new member
	char cn[8], maj[20];
};
#endif 