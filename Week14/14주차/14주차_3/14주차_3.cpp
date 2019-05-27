#include <iostream>
#include <memory>
using namespace std;

class uniclass
{
public:
	uniclass() :m_i(0) { cout << "construct: " << m_i << endl; } // ������
	void operator=(const int i) { m_i = i; } // �����ڿ����ε�
	~uniclass() {cout << "destroy: " << m_i << endl;} // �Ҹ���
private:
	int m_i;
};

void test()
{
	unique_ptr<uniclass[]>uia(new uniclass[10]); // unique_ptr ����
	for (int i = 0; i < 10; i++)
		uia[i] = i + 1;		
}

int main(void)
{
	test();
	// while (1); // ���ѷ���
	return 0;
}