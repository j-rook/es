#ifndef DELIVERY_H
#define DELIVERY_H
#include <iostream>
#include "crew.h"
#include <string>


class Delivery
{
	public:
		Delivery();
		Delivery(DeliveryCrew&);
		float getEstimatedSetupTime();
		float getEstimatedDriveTime();
		float getDeliveryCharge();
		void setEstimatedSetupTime(float);
		void setEstimatedDriveTime(float);
		void setDeliveryCharge(float);
		
		/*
		 * Function to sum estimated setup and drive time
		 * 
		 * @impl - sums estimated setup and drive times
		 * @param - none
		 * @res - float representing total delivery time		 * 
		 */
		float calculateEstimatedDeliveryTime();
		
		/*
		 * Funtion to calculate the profit from the delivery
		 *  
		 * @impl - determines the difference between the delivery charge and the crew's pay for estimated time
		 * @param - none
		 * @res - float representing the profit of the delivery
		 */
		float calculateDeliveryProfit();
		void printDescription();
		
	private:
		float _estSetupTime;
		float _estDriveTime;
		float _deliveryCharge;
		DeliveryCrew _crew;
};

#endif
