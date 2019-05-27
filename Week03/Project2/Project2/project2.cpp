// 프로그램 설명: 두 정수를 입력받고 크기를 비교하는 프로그램
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int a, b, temp;
	int* aPtr = &a; // aPtr은 a를 간접참조
	int* bPtr = &b; // bPtr은 b를 간접참조

	// 입력처리
	cout << "Please input 2 integers you want to compare with: ";
	cin >> a >> b;

	if (*aPtr < *bPtr) // a와 b의 swap연산
	{
		temp = *aPtr;
		*aPtr = *bPtr;
		*bPtr = temp;
	}
	cout << *aPtr << " is bigger than " << *bPtr << endl;
	return 0;
}