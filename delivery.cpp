#include "delivery.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int Delivery::getEstimatedSetupTime()
{
	return _estSetupTime;	
}

int Delivery::getEstimatedDriveTime()
{
	return _estDriveTime;
}

float Delivery::getDeliveryCharge()
{
	return _deliveryCharge;
}

void Delivery::setEstimatedSetupTime(int setupTime)
{
	_estSetupTime = setupTime;
}

void Delivery::setEstimatedDriveTime(int driveTime)
{
	_estDriveTime = driveTime;
}

void Delivery::setDeliveryCharge(float delChg)
{
	_deliveryCharge = delChg;
}
