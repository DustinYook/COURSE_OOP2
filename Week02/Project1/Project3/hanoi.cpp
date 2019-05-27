#include <iostream>
using namespace std;
void hanoi(int, char, char, char);

int main(void)
{
	int n;
	cout << "Please input the number of the disk to moves: ";
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char a, char b, char c)
{
	if (n == 1) // base case
		cout << "move disk " << n << ": " << a << " -> " << c << endl;
	else
	{
		hanoi(n - 1, a, c, b); // Àç±ÍÈ£Ãâ
		cout << "move disk " << n << ": " << a << " -> " << c << endl;
		hanoi(n - 1, b, a, c); // Àç±ÍÈ£Ãâ
	}
}