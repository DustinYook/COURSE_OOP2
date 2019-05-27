// THIS PROGRAM IS WRITTEN BY YOOK,DONGHYUN(12131819) 
#include <iostream>
using namespace std;
void Hanoi(int, char, char, char); // Function Prototype

int main(void)
{
	// Data Input
	cout << "Please input the number of the disk to moves: ";
	int num;
	cin >> num;

	// Function Call
	Hanoi(num, 'A', 'B', 'C');
	system("pause");
	return 0;
}

void Hanoi(int input, char from, char thru, char to)
{
	if (input == 1) // Base case => If the disk number is 1
		cout << "move disk " << input << ": " << from << " -> " << to << endl;
	else // Other case => If the disk number is not 1
	{
		Hanoi(input - 1, from, to, thru); // Recursive call
		cout << "move disk " << input << ": " << from << " -> " << to << endl;
		Hanoi(input - 1, thru, from, to); // Recursive call
	}
}
// Recursive Structure of Hanoi (Input: 3)
// (the parameter of Hanoi() is "num" in main())
//                                              - call Hanoi(1, A,B,C) - execute cout for 1 - end of function call
//                 Upper - call Hanoi(2, A,C,B) - execute cout for 2
//                                              - call Hanoi(1, C,A,B) - execute cout for 1 - end of function call
// call Hanoi(3, A,B,C)  - execute cout for 3      
//                                              - call Hanoi(1, B,C,A) - execute cout for 1 - end of function call
//                 Lower - call Hanoi(2, B,A,C) - execute cout for 2
//                                              - call Hanoi(1, A,B,C) - execute cout for 1 - end of function call