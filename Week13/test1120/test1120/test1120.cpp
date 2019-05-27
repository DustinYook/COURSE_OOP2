// ���α׷� ����: runtime_error�� ���� ����ó��
#include <iostream>
#include <stdexcept> // ǥ�ؿ���Ŭ���� ����� ���� ��ó����
using namespace std;

class RunTimeErr: public runtime_error // runtime_error�� ���� ���
{
public:
	RunTimeErr(): runtime_error("Runtime Error!") {} // �θ��� �������Լ��� �״�� �̿�
};

double quotient(int a, int b)
{
	if (b == 0) // ������ ���� 0�� ��� ���ܸ� �߻���Ŵ
		throw RunTimeErr(); // catch������ ���� throw
	return static_cast<double>(a) / b;
}

int main(void)
{
	cout << "�� ������ �Է����ֽʽÿ�: ";
	int a, b;
	while (cin >> a >> b) // EOF�� �Էµ� ������ �Է�ó�� �ݺ�
	{
		try // ���ܰ� �߻��� ������ �ִ� ��
		{
			double result = quotient(a, b); // ���ܰ� �߻��ϴ� ����
			cout << a << "�� " << b << "�� ������ "  << result << "�Դϴ�." << endl;
		}
		catch (RunTimeErr& r) // RunTimeErr�� �޾Ƽ� ó��
		{
			cerr << r.what() << endl;
		} 
		cout << endl << "�� ������ �Է����ֽʽÿ�: ";
	} 
	return 0;
}