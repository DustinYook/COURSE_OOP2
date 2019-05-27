// 프로그램 설명: 간단한 프로그램 작성을 통한 포인터의 이해
#include <iostream>
using namespace std;

int main(void)
{
	int a = 7;
	int* aPtr = &a; // aPtr은 a의 주소를 저장하는 포인터볂수

	cout << "The address of a is " << &a << endl; // 주소연산자(&)를 통해 a의 주소를 출력
	cout << "The value of aPtr is " << aPtr << endl; // aPtr은 a의 주소를 저장하고 있음

	cout << "The value of a is " << a << endl; // 일반변수 a의 저장값을 출력
	cout << "the value of *aPtr is " << *aPtr << endl; 
	// 포인트연산자를 통해 포인터변수가 간접참조하고 있는 주소(&a)에 저장된 값을 출력
 
	return 0;
}