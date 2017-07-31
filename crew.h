#ifndef DELCREW_H
#define DELCREW_H

#include "person.h"

class DeliveryCrew
{

	        
   
    	
    public:
		DeliveryCrew();
		DeliveryCrew(Person a);
		DeliveryCrew(Person a, Person b);
		//if hyphen is swapped x, following description is ignored from html
		
		/*
		 *Function to add crew member to underlying array of People.
		 *@impl - verifies crew size is less than the maximum
		 *@param - reference to a Person to be potentially added
		 *@res - boolean confirming addition or not
		 */
		bool addCrewMember(Person& possibleAddition);//if member added returns true
		/*
		 *Function to potentially remove a crew member
		 *@impl - verifies that there is at least one crew member
		 *@param - reference to a Person to be potentiall removed
		 *@res - boolean confirming removal or not
		 */
        bool removeCrewMember(Person& possibleRemoval);
        /*
         *Function to list crew members' names and hourly pay
         *@impl - verifies existence of crew
         *@param - none
         *@res - none
         */
        void listCrewMembers();
        /*
         *Function to sum crew members' hourly pay
         *@impl - assumes 0 sum until checking for crew
         *@param - none
         *@res - float equivalent to sum of crew pay
         */
        float sumCrewHourlyRates();
       
        int getCrewSize();
        void setCrewSize(int);
        const int getMaxSize();
        
		
		
	private:
		int _size;
		int static const _maxSize = 2;
		Person _crew[_maxSize];
};

#endif
