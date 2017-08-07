#include "test.h"
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;

int main()
{
	/*
    Person a, b;
    /*DeliveryCrew crew1;
    for (Person a : crew1._crew)
    {
        a.printDescription();
    }
    a.setName("andy");
    b.setName("blah");
    a.setHourlyRate(2.5);
    b.setHourlyRate(3.5);
    
    DeliveryCrew crew(a);
    
    crew.listCrewMembers();
    float sum = crew.sumCrewHourlyRates();
    std::cout << "\nCrew's hourly pay: " << sum << std::endl;
    crew.addCrewMember(b);
    
    crew.listCrewMembers();
    sum = crew.sumCrewHourlyRates();
    std::cout << "\nCrew's hourly pay: " << sum << std::endl;
    
    crew.removeCrewMember(b);
        crew.listCrewMembers();
    sum = crew.sumCrewHourlyRates();
    std::cout << "\nCrew's hourly pay: " << sum << std::endl;
    
    crew.removeCrewMember(a);
        crew.listCrewMembers();
    sum = crew.sumCrewHourlyRates();
    std::cout << "\nCrew's hourly pay: " << sum << std::endl;
    
    crew.removeCrewMember(b);
    crew.listCrewMembers();
    sum = crew.sumCrewHourlyRates();
    std::cout << "\nCrew's hourly pay: " << sum << std::endl;
    */

	fstream file;
	string line,name;
	file.open("default_config.txt");
	if (file.is_open()){
		while ( getline (file,line) )
		{
			if (line.compare("user") == 0)
			{
				getline(file,line);
				name = line;
				cout <<	name << ", is that you?" <<
					endl<< "(y/n) ";
					
				string answer;
				cin >> answer;
				
				if (answer.compare("y") != 0)
				{
					cout << "Please enter your name." <<
						endl<< ">> ";
						
					cin >> name;
				}
			}
			
			else if (line.compare("crew") == 0)
			{
				getline(file,line);
				name = line;
				getline(file,line);
				float pay;
				//pay = std::strtod(line.c_str(), 0);
				
				cout << "Is " << name << " working?" << 
					endl << "(y/n) ";
				string answer;
				cin >> answer;
				
				if (answer.compare("y") != 0)
				{
						cout << "Please enter crew member's name." << 
							endl << ">> " << endl; 
						cin >> name;
						
				}
				
				//cout << name << endl;

			}
		}	
	}
	
    cout << "Hello, " << name << endl <<
    	"Welcome to the Delivery Profit Analysis System.\n\n";
    Delivery d1;
//    d1.setEstimatedSetupTime(30);
    std::cout << "For this delivery, there was a profit of: " << d1.calculateDeliveryProfit() << std::endl;
	file.close();
}
