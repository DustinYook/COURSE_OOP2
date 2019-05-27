#include <iostream>
#include <memory>
using namespace std;

class uniclass
{
public:
	uniclass() :m_i(0) { cout << "construct: " << m_i << endl; } // 생성자
	void operator=(const int i) { m_i = i; } // 연산자오버로딩
	~uniclass() {cout << "destroy: " << m_i << endl;} // 소멸자
private:
	int m_i;
};

void test()
{
	unique_ptr<uniclass[]>uia(new uniclass[10]); // unique_ptr 선언
	for (int i = 0; i < 10; i++)
		uia[i] = i + 1;		
}

int main(void)
{
	test();
	// while (1); // 무한루프
	return 0;
}