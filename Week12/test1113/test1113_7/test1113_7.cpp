#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ofstream output("output.txt");

	output << "aaaaaaaaaa";
	output.seekp(3);
	output << "bbb";
	cout << "���� ��ġ�� " << output.tellp() << "�Դϴ�." << endl;
	output.seekp(-5, ios::end);
	output << "ccc";
	cout << "���� ��ġ�� " << output.tellp() << "�Դϴ�." << endl;
	output.close();

	system("pause");
	return 0;
}