#include <iostream>
using namespace std;

// Function Prototype
void inputArray(int*, int);
void printArray(int*, int);
void BubbleSort(int*, int);

// Main Function
int main() 
{
	cout << "Please input number of the integers you want to sort: ";
	int size;
	cin >> size;
	int* arr = new int[size]; // int arr[size];와 동일한 구문

	cout << "Please type number set that you want to sort: ";
	inputArray(arr, size);

	cout << "Your input data set: ";
	printArray(arr, size);
	BubbleSort(arr, size);

	cout << "Sorted input data:  ";
	printArray(arr, size);

	system("pause");
	return 0;
}

// Function Definition
void inputArray(int* arr, int N)
{
	for (int i = 0; i < N; i++)
		cin >> arr[i];
}

void printArray(int* arr, int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void BubbleSort(int* arr, int N)
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = N - 1; j > 0; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}