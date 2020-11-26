make all: arithmetic_operators data_types referencias

CFLAGS = -c -Wall

arithmetic_operators: arithmetic_operators.o 
	$(CXX) arithmetic_operators.o -o arithmetic

arithmetic_operators.o: arithmetic_operators.cc
	$(CXX)	$(CFLAGS) arithmetic_operators.cc

data_types: data_types.o 
	$(CXX) data_types.o -o data_types

data_types.o: data_types.cc
	$(CXX) 	$(CFLAGS) data_types.cc

referencias: referencias.o 
	$(CXX) referencias.o -o referencias

referencias.o: referencias.cc
	$(CXX) 	$(CFLAGS) referencias.cc


clean:
	$(RM) *.o arithmetic data_types referencias