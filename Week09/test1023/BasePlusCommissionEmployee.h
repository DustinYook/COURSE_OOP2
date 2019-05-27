#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
	BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& f, const std::string& l, const std::string& s, double c, int g, int b) :CommissionEmployee(f, l, s, c, g)
	{
		setGrossSales(g);
	}
	void setBaseSalary(const int);
	int getBaseSalary() const;

	virtual double earnings() const; 
	virtual void print() const override; 
private:
	int baseSalary;
}; 
#endif