// ���α׷� ����: ǥ������ ���� (C������ place holder�� C++������ ����)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	// dec, oct, hex�� �̿��� ǥ������ ����
	int num = 20;
	cout << dec << num << endl; // ǥ�������� 10�������� ���� (�ʱ갪)
	cout << oct << num << endl; // ǥ�������� 8�������� ����
	cout << hex << num << endl; // ǥ�������� 16�������� ����
	cout << setbase(10) << num << endl; // setbase()�� ���� ���ڸ� �ش� �������� ���� (sticky)
	cout << num << endl << endl;

	// precision�� setprecision�� ����
	double root2 = sqrt(2.0);
	cout << fixed; // fixed �Լ��� �Ҽ��� �Ʒ� �� �ڸ����� ǥ������ ����������
	for (int place = 0; place <= 9; place++)  // precision()�� ���
	{
		cout.precision(place); // ��Ʈ�����ڸ� �̿��Ͽ� ���
		cout << root2 << endl;
	}
	for (int place = 0; place <= 9; place++) // setprecision()�� ��� 
		cout << setprecision(place) << root2 << endl;

	// width()
	int widthValue = 4;
	char sentence[10];
	while (cin >> sentence) // ���鹮�ڵ� �� char�� �ν�
	{
		cout.width(widthValue++); // 4 -> 5 -> 6 -> ... 
		cout << sentence << endl;
		cin.width(5); // cin���� sentence�� 5�ڸ� ������ �Ѱ���
	}

}