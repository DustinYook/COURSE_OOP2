#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include <new>
using namespace std;

void handler()
{
	cout << "Memory allocation failed" << endl;
	set_new_handler(nullptr); // ���� �߻� �� Ư���Լ� ȣ��
}

void no_memory()
{
	cout << "Failed to allocate memory" << endl;
	exit(1);
}

int main(void)
{
	set_new_handler(no_memory);
	cout << "Attempting to alloctae 1GiB...";
	char* p = new char[1024 * 1024 * 1024];
	cout << "ok" << endl;
	delete[] p;
	system("pause");
	return 0;
}