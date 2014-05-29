CXX=g++
CFLAGS=-Wall -c
LFLAGS=-Wall
OBJS=battle-engine.o
LIBS=
battle-engine: battle-engine.o
	$(CXX) $(LFLAGS) $(OBJS) -o battle-engine $(LIBS)


battle-engine.o: main.cpp battle-engine.hpp
	$(CXX) $(CFLAGS) -o battle-engine.o main.cpp $(LIBS)


clean: 
	rm -rf *~ *.o battle-engine
