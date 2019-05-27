#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
class Teacher :public Person  // derived class Teacher from base class Person (Derived class #2)
{
public:
	void input();  // transform the bass class meber
	void print();
private:        //add new member
	char pos[20], dep[20];
};
#endif