CXX = g++
compFlags = c
debugFlags = g
outFlags =  o

all: person.obj test.obj crew.obj
	$(CXX) -$(outFlags) test test.o person.o crew.o

test.obj: test.h test.cpp person.h crew.h
	$(CXX) -$(compFlags) test.cpp

person.obj: person.cpp person.h inout.h
	$(CXX) -$(compFlags) person.cpp

crew.obj: crew.cpp crew.h person.h
	$(CXX) -$(compFlags) crew.cpp

clean:
	rm -rv *o
  
