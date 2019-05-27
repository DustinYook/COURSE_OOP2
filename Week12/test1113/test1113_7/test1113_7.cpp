#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ofstream output("output.txt");

	output << "aaaaaaaaaa";
	output.seekp(3);
	output << "bbb";
	cout << "현재 위치는 " << output.tellp() << "입니다." << endl;
	output.seekp(-5, ios::end);
	output << "ccc";
	cout << "현재 위치는 " << output.tellp() << "입니다." << endl;
	output.close();

	system("pause");
	return 0;
}