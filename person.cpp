#include "person.h"

Person::Person(double payPerHour, std::string name)
{
	setHourlyRate(payPerHour);
	setName(name);
}

std::string Person::getName() 
{
	return _name;

}
void Person::setName(std::string name) 
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
	std::cout << "Name: " << Person::getName() << std::endl << "Hourly Rate: "        << Person::getHourlyRate() << std::endl;
}

