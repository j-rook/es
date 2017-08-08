#ifndef DPAS_H
#define DPAS_H

#include <iostream>
#include "person.h"
#include "crew.h"
#include "delivery.h"
#include <fstream>
#include <sstream>
#include <string>

/*
 * Main Class of the Delivery Profit Analysis System
 * 
 * @impl - setups initial configurations in the constructor 
 * @impl - allows access to user name, crew, etc.
 * 
 */
class DPAS
{
	public:
		DPAS();
		std::string getUserName();
		void setUserName(std::string);
		DeliveryCrew& getCrew();
		void setCrew(DeliveryCrew&);
		
	private:
		std::string _userName;
		DeliveryCrew _crew;
	
};

#endif
