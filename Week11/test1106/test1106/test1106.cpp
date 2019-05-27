// ���α׷� ����: ������� ����
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	// showpoint
	double num = 9.000000;
	cout << num << endl;
	cout << showpoint; // ��ȿ���ڰ� ���� ��쿡�� ���������� �Ҽ��� �Ʒ��ڸ��� ǥ��
	cout << num << endl;

	// right, left, internal, showpos
	int num1 = 1234;
	cout << setw(10) << num1 << endl; // �ʱ갪: right
	cout << setw(10) << right << num1 << endl; // ������
	cout << setw(10) << left << num1 << endl; // ������
	cout << setw(10) << internal << showpos << num1 << endl; // �߰��� ��� ��
	cout << noshowpos; // ����� '+' ��� ����

	// fill(), setfill()
	int num2 = 10000;
	cout << setw(10) << right << num2 << endl;
	cout.fill('_'); // fill(): ���鹮�� ��� '_' ���ڷ� ä������
	cout << setw(10) << right << num2 << endl;
	cout << left;
	cout << setw(10) << left << num2 << endl;
	cout << setw(10) << setfill('$') << left << num2 << endl; // setfill(): ���鹮�� ��� '$' ���ڷ� ä������
	cout << setfill(' ');

	// showbase, uppercase
	int num3 = 100;
	cout << showbase; // ���λ� ���
	cout << setw(10) << internal << hex << num3 << endl; // �ʱ갪: �ҹ��� (C���: %x)
	cout << setw(10) << internal << oct << num3 << endl;
	cout << setw(10) << internal << hex << uppercase << num3 << endl; // �빮�ڷ� ��� (C���: %X)
	cout << setw(10) << internal << oct << uppercase << num3 << endl;
	cout << nouppercase; // �빮�� ���� ����

	// scientific, fixed
	double num4 = 3.1415926248;
	cout << num4 << endl; // �ʱ갪: �Ҽ��� ������� �տ������� 6���� ǥ��
	cout << scientific << num4 << endl; // ������ ǥ��� ���
	cout << fixed << num4 << endl; // �ʱ갪: fixed�� ���� �Ҽ��� �Ʒ� 6���� ǥ��
	cout << setprecision(7) << num4 << endl; // ���е��� �Ҽ����Ʒ� 7���ڷ� ǥ������

	system("pause");
	return 0;
}