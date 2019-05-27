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
	// �ϳ��� ���ڵ�
	int accountNumber; // int�� ������� Ȯ����
	char lastName[15]; // ����� Ȯ�� // random access�� �����ϱ� ���� (string�� �� �� ����)
	char firstName[10]; // ����� Ȯ�� // random access�� �����ϱ� ���� (string�� �� �� ����)
	double balance; // double�� ������� Ȯ����
};