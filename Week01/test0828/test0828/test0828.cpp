// ExampleOfTest1.cpp : Defines the entry point for the console application. 
/* author:Yin Xu Date:30th,August */ 
#include <iostream> 
#include <math.h>
int FunctionOfJudge(int example)
{
	int flag = 0;
	int n = 2;
	while (n < example)
	{
		if (!(example%n))
		{
			flag = 1;
			break;
		}
		else
			n++;
	} return flag;
}

int main()
{
	int number; std::cout << "please,input a integer\n"; 
	std::cin >> number; 
	if (FunctionOfJudge(number)) 
		std::cout << "The number you have inputed is not prime \n"; 
	else std::cout << "The number you hava inputed is prime\n"; 
	return 0;
}