#include "crew.h"

    //reimplement constructors to 
DeliveryCrew::DeliveryCrew()
{
	setCrewSize(0);
}

DeliveryCrew::DeliveryCrew(Person a)
{
    _crew[0] = a;
	setCrewSize(1);
}

DeliveryCrew::DeliveryCrew(Person a, Person b)
{
    _crew[0] = a;
    _crew[1] = b;
    setCrewSize(2);
}



bool DeliveryCrew::addCrewMember(Person& possibleAddition)
{
	
	if (getCrewSize() < 2)
	{	
		
		setCrewSize(getCrewSize() + 1);
		_crew[getCrewSize()-1] = possibleAddition;
		return true;
	}
	
	else
	{
		std::cout << "Sorry, this could not be performed." << std::endl;
	}
	
	return false;
}//if member added returns true

bool DeliveryCrew::removeCrewMember(Person possibleRemoval)
{
	
}
void DeliveryCrew::listCrewMembers()
{
std::cout << "blah.";
	for (Person crewMember : _crew)
	{
		crewMember.printDescription();
	}
}
float DeliveryCrew::sumCrewHourlyRates()
{
	float sum = 0.0;
	for (Person crewMember : _crew)
	{
		sum += crewMember.getHourlyRate();
	}
	
	return sum;
}

int DeliveryCrew::getCrewSize()
{
	return _size;
}

void DeliveryCrew::setCrewSize(int i)
{
	_size = i;
}

