#include "dpas.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;
using std::istringstream;

DPAS::DPAS()
{
	fstream file;
	string line,userName;
	file.open("default_config.txt");
	if (file.is_open())
	{
		while ( getline (file,line) )
		{//will reimplement defconfig so each entry takes a single line
				
			istringstream in(line);
			
			string type, answer;
			in >> type;
			if (type == "user")
			{
				in >> userName;
				
				
				cout << userName << ", is that you?" << 
					endl << "(y/n) ";
				cin >> answer;
				
				if (answer.compare("y") != 0)
				{
					cout << "Please enter user's name." <<
						endl << ">> ";
					cin >> userName;
				}
				
				setUserName(userName);
			}
			
			else if (type == "crew")
			{
				string name;
				float pay;
				
				in >> name;
				
				cout << "Is " << name << " working?" << 
					endl << "(y/n) ";
					
				cin >> answer;
				
				if (answer.compare("y") != 0)
				{
					cout << "Please enter crew member's name." <<
						endl << ">> ";
						
					cin >> name;
					
					cout << "Please enter crew member's hourly pay" <<
						endl << ">> ";
						
					cin >> pay;
				}
				
				else
				{
					in >> pay;
				}
				
				Person p(pay, name);
				//p.printDescription();
				_crew.addCrewMember(p);
			}
		}
		
		file.close();
	}	
}


string DPAS::getUserName()
{
	return _userName;
}

void DPAS::setUserName(string name)
{
	_userName = name;
}

DeliveryCrew& DPAS::getCrew()
{
	return _crew;
}

void DPAS::setCrew(DeliveryCrew& crew)
{
	_crew = crew;
}
