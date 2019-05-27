// THIS PROGRAM IS WRITTEN BY YOOK,DONGHYUN(12131819) 
#include <iostream>
#include "BubbleSorting.h" // User Defined Header
using namespace std;
void DataInput(int*, int);

int main(void)
{
	// Data Input Procedure
	int num[8];
	DataInput(num, END);
	Sorting s(num); // Create object and Call constructor
	s.PrintData(s.getPt()); // Call PrintData (Before Sorting)
	s.Sort(s.getPt()); // Call Sort
	s.PrintData(s.getPt()); // Call PrintData (After Sorting)
	system("pause");
	return 0; // End of the program
}

void DataInput(int* ptr, int end)
{
	cout << "Please input " << end << " integers you want to make a queue by its size from big to small." << endl;
	int input[END]; // Input Variable Space
	for (int i = 0; i < end; i++)
	{
		Print(i); // Call Print
		cin >> input[i]; // Get input from user
	}
}