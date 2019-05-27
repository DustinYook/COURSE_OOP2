#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int SIZE = 80;

int main()
{
	// �ּҸ� ��Ÿ������ ĳ��Ʈ�ϴ� ���
	const char* const word = "again";
	cout << static_cast<const void*>(word) << endl; // ��������ȯ�� ���ؼ� �ּҸ� ���

	// eof()�� ���� ����
	int character;
	cout << cin.eof() << endl;
	while ((character = cin.get()) != EOF)
		cout.put(character); // ctrl+z: EOF �Է�
	cout << character << endl;
	cout << cin.eof() << endl;

	// get()�� ���� ����
	char buffer1[SIZE];
	char buffer2[SIZE];
	cin >> buffer1;
	cout << buffer1 << endl;
	cin.get(buffer2, SIZE);
	cout << buffer2 << endl;

	// getline()�� ���� ����
	char buffer3[SIZE];
	cin.getline(buffer3, SIZE);
	cout << buffer3 << endl;

	// read(), write()
	char buffer4[SIZE];
	cin.read(buffer4, 20);
	cout.write(buffer4, cin.gcount());

	system("pause");
	return 0;
}