// 프로그램 설명: 템플릿클래스를 이용한 스택구현
#include <iostream>
#include <deque>
using namespace std;

template <typename T>
class Stack
{
public:
	T& top()
	{
		return stack.front();
	}
	void push(const T& pushValue)
	{
		stack.push_front(pushValue);
	}
	void pop()
	{
		stack.pop_front();
	}
	bool isEmpty() const
	{
		return stack.empty();
	}
	size_t size() const
	{
		return stack.size();
	}
private:
	deque<T> stack;
};

int main(void)
{
	Stack<double> doubleStack;
	const size_t doubleStackSize = 5;
	double doubleValue = 1.1;
	cout << "Pushing elements onto doubleStack" << endl;
	for (size_t i = 0; i < doubleStackSize; i++)
	{
		doubleStack.push(doubleValue);
		cout << doubleValue << " ";
		doubleValue += 1.1;
	}
	cout << "Poping elements from doulbeStack" << endl;
	while (!doubleStack.isEmpty())
	{
		cout << doubleStack.top() << " ";
		doubleStack.pop();
	} cout << "Stack is empty" << endl;

	Stack<int> intStack;
	const size_t intStackSize = 10;
	int intValue = 1;
	cout << "Pushing elements onto intStack" << endl;
	for (size_t i = 0; i < intStackSize; i++)
	{
		intStack.push(intValue);
		cout << intValue++ << " ";
	}
	cout << "Poping elements from intStack" << endl;
	while (!intStack.isEmpty())
	{
		cout << intStack.top() << " ";
		intStack.pop();
	} cout << "Stack is empty" << endl;
	return 0;
}