// THIS PROGRAM IS WRITTEN BY YOOK,DONGHYUN(12131819) 
#include <iostream>
#include "MyHeader.h" // User Defined Header
using namespace std;

int main(void)
{
	// Data Input Procedure
	cout << "Please input 6 integers you want to make a queue by its size from big to small." << endl;
	int input[6] = { 0 }; // Input Variable Space
	for (int i = 0; i < 6; i++)
	{
		Print(i); // Call Print
		cin >> input[i]; // Get input from user
	}
	Sorting s(input); // Create object and Call constructor
	s.PrintData(s.getPt()); // Call PrintData (Before Sorting)
	s.Sort(s.getPt()); // Call Sort
	s.PrintData(s.getPt()); // Call PrintData (After Sorting)
	system("pause");
	return 0; // End of the program
}