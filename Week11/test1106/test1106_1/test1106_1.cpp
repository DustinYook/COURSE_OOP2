// 프로그램 설명: 사용자로부터 데이터를 입력받아 .txt파일에 데이터를 기록하는 프로그램
#include <iostream>
#include <iomanip>
#include <fstream> // ofstream을 사용하기 위한 전처리기
#include <cstdlib>
#include <string>
using namespace std;

int main(void)
{
	// 콘솔 -> 파일 (즉, 파일로 출력)
	ofstream outClientFile("clients.txt", ios::out); // ofstream 객체생성, out은 덮어쓰기를 함
	if (!outClientFile) // 객체가 생성되지 않은 경우
	{
		cerr << "File could not be found" << endl;
		exit(EXIT_FAILURE);
	}
	
	int account;
	string name;
	double balance;
	int cnt = 0; // 첫번째 줄 일 때만 출력

	cout << "Enter the account, name, and balance" << endl;
	cout << "Enter end-of-file(^Z) to end input" << endl;

	while (cin >> account >> name >> balance)
	{
		if (cnt == 0) // 범례 출력
		{
			outClientFile << setw(15) << left << "Account" << setw(15) << left << "Name" << setw(15) << left << "Balance" << endl;
			outClientFile << "-------------------------------------------------" << endl;
		}
		outClientFile << setw(15) << left << account << setw(15) << left << name << setw(15) << left << balance << endl;
		cnt++;
	} outClientFile << "-------------------------------------------------" << endl;
	return 0;
}