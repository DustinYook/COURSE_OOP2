#include "rectangle.h"

int main(void)
{
	Rectangle r(7,5); // 생성자에 (7,5)전달 // 호출순서: 부모생성자 -> 자식생성자 -> 자식소멸자 -> 부모소멸자
	cout << r.getArea() << endl;
	r.setWidth(9); // width를 9로 세팅 // 부모클래스의 함수를 호출
	r.setHeight(11); // height를 11로 세팅 // 부모클래스의 함수를 호출
	cout << r.getArea() << endl;
	return 0;
}