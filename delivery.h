#ifndef DELIVERY_H
#define DELIVERY_H
#include <iostream>
#include "crew.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Delivery
{
	public:
		Delivery()
		{
			cout << "Enter the estimated setup time (in min): " << endl  << ">> ";
			//printPrompt();
			cin >> _estimatedSetupTime;
			
			cout << "Enter the estimated drive time (in min): " << endl  << ">> ";
			cin >> _estimatedDriveTime;
			
			cout << "Enter the delivery fee: " << endl  << ">> ";
			cin >> _deliveryCharge;
		
			string addCrew;
			do
			{	
				string name;
				float pay;
				cout << "Please enter crew member's name." << endl << ">> ";
				cin >> name;
				cout << "Please enter crew member's hourly pay." << endl  << ">> ";
				cin >> pay;
				
				Person crewMember(pay, name);
				crewMember.printDescription();
				
				
				bool tf = crew.addCrewMember(crewMember);
				if (tf)
				{
					cout << name << " was added." << endl;
				}
				else
				{
					cout << name << " was not added." << endl;
					cout << "The crew is currently of size : " << crew.getCrewSize() << endl;
					
					cout << "The max crew size is: " << crew.getMaxSize() << endl;
				}
				cout << "Add crew member? [y/n]" << endl  << ">> ";
				cin >> addCrew;
			} while (addCrew.compare("y") == 0);
		}
		int getEstimatedSetupTime();
		int getEstimatedDriveTime();
		float getDeliveryCharge();
		void setEstimatedSetupTime(int);
		void setEstimatedDriveTime(int);
		void setDeliveryCharge(float);
		int calculateEstimatedDeliveryTime();
		
	private:
		int _estimatedSetupTime;
		int _estimatedDriveTime;
		float _deliveryCharge;
		DeliveryCrew crew;
};

#endif
