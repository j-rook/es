#include "delivery.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

Delivery::Delivery()
{
	float setTime, driveTime;
	float delChg;
	
	cout << "Enter estimated setup time." <<
		endl << ">> ";
		
	cin >> setTime;
		
	cout << "Enter estimated drive time." <<
		endl << ">> ";
		
	cin >> driveTime;
	
	cout << "Enter delivery charge." <<
		endl << ">> ";
		
	cin >> delChg;
	
	setEstimatedSetupTime(setTime);
	setEstimatedDriveTime(driveTime);
	setDeliveryCharge(delChg);
	
	string addCrew;
	
	do
	{
		string name;
		float pay;
		
		cout << "Enter crew member's name." <<
			endl << ">> ";
			
		cin >> name;
		
		cout << "Enter crew member's hourly pay." <<
			endl << ">> ";
			
		cin >> pay;
		
		Person member(pay, name);
		_crew.addCrewMember(member);
		
		_crew.listCrewMembers();
		
		cout << "Add another crew member? " <<
			endl << "(y/n) ";
			
		cin >> addCrew;
	
	} while(addCrew.compare("n") != 0);
}

Delivery::Delivery(DeliveryCrew& crew)
{
	float setTime, driveTime;
	float delChg;
	
	cout << "Initializing Delivery..." << 
		endl;
	cout << "Assigning Crew Members to Delivery..." << 
		endl;
	for (int i = 0; i < crew.getCrewSize(); ++i)
	{
		Person temp = crew.getCrewMember(i);
		cout << "Adding " << temp.getName() << "..." << 
			endl;
		_crew.addCrewMember(crew.getCrewMember(i));
	}
	
	cout << "Gathering Delivery Information..." << 
		endl;
		
	cout << "=================================" << 
		endl;
	
	cout << "Enter estimated setup time." <<
		endl << ">> ";
		
	cin >> setTime;
		
	cout << "Enter estimated drive time." <<
		endl << ">> ";
		
	cin >> driveTime;
	
	cout << "Enter delivery charge." <<
		endl << ">> ";
		
	cin >> delChg;
	
	setEstimatedSetupTime(setTime);
	setEstimatedDriveTime(driveTime);
	setDeliveryCharge(delChg);
}

float Delivery::calculateEstimatedDeliveryTime()
{
	float delTime = getEstimatedSetupTime() + getEstimatedDriveTime();
	return delTime;
}

float Delivery::calculateDeliveryProfit()
{
	float delTime = calculateEstimatedDeliveryTime();
	float cost = delTime * _crew.sumCrewHourlyRates();
	
	float revenue = getDeliveryCharge() - cost;
	
	return revenue;
}

void Delivery::printDescription()
{
	cout << "=================================" <<
		endl;
	cout << "Delivery's total time(estimate): " <<
		calculateEstimatedDeliveryTime() << endl;
	cout << "Delivery fee charged: " << 
		getDeliveryCharge() << endl;
		
	_crew.printDescription();
		
	cout << "Delivery's profit(estimate): " << 
		calculateDeliveryProfit() << endl;	
	cout << "=================================" <<
		endl;
}

float Delivery::getEstimatedSetupTime()
{
	return _estSetupTime;	
}

float Delivery::getEstimatedDriveTime()
{
	return _estDriveTime;
}

float Delivery::getDeliveryCharge()
{
	return _deliveryCharge;
}

void Delivery::setEstimatedSetupTime(float setupTime)
{
	_estSetupTime = setupTime;
}

void Delivery::setEstimatedDriveTime(float driveTime)
{
	_estDriveTime = driveTime;
}

void Delivery::setDeliveryCharge(float delChg)
{
	_deliveryCharge = delChg;
}
