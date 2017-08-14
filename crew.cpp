#include "crew.h"
using std::endl;
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
	
	if (getCrewSize() < getMaxSize())
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

bool DeliveryCrew::removeCrewMember(Person& possibleRemoval)
{
	Person arr[getCrewSize()] = {};
	int size = getCrewSize();
	bool tf = false;
	if (size > 0)
	{
		int ndx = 0;
		for (int i = 0; i < getCrewSize(); ++i)
		{

			if (_crew[i].getName().compare(possibleRemoval.getName()) != 0)
			{
				arr[ndx] = _crew[i];
				++ndx;
				tf = true;
			}
			else
			{
				--size;
			}
		}
		
		for (int i = 0; i < getCrewSize(); ++i)
		{
			_crew[i] = arr[i];
		}
	
		setCrewSize(size);
	}
	
	else
	{
		std::cout << "No crew members to remove..." << std::endl;
	}
	
	return tf;
}
void DeliveryCrew::listCrewMembers()
{
	if (getCrewSize() > 0)
	{
		for (int i = 0; i < getCrewSize(); ++i)
		{
			_crew[i].printDescription();
		}
	}
	
	else
	{
		std::cout << "No crew members to list..." << std::endl;
	}
}
float DeliveryCrew::sumCrewHourlyRates()
{
	float sum = 0.0;
	if (getCrewSize() > 0)
	{
		for (int i = 0; i < getCrewSize(); ++i)
		{
			sum += _crew[i].getHourlyRate();
		}
	}
	
	return sum;
}

void DeliveryCrew::printDescription()
{
	if (getCrewSize() > 0)
	{
		std::cout << "The crew has an hourly pay: " << sumCrewHourlyRates() <<
			endl;
	
		std::cout << "The crew members are: " << endl;
		for (int i = 0; i < getCrewSize(); ++i)
		{
			std::cout << getCrewMember(i).getName() << endl;
		}
	}
	
	else
	{
		std::cout << "No crew members to describe..." << endl;
	}
}

Person& DeliveryCrew::getCrewMember(int i)
{
	return _crew[i];
}

Person& DeliveryCrew::getCrewMember(std::string name)
{
	int ndx = hasCrewMember(name);
	if (ndx > -1)
	{
		return getCrewMember(ndx);
	}
	Person temp;
	return temp;
}

int DeliveryCrew::hasCrewMember(std::string name)
{	
	if (getCrewSize() > 0)
	{
		for (int i = 0; i < getCrewSize(); ++i)
		{
			if (getCrewMember(i).getName().compare(name) == 0)
			{
				return i;
			}
		}
	}
	
	return -1;
}

int DeliveryCrew::getCrewSize()
{
	return _size;
}

void DeliveryCrew::setCrewSize(int i)
{
	_size = i;
}

const int DeliveryCrew::getMaxSize()
{
	return _maxSize;
}
