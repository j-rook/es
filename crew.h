#ifndef DELCREW_H
#define DELCREW_H

#include "person.h"

class DeliveryCrew
{

	        
   
    	
    public:
		DeliveryCrew();
		DeliveryCrew(Person a);
		DeliveryCrew(Person a, Person b);
		bool addCrewMember(Person& possibleAddition);//if member added returns true
        bool removeCrewMember(Person possibleRemoval);
        void listCrewMembers();
        float sumCrewHourlyRates();
       
        int getCrewSize();
        void setCrewSize(int);
        
        
		Person _crew[2] = {};
		
	private:
		int _size;
};

#endif
