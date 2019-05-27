#include "BasePlusCommissionEmployee.h"

void BasePlusCommissionEmployee::setBaseSalary(const int bs)
{
	baseSalary = bs;
}
int BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	return (getCommissionRate()*getGrossSales())+getBaseSalary();
}

void BasePlusCommissionEmployee::print() const
{
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "social security number: " << getSocialSecurityNumber() << endl;
}