#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
	public:
		Person(): _payPerHour(0), _name("Bob")
		{}
		Person(double payPerHour, std::string name);			
		std::string getName();
		void setName(std::string name);
		double getHourlyRate(void);
		void setHourlyRate(double payPerHour);
		/*
		 *Function to print a description of the Person
		 *@impl - none
		 *@param - none
		 *@res - none
		 */
		void printDescription(void);
	private:
		double _payPerHour;
		std::string _name;
		
};

#endif
