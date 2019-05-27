#include <iostream>
using namespace std;

int main(void)
{
	int num = 5;
	float real = 0.f;

	real = static_cast<float>(num); // 명시적 형변환 수행 (함수호출)
	cout << real << endl;

	return 0;
}