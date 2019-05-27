// 프로그램 설명: rethrow에 대한 예제
#include <iostream>
#include <stdexcept> // 표준예외클래스를 이용하기 위한 전처리기
using namespace std;
void throwException();

int main(void)
{
	try
	{
		cout << "main에서 예외를 발생시키는 함수를 호출합니다." << endl; // (1)
		throwException(); // 예외를 발생시키는 함수호출 (2)
		cout << "출력되지 않음[1]" << endl; // 예외가 발생하는 경우 이 문장은 실행되지 않음 -> 바로 catch블록으로 이동
	}
	catch(exception& ex1)
	{
		cout << "main함수에서 예외처리를 수행합니다." << endl; // (8)
		cout << ex1.what() << endl; // (9)
		cout << "main함수에서 예외처리를 종료합니다." << endl; // (10)
	}
	cout << "프로그램을 정상적으로 종료합니다." << endl; // (11)
	system("pause");
	return 0;
}

void throwException()
{
	try
	{
		cout << "\tthrowException함수에서 인위적으로 예외를 발생시킵니다." << endl; // (3)
		throw exception(); // 인위적으로 예외를 발생시킴 (4)
		cout << "출력되지 않음[2]" << endl;
	}
	catch (exception& ex2) // throwException함수에서 예외처리
	{
		cout << "\tthrowException함수에서 예외를 처리합니다." << endl; // (5)
		cout << '\t' << ex2.what() << endl; // (6)
		cout << "\tthrowEception함수에서 다시 throw를 합니다." << endl; // (7)
		throw;
	} cout << "출력되지 않음[3]" << endl;
}