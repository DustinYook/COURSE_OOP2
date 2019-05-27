#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"
class CommissionEmployee : public Employee
{
public:
	CommissionEmployee::CommissionEmployee(const std::string& f, const std::string& l, const std::string& s, double c, double g) :Employee(f, l, s)
	{
		setCommissionRate(c);
		setGrossSales(g);
	}
	void setCommissionRate(const double);
	double getCommissionRate() const;
	void setGrossSales(const int);
	int getGrossSales() const;

	virtual double earnings() const override;
	virtual void print() const override;
private:
	double commissionRate;
	int grossSales;
};
#endif