// Reading Data from a squential file
// file-position pointer
// member functions tellg and tellp(of istream and ostream, respectively)
// returns current position of the file - position pointer as type long
// ex) location = fileobject.tellg();
//     location = fileobject.tellp();

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

void outputLine(int account, const string& name, double balance)
{
	cout << left << setw(10) << account << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
}

int main(void)
{
	ifstream inClientFile("clients.txt", ios::in);
	if (!inClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}
	int account;
	string name;
	double balance;
	cout << left << setw(10) << "Account" << setw(13) << "Name" << "Balance" << endl << fixed << showpoint;
	while (inClientFile >> account >> name >> balance)
		outputLine(account, name, balance);
	system("pause");
	return 0;
}