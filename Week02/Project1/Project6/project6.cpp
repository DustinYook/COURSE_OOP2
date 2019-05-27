#include <iostream>
#include <iomanip> // setw()와 left를 쓰기위한 전처리기
using namespace std;

int main(void)
{
	// 1) 반복 입력처리
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "input " << (i + 1) << " : ";
		cin >> a[i];
	} cout << endl;

	// 2) 반복 출력처리
	int* aPtr = a;
	for (aPtr = a; aPtr < a + 10; aPtr++) // 이러한 처리기법 알아둘 것
		cout << setw(3) << left << *aPtr;
	cout << endl;

	return 0;
}