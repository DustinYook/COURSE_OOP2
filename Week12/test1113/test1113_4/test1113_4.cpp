#include <iostream>
using namespace std;

int main(void)
{
	int Num = 5;
	float* pReal = new float;

	// memcpy�� �޸𸮸� �Ϲ������� �����ϴ� �Լ��Դϴ�.
	// �ι�° �μ����� ù��° �μ��� ����°�μ�(����Ʈ)��ŭ
	// ���縦 �����մϴ�. ���⼭�� �� ���� �ڷ����� ����߽��ϴ�.
	memcpy(pReal, &Num, sizeof(float) < sizeof(int) ? sizeof(float) : sizeof(int));
	
	cout << *pReal << endl;
	delete pReal;

	system("pause");
	return 0;
}