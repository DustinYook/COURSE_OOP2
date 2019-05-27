#pragma warning(disable:4996)
#define D_SCL_SECURE_NO_WARNINGS
#include <string>
using namespace std;
#include "ClientData.h"

ClientData::ClientData(int accountNumberValue, const string& lastNameValue, const string& firstNameValue, double balanceValue)
	: accountNumber(accountNumberValue), balance(balanceValue)
{
	setLastName(lastNameValue);
	setFirstName(firstNameValue);
}

int ClientData::getAccountNumber() const
{
	return accountNumber;
}
void ClientData::setAccountNumber(int accountNumberValue)
{
	accountNumber = accountNumberValue;
}

string ClientData::getLastName() const
{
	return lastName;
}
void ClientData::setLastName(const string& lastNameStr)
{
	int length = lastNameStr.size();
	length = (length < 15 ? length : 14);
	lastNameStr.copy(lastName, length);
	lastName[length] = '\0'; // 마지막에 강제적으로 '\0'을 넣어 문자열의 끝임을 표현
}

string ClientData::getFirstName() const
{
	return firstName;
}
void ClientData::setFirstName(const string& firstNameStr)
{
	int length = firstNameStr.size();
	length = (length < 10 ? length : 9);
	firstNameStr.copy(firstName, length);
	firstName[length] = '\0'; // 마지막에 강제적으로 '\0'을 넣어 문자열의 끝임을 표현
}

double ClientData::getBalance() const
{
	return balance;
}
void ClientData::setBalance(double balanceValue)
{
	balance = balanceValue;
}