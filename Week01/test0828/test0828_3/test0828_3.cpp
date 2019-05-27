// ExampleOfTest4.cpp : Defines the entry point for the console application. 
/* Author :Yin Xu Date:30th,August */ 
#include <iostream>
int minivalue = 0; 
int InitializationOfArray(int length ,int number[]) 
{ 
	int element = 0; 
	int n = 0; 
	for (n = 0; n < length; n++) 
	{ 
		std::cin >> element; 
		number[n] = element; 
	} 
	return 1; 
} 

int FoundMiniValue(int subscript,int endscript,int minivalue,int array[]) 
{ 
	if (subscript <= endscript) 
	{ 
		if (array[subscript] < minivalue) 
			minivalue = array[subscript]; 
		if (array[endscript] < minivalue) 
			minivalue = array[endscript]; 
		subscript++; 
		endscript--; 
		minivalue = FoundMiniValue(subscript, endscript, minivalue, array);
		return minivalue; 
	} 
	else 
		return minivalue; 
} 

int main() 
{ 
	int size = 0; 
	std::cout << "Please input the length of the array ! \n"; 
	std::cin >> size; std::cout << "The size of the array is" << size << "!\n,please input the elements respectively !\n"; 
	int* array = new int[size]; 
	if (InitializationOfArray(size, array)) 
		std::cout << "The array you need has been initialized successfully !\n"; 
	minivalue = array[0]; 
	minivalue = FoundMiniValue(0, size - 1, minivalue, array); 
	std::cout << "The minivalue of the array you inputed is " << minivalue<<"!\n"; 
	system("pause");
	return 0;
} 