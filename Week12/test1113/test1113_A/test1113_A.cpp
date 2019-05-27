// Case Study #1
// 1���� 100���� sqrt�� ��Ÿ���� ������ �迭�� ���Ͽ� ����
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(void)
{
	ofstream outClientFile("sqrtable.txt", ios::out);
	if (!outClientFile)
	{
		cerr << "File could not be found" << endl;
		exit(EXIT_FAILURE);
	}
	double matrix[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			matrix[i][j] = sqrt(i);
			outClientFile << setw(6) << setprecision(4) << fixed << matrix[i];
		} outClientFile << endl;
	}

	system("pause");
	return 0;
}