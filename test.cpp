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
	
    cout << "Hello, " << dpas.getUserName() << endl <<
    	"Welcome to the Delivery Profit Analysis System.\n\n";
    	
    cout << "Current crew: " << endl;
    dpas.getCrew().listCrewMembers();
    cout << "=================================" <<
		endl;
    Delivery d1(dpas.getCrew());
    std::cout << "For this delivery, there was a profit of: " << d1.calculateDeliveryProfit() << std::endl;
	
}
