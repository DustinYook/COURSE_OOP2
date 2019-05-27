// Case Study #2
// 5 people in telephone book
// Save as "phonenumber.dat"
// Make it possible to modify a certain person with order "n"
// Read the data from the "phonenumber.dat" file
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct TelephoneBook
{
	char name[8];
	char num[20];
};

int main(void)
{
	TelephoneBook entry[5]{ "tom", "123456789","John", "010456789", "Jerry","012456789", "May", "214124124", "Park","015896" };
	TelephoneBook entryTemp;
	fstream books;
	int i;
	char name[8], number[20];
	books.open("phonenumber.dat", ios::out | ios::binary);
	if (!books)
	{
		cerr << "File Open Error" << endl;
		return 1;
	}
	for (i = 0; i < 5; i++)
		books.write((char*)&entry[i], sizeof(entry[i]));
	books.close();
	books.open("phonenumber.dat", ios::in | ios::out | ios::binary);
	cout << "Please input the n for modication: ";
	cin >> i;
	if (i > 5)
		cout << "The number is out of the telephonebook." << endl;
	else
	{
		books.seekg((i - 1) * sizeof(TelephoneBook), ios::beg);
		books.read((char*)&entryTemp, sizeof(entryTemp));
		cout << "Name: " << entryTemp.name << endl;
		cout << " please input a new number,unless type '/': " << endl;
		cin.clear();
		cin >> name;
		cout << "PhoneNumber: " << entryTemp.num << endl;
		cout << " please input a new number,unless type '/': " << endl;
		cin >> number;
		if (name[0] != '/')
			strcpy_s(entryTemp.name, name);
		if (number[0] != '/')
			strcpy_s(entryTemp.num, number);
		books.seekp((i - 1) * sizeof(TelephoneBook), ios::beg);
		books.write((char*)&entryTemp, sizeof(TelephoneBook));
	}
	books.seekg(0, ios::beg);
	for (i = 0; i < 5; i++)
	{
		books.seekg(i * sizeof(TelephoneBook), ios::beg);
		books.read((char*)&entryTemp, sizeof(entryTemp));
		cout << entryTemp.name << " " << entryTemp.num << endl;
	}
	books.close();

	system("pause");
	return 0;
}