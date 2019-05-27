#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int SIZE = 80;

int main()
{
	// 주소를 나타내도록 캐스트하는 방법
	const char* const word = "again";
	cout << static_cast<const void*>(word) << endl; // 강제형변환을 통해서 주소를 출력

	// eof()에 대한 이해
	int character;
	cout << cin.eof() << endl;
	while ((character = cin.get()) != EOF)
		cout.put(character); // ctrl+z: EOF 입력
	cout << character << endl;
	cout << cin.eof() << endl;

	// get()에 대한 이해
	char buffer1[SIZE];
	char buffer2[SIZE];
	cin >> buffer1;
	cout << buffer1 << endl;
	cin.get(buffer2, SIZE);
	cout << buffer2 << endl;

	// getline()에 대한 이해
	char buffer3[SIZE];
	cin.getline(buffer3, SIZE);
	cout << buffer3 << endl;

	// read(), write()
	char buffer4[SIZE];
	cin.read(buffer4, 20);
	cout.write(buffer4, cin.gcount());

	system("pause");
	return 0;
}