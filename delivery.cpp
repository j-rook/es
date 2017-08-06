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
		crew.addCrewMember(member);
		
		crew.listCrewMembers();
		
		cout << "Add another crew member? " <<
			endl << "(y/n) ";
			
		cin >> addCrew;
	
	} while(addCrew.compare("n") != 0);
}

float Delivery::calculateEstimatedDeliveryTime()
{
	float delTime = getEstimatedSetupTime() + getEstimatedDriveTime();
	return delTime;
}

float Delivery::calculateDeliveryProfit()
{
	float delTime = calculateEstimatedDeliveryTime();
	float cost = delTime * crew.sumCrewHourlyRates();
	
	float revenue = getDeliveryCharge() - cost;
	
	return revenue;
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
