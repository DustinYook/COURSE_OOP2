// ÇÁ·Î±×·¥ ¼³¸í: Ãªº¿ ±¸Çö
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout << "What's your name?";
	char name[10];
	cin.getline(name, 10);
	cout << "Hello " << name << "." << endl;

	cout << "What is your favorite fruit? ";
	char fruit[10];
	cin.getline(fruit, 10);
	cout << "I like " << fruit << " too!" << endl;

	system("pause");
	return 0;
}