// ExampleOfTest2.cpp : Defines the entry point for the console application. // 
#include <iostream> 
int FunctionOfJudge(int example) 
{ 
	int flag = 0; 
	int n = 2; 
	while (n <= example*0.5) 
	{ 
		if (!(example%n)) 
		{ 
			flag = 1; 
			break; 
		} 
		else 
			n++; 
	} 
	return flag; 
} 

int main() 
{ 
	int i = 2 ; 
	int n = 0; 
	for (; i <= 10000; i++) 
	{ 
		if (!FunctionOfJudge(i)) 
		{ 
			std::cout << i << " "; 
			n++; 
		} 
	} 
	std::cout << "Totally have " << n << "numbers are prime!"; 
} 