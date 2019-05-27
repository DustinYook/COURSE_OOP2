// ExampleOfTest1.cpp : Defines the entry point for the console application. 
/* author:Yin Xu Date:30th,August */ 
#include <iostream>
#include <cmath>

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
	int number; 
	std::cout << "please,input a integer\n"; 
	std::cin >> number; 
	if (FunctionOfJudge(number)) 
		std::cout << "The number you have inputed is not prime \n"; 
	else 
		std::cout << "The number you hava inputed is prime\n"; 
	return 0; 
} 
// Notes:The program excution speed of ExampleOfTest3 is nearly 2 times as ExampleOfTest1's.
// Since the time - complexity of the two programs are both O(n). 
// We can clearly see from the two pragrams, to the same integer n, 
// the computation of them are n and 1/2*n respectively.