#include "test.h"
#include <fstream>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;
using std::istringstream;

int main()
{
	DPAS dpas;
	cout << "=================================" <<
		endl<<endl<<endl;
    cout << "Hello, " << dpas.getUserName() << endl <<
    	"Welcome to the Delivery Profit Analysis System.\n\n";
    	
    cout << "Current Availble Crew Members: " << endl;
    dpas.getCrew().printDescription();
    cout << "=================================" <<
		endl;
    Delivery d1(dpas.getCrew());
    d1.printDescription();
    //std::cout << "For this delivery, there was a profit of: " << d1.calculateDeliveryProfit() << std::endl;
	Person p = d1.getDeliveryCrew().getCrewMember("jack");
	if (p.getName().compare("Null") != 0)
	{
		p.printDescription();
	}
	
}
