#ifndef DELIVERY_H
#define DELIVERY_H
#include "inout.h"
#include "crew.h"
#include <string>

class Delivery
{
	public:
		Delivery()
		{
			std::cout << "Enter the estimated setup time (in min): " << std::endl;
			std::cin >> _estimatedSetupTime;
			
			std::cout << "Enter the estimated drive time (in min): " << std::endl;
			std::cin >> _estimatedDriveTime;
			
			std::cout << "Enter the delivery fee: " << std::endl;
			std::cin >> _deliveryCharge;
		
			string addCrew = "n";
			do
			{
				std::cout << "Add crew member? [y/N]" << std::endl;
				std::cin >> addCrew;
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
