#include "CommissionEmployee.h"

void CommissionEmployee::setCommissionRate(const double cr)
{
	commissionRate = cr;
}
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

void CommissionEmployee::setGrossSales(const int gs)
{
	grossSales = gs;
}
int CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

double CommissionEmployee::earnings() const
{
	return getCommissionRate()*getGrossSales();
}

void CommissionEmployee::print() const
{
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "social security number: " << getSocialSecurityNumber() << endl;
}