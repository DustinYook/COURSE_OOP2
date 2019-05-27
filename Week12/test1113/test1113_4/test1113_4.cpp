#include <iostream>
using namespace std;

int main(void)
{
	int Num = 5;
	float* pReal = new float;

	// memcpy는 메모리를 일방적으로 복사하는 함수입니다.
	// 두번째 인수에서 첫번째 인수로 세번째인수(바이트)만큼
	// 복사를 진행합니다. 여기서는 더 작은 자료형을 사용했습니다.
	memcpy(pReal, &Num, sizeof(float) < sizeof(int) ? sizeof(float) : sizeof(int));
	
	cout << *pReal << endl;
	delete pReal;

	system("pause");
	return 0;
}