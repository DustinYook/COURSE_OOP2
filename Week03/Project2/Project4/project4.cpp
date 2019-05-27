// 프로그램 설명: 사용자정의자료형의 포인터 사용 및 포인터에서의 값 접근을 위한 화살표연산자의 이용
#include <iostream>
using namespace std;

struct student
{
	int num;
	char name[20];
	char sex;
	int age;
};

int main(void)
{
	student st = { 1001, "Tom", 'M', 21 };
	student* stPtr = &st;
	cout << "Student ID: " << (stPtr->num) << endl;
	cout << "Name: " << (stPtr->name) << endl;
	cout << "Sex: " << (((stPtr->sex) == 'M') ? "Male" : "Female") << endl;
	cout << "Age: " << (stPtr->age) << endl;
	return 0;
}