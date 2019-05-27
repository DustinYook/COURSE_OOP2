// 프로그램 설명: bad_alloc의 해결방법 (2) - set_new_handler()를 이용
#include <iostream>
#include <new>
#include <cstdlib> // abort()와 exit()이 정의된 헤더
#include <stdexcept>
using namespace std;

void customNewHandler()
{
	cerr << "Function called" << endl;
	abort(); // 강제로 종료
}

int main(void)
{
	double *ptr[50];
	set_new_handler(customNewHandler); // try~catch가 필요하지 않음
	// try 
	// {
		for (size_t i = 0; i < 50; i++)
		{
			ptr[i] = new double[5000000];
			cout << "ptr[" << i << "] points to 50,000,000 new doubles" << endl;
		}
		// throw exception();
	// }
	// catch(exception ex)
	// {
	//	cerr << ex.what() << endl;
	// }
	return 0;
}