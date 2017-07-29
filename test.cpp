#include "test.h"

int main()
{
    Person a, b;
    /*DeliveryCrew crew1;
    for (Person a : crew1._crew)
    {
        a.printDescription();
    }*/
    a.setName("andy");
    b.setName("blah");
    a.setHourlyRate(2.5);
    b.setHourlyRate(3.5);
    
    DeliveryCrew crew(a);
    
    crew.listCrewMembers();
    
    crew.addCrewMember(b);
    
    crew.listCrewMembers();
}
