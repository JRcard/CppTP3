CXX = g++
CXXFLAGS = -Os -Wall
OPT = -pedantic
programme = tp3A18
objets = tp3A18.o TransAvion.o TransBase.o TransVdL.o Voyage.o

all: $(programme)
	
%.o: %.cpp 
	$(CXX) $(CXXFLAGS) $(OPT) -c $< -o $@

$(objets) : TransAvion.h TransBase.h TransVdL.h Voyage.h

$(programme) : $(objets)
	$(CXX) -o $@ $^

clean: 
	rm $(objets)


