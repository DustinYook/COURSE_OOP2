// 프로그램 설명: 함수를 이용하여 Project2를 구현
#include <iostream>
#include <iomanip>
using namespace std;
void change(int*, int*);

int main(void)
{
	int a, b;
	int* p1 = &a;
	int* p2 = &b;
	cout << "Please input 2 integers you want to compare with: ";
	cin >> a >> b;
	if (*p1 < *p2) // a와 b의 swap연산
		change(p1, p2);
	cout << *p1 << " is bigger than " << *p2 << endl;
	return 0;
}

void change(int* aPtr, int* bPtr)
{
	int temp = *aPtr;
	*aPtr = *bPtr;
	*bPtr = temp;
}	