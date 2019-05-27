// ���α׷� ����: bad_alloc�� �ذ��� (1) - try~catch ����� �̿�
#include <iostream>
#include <new>
#include <cstdlib> // abort()�� exit()�� ���ǵ� ���
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