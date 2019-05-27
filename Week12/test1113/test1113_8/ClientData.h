#pragma once
#include <string>
using namespace std;
class ClientData
{
public:
	// default ClientData constructor
	ClientData(int = 0, const string& = " ", const string& = " ", double = 0.0);
	// accessor functions for accontNumber
	void setAccountNumber(int);
	int getAccountNumber() const;
	// accessor functions for lastName
	void setLastName(const string&);
	string getLastName() const;
	// accessor functions for firstName
	void setFirstName(const string&);
	string getFirstName() const;
	// accessor functions for balance
	void setBalance(double);
	double getBalance() const;
private:
	// 하나의 레코드
	int accountNumber; // int의 사이즈는 확정적
	char lastName[15]; // 사이즈를 확정 // random access를 구현하기 위함 (string을 안 쓴 이유)
	char firstName[10]; // 사이즈를 확정 // random access를 구현하기 위함 (string을 안 쓴 이유)
	double balance; // double의 사이즈는 확정적
};