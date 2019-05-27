// ���α׷� ����: bad_alloc�� �ذ��� (2) - set_new_handler()�� �̿�
#include <iostream>
#include <new>
#include <cstdlib> // abort()�� exit()�� ���ǵ� ���
#include <stdexcept>
using namespace std;

void customNewHandler()
{
	cerr << "Function called" << endl;
	abort(); // ������ ����
}

int main(void)
{
	double *ptr[50];
	set_new_handler(customNewHandler); // try~catch�� �ʿ����� ����
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