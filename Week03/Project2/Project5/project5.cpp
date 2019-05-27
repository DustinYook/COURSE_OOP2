// 프로그램 설명: 문자열에서 "포인터"와 "*포인터"의 의미
#include <iostream>
using namespace std;

int main(void)
{
	char* p = "hello";
	cout << "p: " << p << endl; // p는 문자열의 시작주소부터 NULL을 만날때까지 저장된 값을 출력
	cout << "*p: " << *p << endl << endl; // *p는 문자열의 시작주소에 저장된 값만을 출력

	p++;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl << endl;

	char buffer[10] = "ABC";
	p = buffer;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl << endl;

	p = p + 2;
	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl << endl;

	return 0;
}