#ifndef DELIVERY_H
#define DELIVERY_H
#include <iostream>
#include "crew.h"
#include <string>


class Delivery
{
	public:
		Delivery();
		float getEstimatedSetupTime();
		float getEstimatedDriveTime();
		float getDeliveryCharge();
		void setEstimatedSetupTime(float);
		void setEstimatedDriveTime(float);
		void setDeliveryCharge(float);
		float calculateEstimatedDeliveryTime();
		float calculateDeliveryProfit();
		
	private:
		float _estSetupTime;
		float _estDriveTime;
		float _deliveryCharge;
		DeliveryCrew crew;
};

#endif
