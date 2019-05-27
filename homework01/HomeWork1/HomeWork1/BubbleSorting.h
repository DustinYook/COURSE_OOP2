// THIS PROGRAM IS WRITTEN BY YOOK,DONGHYUN(12131819) 
#include <iostream>
#define END 8 // Define Macro
using namespace std;

// The Definition of the class
class Sorting
{
public: // Class Member Functions
	Sorting(int*); // 1) Constructor
	~Sorting(); // 2) Destructor
	int* getPt() const; // 3) Getter
	void setPt(int*); // 3) Setter
	void PrintData(int*); // 4) PrintData
	void Swap(int*, int*); // 5) Swap
	void Compare(int*, int*); // 6) Compare
	void Sort(int*); // 7) Sort
	// Nested call structure: Sort() -> Compare() -> Swap()
	
private: // Class Member Variable
	int* pt;
};

// The Definition of the member functions
// 1) Constructor
Sorting::Sorting(int* ptr)
{
	setPt(ptr);
}

// 2) Destructor
Sorting::~Sorting()
{
}

// 3) Getters & Setters
int* Sorting::getPt() const
{
	return pt;
}
void Sorting::setPt(int* sp)
{
	pt = sp;
}

// 4) PrintData => This function prints the value from the data array. 
void Sorting::PrintData(int* ptr)
{
	static int call_cnt = 0; // By using static keyword, I can use it in cumulative operation
	switch (call_cnt)
	{
	case 0: cout << "[Before] >> ";
		break;
	case 1: cout << "[After]  >> ";
		break;
	}
	for (int i = 0; i < END; i++)
		cout << *(ptr + i) << " ";
	cout << endl;
	call_cnt++;
}

// 5) Swap => This function swaps the value of each data, if the inputs satisfy the condition. 
void Sorting::Swap(int* ptr1, int* ptr2) // Define Swap Function
{ // If this function is called by other function, it swaps the value of each data
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

// 6) Compare => This function compares two inputs, and if the inputs satisfy the condition, then it calls Swap function.
void Sorting::Compare(int* ptr1, int* ptr2) // Define Compare Function
{
	if (*ptr1 < *ptr2) // Compare the value of the data 
		Swap(ptr1, ptr2); // after the comparision, if the first one is smaller than second one, then this function calls Swap function.
}

// 7) Sort => This function's concept is based on "Bubble Sorting", it is implemented by using "Nested loops" and "Nested calls"
void Sorting::Sort(int* ptr) 
{
	for (int i = 0; i < END; i++) // Outer loop controls the index of stanard of comparison.
		for (int j = i; j < END; j++) // Inner loop controls the index of comparison target.
			Compare(ptr + i, ptr + j); // Nested call structure: Sort() -> Compare() -> Swap()
}