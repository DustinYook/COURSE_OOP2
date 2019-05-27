// ���α׷� ����: ���ø��Լ��� ���ø�Ŭ������ ���ǿ� ���
// �޸�: Template Class != Class Template
#include <iostream>
using namespace std;

// 1-1) ���ø��Լ� ����
template <typename T>
T max(T arg1, T arg2)
{
	return (arg1 > arg2) ? arg1 : arg2;
}
template <typename S>
S min(S arg1, S arg2)
{
	return (arg1 < arg2) ? arg1 : arg2;
}

// 2-1) ���ø�Ŭ���� ����
template <class C>
class Compare
{
public: 
	Compare(C a, C b) :x(a), y(b) { }
	C max() { return (x > y) ? x : y; }
	C min() { return (x < y) ? x : y; }
private:
	C x, y;
};

int main(void)
{
	// 1-2) ���ø� �Լ� ���
	cout << "1) ���ø��Լ��� ���" << endl;
	cout << max(3, 7) << " > " << min(3, 7) << endl; // �����Ϸ����� �ڵ������� T max<int, int>�� �������� ȣ����
	cout << max(45.78, 93.6) << " > " << min(45.78, 93.6) << endl;
	cout << max('a', 'b') << " > " << min('a', 'b') << endl << endl;
	
	// 2-2) ���ø� Ŭ���� ���
	cout << "2) ���ø�Ŭ������ ���" << endl;
	Compare<int>cmp1(3, 7);
	cout << cmp1.max() << " > " << cmp1.min() << endl;
	Compare<double>cmp2(45.78, 93.6);
	cout << cmp2.max() << " > " << cmp2.min() << endl;
	Compare<char>cmp3('a', 'b');
	cout << cmp3.max() << "  > " << cmp3.min() << endl;
	return 0;
}