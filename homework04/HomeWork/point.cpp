// point.cpp: the implementation of class Point
#include "point.h"

// Class Constructor
Point::Point(int x, int y) 
{
	xCoordinate = x;
	yCoordinate = y;
}

// Operator overloading for addition
Point Point::operator+(Point& pt)
{
	return Point(xCoordinate + pt.xCoordinate, yCoordinate + pt.yCoordinate);
}

// Operator overloading for subtraction
Point Point::operator-(Point& pt)
{
	return Point(xCoordinate - pt.xCoordinate, yCoordinate - pt.yCoordinate);
}

// Operator overloading for stream insertion
istream& operator>>(istream& input, Point& pt)
{
	if (input.peek() == '(') // ����(1)
	{
		input.ignore();
		input >> pt.xCoordinate;
		if (input.good()) // ����(2)
		{
			if (input.peek() == ',') // ����(3-1)
			{
				input.ignore();
				if (input.peek() == ' ') // ����(3-2)
				{
					input.ignore();
					input >> pt.yCoordinate;
					if (input.good()) // ����(4)
					{
						if (input.peek() == ')') // ����(5)
						{
							input.ignore();
							cout << pt; // call print function when all input restrictions are satisfied
						}
						else // ����(5)
							cerr << "\nInvalid data" << endl;
					}
					else // ����(4)
						cerr << "\nInvalid data" << endl;
				}
				else // ����(3-2)
					cerr << "\nInvalid data" << endl;
			}
			else // ����(3-1)
				cerr << "\nInvalid data" << endl;
		}
		else // ����(2)
			cerr << "\nInvalid data" << endl;
	}
	else // ����(1)
		cerr << "\nInvalid data" << endl;

	return input;
}

// Operator overloading for stream extraction
ostream& operator<<(ostream& output, Point& pt)
{
	output << "Point entered was: " <<  "(" << pt.xCoordinate << ", " << pt.yCoordinate << ")" << endl << endl;
	return output;
}