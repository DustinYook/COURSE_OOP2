#include <windows.h> 
#include <limits> 
#include <iostream> 
#include <new>
using namespace std;

void cannot_alloc_heap() 
{
	std::cerr << "메모리 할당에 실패하였습니다." << endl;
	throw bad_alloc();
}

int main() 
{
	BYTE* p = 0;
	size_t size = 10000;
	int cnt = 0; // 루프카운터
	bool bLoop = true;
	set_new_handler(cannot_alloc_heap);
	try {
		while (bLoop) 
		{
			cout << (cnt + 1) << "번째 호출" << endl;
			p = new BYTE[size];
			size *= 2;
			delete[] p;
			cnt++;
		}
	}
	catch (const exception& e) 
	{
		cerr << e.what() << '\n';
		cerr << "실패한 사이즈: " << size << '\n';
	}
	system("pause");
	return 0;
}