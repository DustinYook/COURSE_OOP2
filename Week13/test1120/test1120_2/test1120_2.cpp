#include <windows.h> 
#include <limits> 
#include <iostream> 
#include <new>
using namespace std;

void cannot_alloc_heap() 
{
	std::cerr << "�޸� �Ҵ翡 �����Ͽ����ϴ�." << endl;
	throw bad_alloc();
}

int main() 
{
	BYTE* p = 0;
	size_t size = 10000;
	int cnt = 0; // ����ī����
	bool bLoop = true;
	set_new_handler(cannot_alloc_heap);
	try {
		while (bLoop) 
		{
			cout << (cnt + 1) << "��° ȣ��" << endl;
			p = new BYTE[size];
			size *= 2;
			delete[] p;
			cnt++;
		}
	}
	catch (const exception& e) 
	{
		cerr << e.what() << '\n';
		cerr << "������ ������: " << size << '\n';
	}
	system("pause");
	return 0;
}