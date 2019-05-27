// 프로그램 설명: bad_alloc의 해결방법 (1) - try~catch 블록을 이용
#include <iostream>
#include <new>
#include <cstdlib> // abort()와 exit()이 정의된 헤더
#include <stdexcept>
using namespace std;

int main(void)
{
	double *ptr[50];
	try
	{
		for (size_t i = 0; i < 50; i++)
		{
			ptr[i] = new double[5000000];
			cout << "ptr[" << i << "] points to 50,000,000 new doubles" << endl;
		}
	}
	catch (exception ex)
	{
		cerr << ex.what() << endl;
	}

	return 0;
}