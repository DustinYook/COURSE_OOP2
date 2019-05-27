// Creating a random-access file with 100 blank records sequentially

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "Client.h"

// fig 14.13
void outputLine(ostream& output, const ClientData& record)
{
	output << left << setw(10) << record.getAccountNumber() << setw(16) << record.getLastName()
		<< setw(11) << record.getFirstName() << setw(10) << setprecision(2) << right << fixed << showpoint
		<< record.getBalance() << endl;
}

int main(void)
{
	// fig 14.11
	/*ofstream outCredit("credit.dat", ios::out | ios::binary);
	if (!outCredit)
	{
	cerr << "File could not be found" << endl;
	exit(EXIT_FAILURE);
	}
	ClientData blankClient;
	for (int i = 0; i < 100; i++)
	outCredit.write(reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));*/

	// fig 14.12
	/*int accountNumber;
	string lastName;
	string firstName;
	double balance;
	fstream outCredit("credit.dat", ios::in | ios::out | ios::binary);
	if (!outCredit)
	{
	cerr << "File could not be found" << endl;
	exit(EXIT_FAILURE);
	}
	cout << "Enter account number 1 to 100, 0 to end input" << endl;
	ClientData client;
	cin >> accountNumber;
	while (accountNumber > 0 && accountNumber <= 100)
	{
	cout << "Enter last name, first name, and balance" << endl;
	cin >> lastName;
	cin >> firstName;
	cin >> balance;
	client.setAccountNumber(accountNumber);
	client.setLastName(lastName);
	client.setFirstName(firstName);
	client.setBalance(balance);
	outCredit.seekp((client.getAccountNumber() - 1) * sizeof(ClientData));
	outCredit.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
	cout << "Enter account number" << endl;
	cin >> accountNumber;
	}*/

	// fig 14.13
	ifstream inCredit("credit.dat", ios::in | ios::binary);
	// exit program if if stream cannot open file
	if (!inCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	} // end if
	  // output column heads
	cout << left << setw(10) << "Account" << setw(16) << "Last Name" << setw(11) << "First Name" << left << setw(10) << right << "Balance" << endl;
	ClientData client; // create record
					   // read first record from file
	inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
	// read all record from file
	while (inCredit && inCredit.eof())
	{
		// display record
		if (client.getAccountNumber() != 0)
			outputLine(cout, client);
		// read next from file
		inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
	} // end while

	system("pause");
	return 0;
} // end main