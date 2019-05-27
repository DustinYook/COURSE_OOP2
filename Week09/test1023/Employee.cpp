#include "Employee.h"

Employee::Employee(const std::string& f, const std::string& l, const std::string& s)
{
	setFirstName(f);
	setLastName(l);
	setSocialSecurityNumber(s);
}

void Employee::setFirstName(const std::string& fn)
{
	firstName = fn;
}
std::string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(const std::string& ln)
{
	lastName = ln;
}
std::string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSocialSecurityNumber(const std::string& ssn)
{
	socialSecurityNumber = ssn;
}
std::string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void Employee::print() const
{
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "social security number: " << getSocialSecurityNumber() << endl;
}