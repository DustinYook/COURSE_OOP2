// ���α׷� ����: ����ڷκ��� �����͸� �Է¹޾� .txt���Ͽ� �����͸� ����ϴ� ���α׷�
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
void outputLine(string, string, string);

int main(void)
{
	ofstream outClientFile("students.txt", ios::app);
	if (!outClientFile)
	{
		cerr << "File could not be found" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Enter the name, student ID, and telephone number" << endl;
	cout << "Enter end-of-file to end input" << endl;
	string name, id, phone;
	while (cin >> name >> id >> phone)
		outClientFile << name << " " << id << " " << phone << endl;

	ifstream inClientFile("students.txt", ios::in);
	if (!inClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}
	cout << setw(15) << left << "Name" << setw(15) << left << "ID" << setw(15) << left << "Phone" << endl;
	cout << "===================================================" << endl;
	while (inClientFile >> name >> id >> phone)
		outputLine(name, id, phone);

	system("pause");
	return 0;
}

void outputLine(string name, string id, string phone)
{
	cout << setw(15) << left << name << setw(15) << left << id << setw(15) << left << phone << endl;
}