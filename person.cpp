#include "person.h"
#include "inout.h"

Person::Person(double payPerHour, string name)
{
	setHourlyRate(payPerHour);
	setName(name);
}

string Person::getName() 
{
	return _name;

}
void Person::setName(string name) 
{
	_name = name;

}
double Person::getHourlyRate(void) 
{
	return _payPerHour;

}
void Person::setHourlyRate(double payPerHour) 
{
	_payPerHour = payPerHour;

}
void Person::printDescription(void)
{
	cout << "Name: " << Person::getName() << endl << "Hourly Rate: "        << Person::getHourlyRate() << endl;
}

