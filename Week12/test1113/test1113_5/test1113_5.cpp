#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ifstream input("input.txt");

	if (input.fail())
	{
		cout << "������ ���� �� �����߽��ϴ�." << endl;
		return 1;
	}

	input.seekg(-1, ios::end);
	cout << (char)input.peek();
	input.seekg(0, ios::beg);
	cout << (char)input.peek();
	input.seekg(7, ios::cur);
	cout << (char)input.peek();
	input.seekg(5);
	cout << (char)input.peek() << endl;
	input.close();

	system("pause");
	return 0;
}