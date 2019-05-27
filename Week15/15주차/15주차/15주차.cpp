// Function exit terminates a program.
// the argument to exit is returned to the environment from which the program was invoked.
// passing EXIT_SUCCESS(also defined in <cstdlib>) to exit indicates that the program terminated normally; 
// passing any other value(in this case EXIT_FAILURE)
// indicates that the program terminated due to an error.

// ���α׷� ����: ����ڷκ��� �����͸� �Է¹޾� .txt���Ͽ� �����͸� ����ϴ� ���α׷�
#include <iostream>
#include <iomanip>
#include <fstream> // ofstream�� ����ϱ� ���� ��ó����
#include <cstdlib>
#include <string>
using namespace std;

int main(void)
{
	// �ܼ� -> ���� (��, ���Ϸ� ���)
	ofstream outClientFile("clients.txt", ios::out); // ofstream ��ü����, out�� ����⸦ ��
	if (!outClientFile) // ��ü�� �������� ���� ���
	{
		cerr << "File could not be found" << endl;
		exit(EXIT_FAILURE);
	}

	int account;
	string name;
	double balance;
	int cnt = 0; // ù��° �� �� ���� ���

	cout << "Enter the account, name, and balance" << endl;
	cout << "Enter end-of-file(^Z) to end input" << endl;

	while (cin >> account >> name >> balance)
	{
		if (cnt == 0) // ���� ���
		{
			outClientFile << setw(15) << left << "Account" << setw(15) << left << "Name" << setw(15) << left << "Balance" << endl;
			outClientFile << "-------------------------------------------------" << endl;
		}
		outClientFile << setw(15) << left << account << setw(15) << left << name << setw(15) << left << balance << endl;
		cnt++;
	} outClientFile << "-------------------------------------------------" << endl;
	return 0;
}