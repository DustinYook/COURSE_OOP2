// Creating a random-access file with 100 blank records sequentially
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "ClientData.h"

int main(void)
{
	// fig 14.11
	ofstream outCredit("credit.dat", ios::out | ios::binary);
	if (!outCredit)
	{
		cerr << "File could not be found" << endl;
		exit(EXIT_FAILURE);
	}
	ClientData blankClient;
	for (int i = 0; i < 100; i++)
		outCredit.write(reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));

	// fig 14.12
	int accountNumber;
	string lastName;
	string firstName;
	double balance;
	fstream outcredit("credit.dat", ios::in | ios::out | ios::binary); // °´Ã¼»ý¼º
	if (!outcredit)
	{
		cerr << "file could not be found" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "enter account number 1 to 100, 0 to end input" << endl;
	ClientData client;
	cin >> accountNumber;
	while (accountNumber > 0 && accountNumber <= 100)
	{
		cout << "enter last name, first name, and balance" << endl;
		cin >> lastName;
		cin >> firstName;
		cin >> balance;
		client.setAccountNumber(accountNumber);
		client.setLastName(lastName);
		client.setFirstName(firstName);
		client.setBalance(balance);
		outcredit.seekp((client.getAccountNumber() - 1) * sizeof(ClientData));
		outcredit.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
		cout << "enter account number" << endl;
		cin >> accountNumber;
	}

	// fig 14.13
	ifstream inCredit("credit.dat", ios::in | ios::binary);
	if (!inCredit) // exit program if if stream cannot open file
	{
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	} // end if
	// output column heads
	cout << left << setw(10) << "Account" << setw(16) << "Last Name" << setw(11) << "First Name" << left << setw(10) << right << "Balance" << endl;
	// ClientData client; // create record
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

// fig 14.13
void outputLine(ostream& output, const ClientData& record)
{
	output << left << setw(10) << record.getAccountNumber() << setw(16) << record.getLastName()
		<< setw(11) << record.getFirstName() << setw(10) << setprecision(2) << right << fixed << showpoint
		<< record.getBalance() << endl;
}


// function to check

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

enum RequestType { ZERO_BALANCE = 1, CREDIT_BALANCE, DEBIT_BALANCE, END };
int getRequest();
bool shouldDisplay(int, double);
void outputLine(int, const string&, double);

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

	int request = getRequest();

	// process user's request
	while (request != END)
	{
		switch (request)
		{
		case ZERO_BALANCE:
			cout << "\nAccounts with zero balance" << endl;
			break;
		case CREDIT_BALANCE:
			cout << "\nAccounts with credit balance" << endl;
			break;
		case DEBIT_BALANCE:
			cout << "\nAccounts with debit balance" << endl;
			break;
		} // end switch

		  // read account, name and balance from file
		inClientFile >> account >> name >> balance;

		// display file contents (until EOF)
		while (!inClientFile.eof())
		{
			// display record
			if (shouldDisplay(request, balance))
				outputLine(account, name, balance);

			// read account, name and balance from file
			inClientFile >> account >> name >> balance;
		} // end inner while

		inClientFile.clear(); // reset eof for next input
		inClientFile.seekg(0); // reposition to beginning of file
		request = getRequest(); // get additional request from user
	} // end outer while

	cout << "End of run." << endl;
	return 0;
} // end main

  // obtain request from user
int getRequest()
{
	int request;

	// display request options
	cout << "\nEnter request" << endl
		<< " 1 - List accounts with zero balances" << endl
		<< " 2 - List accounts with credit balances" << endl
		<< " 3 - List accounts with debit balances" << endl
		<< " 4 - End of run" << fixed << showpoint;

	do // input user request
	{
		cout << "\n? ";
		cin >> request;
	} while (request < ZERO_BALANCE || request > END);

	return request;
} // end function getRequest

  // determine whether to display given record
bool shouldDisplay(int type, double balance)
{
	// determine whether to display zero balances
	if (type == ZERO_BALANCE && balance == 0)
		return true;

	// determine whether to display credit balances
	if (type == CREDIT_BALANCE && balance < 0)
		return true;

	// determine whether to display debit balances
	if (type == DEBIT_BALANCE && balance > 0)
		return true;

	return false;
} // end function shouldDisplay

  // display single record from file
void outputLine(int account, const string& name, double balance)
{
	cout << left << setw(10) << account << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;
} // end function outputLine