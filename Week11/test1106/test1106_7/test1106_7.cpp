#include <iostream>
#include <iomanip>
using namespace std;

class Point
{
	friend ostream& operator<<(ostream&, Point&);
	friend istream& operator>>(istream&, Point&);
public:
	Point::Point() {}
	Point::Point(int, int);
	Point operator+(Point&);
	Point operator-(Point&);
private:
	int xCoordinate;
	int yCoordinate;
};

int main(void)
{
	Point p1, p2;
	cout << "Enter the first coordinate(X,Y): ";
	cin >> p1;
	cout << "Enter the second coordinate(X,Y): ";
	cin >> p2;
	cout << p1 + p2 << endl;
	cout << p1 - p2 << endl;
	system("pause");
	return 0;
}

Point::Point(int x, int y)
{
	xCoordinate = x;
	yCoordinate = y;
}

Point Point::operator+(Point& pt)
{
	return Point(xCoordinate + pt.xCoordinate, yCoordinate + pt.yCoordinate);
}

Point Point::operator-(Point& pt)
{
	return Point(xCoordinate - pt.xCoordinate, yCoordinate - pt.yCoordinate);
}

ostream& operator<<(ostream& output, Point& pt)
{
	cout << showpoint << fixed << setprecision(1);
	output << "(" << pt.xCoordinate << "," << pt.yCoordinate << ")";
	return output;
}

istream& operator>>(istream& input, Point& pt)
{
	input >> pt.xCoordinate;
	input.ignore();
	input >> pt.yCoordinate;
	return input;
}
// ios에서 failbit 설정