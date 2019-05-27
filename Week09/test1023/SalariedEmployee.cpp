#include "SalariedEmployee.h"

void SalariedEmployee::setWeeklySalary(const int ws)
{
	weeklySalary = ws;
}

int SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}

double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

void SalariedEmployee::print() const
{
	cout << "salaried employee: ";
}