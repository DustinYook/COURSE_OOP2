#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;
class Person  //define class Person (Base Class)
{
public:
	void input(); //define member function input to get data
	void print();  //define member function print to show info.
private:
	char name[10], gender[5], sn[15];
};
#endif