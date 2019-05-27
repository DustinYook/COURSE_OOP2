#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout << "Please input number: ";
	int num;
	cin >> num;
	cout << dec << num << endl;
	cout << oct << num << endl;
	cout << hex << num << endl;
	system("pause");
	return 0;
}