#ifndef DELIVERY_H
#define DELIVERY_H
#include <iostream>
#include "crew.h"
#include <string>


class Delivery
{
	public:
		int getEstimatedSetupTime();
		int getEstimatedDriveTime();
		float getDeliveryCharge();
		void setEstimatedSetupTime(int);
		void setEstimatedDriveTime(int);
		void setDeliveryCharge(float);
		int calculateEstimatedDeliveryTime();
		
	private:
		int _estSetupTime;
		int _estDriveTime;
		float _deliveryCharge;
		DeliveryCrew crew;
};

#endif
