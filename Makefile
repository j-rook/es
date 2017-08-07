CXX = g++
compFlags = c
debugFlags = g
outFlags =  o

all: person.obj test.obj crew.obj delivery.obj
	$(CXX) -$(outFlags) test test.o person.o crew.o delivery.o

test.obj: test.h test.cpp person.h crew.h delivery.h
	$(CXX) -$(compFlags) test.cpp

person.obj: person.cpp person.h
	$(CXX) -$(compFlags) person.cpp

crew.obj: crew.cpp crew.h person.h
	$(CXX) -$(compFlags) crew.cpp
	
delivery.obj: delivery.cpp delivery.h crew.h person.h
	$(CXX) -$(compFlags) delivery.cpp delivery.h

clean:
	rm -rv *o *out *o *~ *gch test
  
