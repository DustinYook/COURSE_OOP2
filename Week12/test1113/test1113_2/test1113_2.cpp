// 오류나는 프로그램
#include <iostream>
using namespace std;

class MyInt
{
public:
	int num;
};

class MyFloat
{
public:
	float real;
};

int main(void)
{
	MyInt num = { 5 };
	MyFloat real = { 0.f };

	real = static_cast<MyFloat>(num);
	cout << real.real << endl;
}

// reinterpret_cast는 주로 포인터와 일반 자료, 포인터와 포인터 끼리의 형 변환에 사용
// "이 자료를 다음 자료형으로 인식하라!"라는 메시지를 컴파일러에게 보냄
// 하지만 일반 자료형 두 개의 형 변환은 성립되지 않음
// 함수를 호출하는 것이 아니기 때문.
// static_cast는 함수를 호출하며, 변환된 결과를 임시 변수로 반환
