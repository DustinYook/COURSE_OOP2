#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

ostream& bell(ostream& output)
{
	return output << '\a';
}

ostream& carriageReturn(ostream& output)
{
	return output << '\r';
}

ostream& tab(ostream& output)
{
	return output << '\t';
}

ostream& endLine(ostream& output)
{
	return output << '\n' << flush;
}

int main(void)
{
	cout << "Test" << endLine << "a" << tab << "b" << bell;
	cout << carriageReturn << "-------" << endLine;
	system("pause");
	return 0;
}