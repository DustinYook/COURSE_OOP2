// 프로그램 설명: runtime_error에 대한 예외처리
#include <iostream>
#include <stdexcept> // 표준예외클래스 사용을 위한 전처리기
using namespace std;

class RunTimeErr: public runtime_error // runtime_error로 부터 상속
{
public:
	RunTimeErr(): runtime_error("Runtime Error!") {} // 부모의 생성자함수를 그대로 이용
};

double quotient(int a, int b)
{
	if (b == 0) // 나누는 수가 0인 경우 예외를 발생시킴
		throw RunTimeErr(); // catch문으로 예외 throw
	return static_cast<double>(a) / b;
}

int main(void)
{
	cout << "두 정수를 입력해주십시오: ";
	int a, b;
	while (cin >> a >> b) // EOF가 입력될 때까지 입력처리 반복
	{
		try // 예외가 발생할 여지가 있는 블럭
		{
			double result = quotient(a, b); // 예외가 발생하는 라인
			cout << a << "를 " << b << "로 나누면 "  << result << "입니다." << endl;
		}
		catch (RunTimeErr& r) // RunTimeErr를 받아서 처리
		{
			cerr << r.what() << endl;
		} 
		cout << endl << "두 정수를 입력해주십시오: ";
	} 
	return 0;
}