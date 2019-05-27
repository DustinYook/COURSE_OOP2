#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
class SalariedEmployee : public Employee
{
public:
	SalariedEmployee::SalariedEmployee(const std::string& f, const std::string& l, const std::string& s, int w) :Employee(f,l,s)
	{
		setWeeklySalary(w);
	}
	void setWeeklySalary(const int); // set weeklySalary
	int getWeeklySalary() const; // return weeklySalary

	virtual double earnings() const override;
	virtual void print() const override;
private:
	int weeklySalary;
};
#endif