CXX = g++
CXXFlags = -c -g -Wall -std=c++11
debugFlags = g
outFlags =  -o

all: person.obj test.obj crew.obj delivery.obj dpas.obj
	$(CXX) $(outFlags) test test.o person.o crew.o delivery.o dpas.o

test.obj: test.h test.cpp person.h crew.h delivery.h dpas.h
	$(CXX) $(CXXFlags) test.cpp

person.obj: person.cpp person.h
	$(CXX) $(CXXFlags) person.cpp

crew.obj: crew.cpp crew.h person.h
	$(CXX) $(CXXFlags) crew.cpp
	
delivery.obj: delivery.cpp delivery.h crew.h person.h
	$(CXX) $(CXXFlags) delivery.cpp delivery.h
	
dpas.obj: dpas.cpp dpas.h delivery.h crew.h person.h
	$(CXX) $(CXXFlags) dpas.cpp dpas.h

clean:
	rm -rv *o *out *o *~ *gch test
  
