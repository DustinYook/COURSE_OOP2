// 프로그램 설명: 표시형식 제어 (C언어에서의 place holder의 C++에서의 구현)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	// dec, oct, hex를 이용한 표시형식 제어
	int num = 20;
	cout << dec << num << endl; // 표시형식을 10진법으로 설정 (초깃값)
	cout << oct << num << endl; // 표시형식을 8진법으로 설정
	cout << hex << num << endl; // 표시형식을 16진법으로 설정
	cout << setbase(10) << num << endl; // setbase()는 뒤의 숫자를 해당 형식으로 고정 (sticky)
	cout << num << endl << endl;

	// precision과 setprecision의 구분
	double root2 = sqrt(2.0);
	cout << fixed; // fixed 함수는 소숫점 아래 몇 자리까지 표시할지 고정시켜줌
	for (int place = 0; place <= 9; place++)  // precision()의 사용
	{
		cout.precision(place); // 도트연산자를 이용하여 사용
		cout << root2 << endl;
	}
	for (int place = 0; place <= 9; place++) // setprecision()의 사용 
		cout << setprecision(place) << root2 << endl;

	// width()
	int widthValue = 4;
	char sentence[10];
	while (cin >> sentence) // 공백문자도 한 char로 인식
	{
		cout.width(widthValue++); // 4 -> 5 -> 6 -> ... 
		cout << sentence << endl;
		cin.width(5); // cin에서 sentence로 5자리 단위로 넘겨줌
	}

}