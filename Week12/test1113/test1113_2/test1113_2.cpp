// �������� ���α׷�
#include <iostream>
using namespace std;

class MyInt
{
public:
	int num;
};

class MyFloat
{
public:
	float real;
};

int main(void)
{
	MyInt num = { 5 };
	MyFloat real = { 0.f };

	real = static_cast<MyFloat>(num);
	cout << real.real << endl;
}

// reinterpret_cast�� �ַ� �����Ϳ� �Ϲ� �ڷ�, �����Ϳ� ������ ������ �� ��ȯ�� ���
// "�� �ڷḦ ���� �ڷ������� �ν��϶�!"��� �޽����� �����Ϸ����� ����
// ������ �Ϲ� �ڷ��� �� ���� �� ��ȯ�� �������� ����
// �Լ��� ȣ���ϴ� ���� �ƴϱ� ����.
// static_cast�� �Լ��� ȣ���ϸ�, ��ȯ�� ����� �ӽ� ������ ��ȯ
