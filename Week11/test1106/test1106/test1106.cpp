// 프로그램 설명: 출력형식 제어
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	// showpoint
	double num = 9.000000;
	cout << num << endl;
	cout << showpoint; // 유효숫자가 없는 경우에도 강제적으로 소숫점 아래자릿수 표시
	cout << num << endl;

	// right, left, internal, showpos
	int num1 = 1234;
	cout << setw(10) << num1 << endl; // 초깃값: right
	cout << setw(10) << right << num1 << endl; // 우정렬
	cout << setw(10) << left << num1 << endl; // 좌정렬
	cout << setw(10) << internal << showpos << num1 << endl; // 중간에 띄어 씀
	cout << noshowpos; // 명시적 '+' 출력 해제

	// fill(), setfill()
	int num2 = 10000;
	cout << setw(10) << right << num2 << endl;
	cout.fill('_'); // fill(): 공백문자 대신 '_' 문자로 채워넣음
	cout << setw(10) << right << num2 << endl;
	cout << left;
	cout << setw(10) << left << num2 << endl;
	cout << setw(10) << setfill('$') << left << num2 << endl; // setfill(): 공백문자 대신 '$' 문자로 채워넣음
	cout << setfill(' ');

	// showbase, uppercase
	int num3 = 100;
	cout << showbase; // 접두사 출력
	cout << setw(10) << internal << hex << num3 << endl; // 초깃값: 소문자 (C언어: %x)
	cout << setw(10) << internal << oct << num3 << endl;
	cout << setw(10) << internal << hex << uppercase << num3 << endl; // 대문자로 출력 (C언어: %X)
	cout << setw(10) << internal << oct << uppercase << num3 << endl;
	cout << nouppercase; // 대문자 설정 해제

	// scientific, fixed
	double num4 = 3.1415926248;
	cout << num4 << endl; // 초깃값: 소숫점 관계없이 앞에서부터 6글자 표현
	cout << scientific << num4 << endl; // 과학적 표기법 사용
	cout << fixed << num4 << endl; // 초깃값: fixed로 인해 소숫점 아래 6글자 표현
	cout << setprecision(7) << num4 << endl; // 정밀도를 소숫점아래 7글자로 표현가능

	system("pause");
	return 0;
}