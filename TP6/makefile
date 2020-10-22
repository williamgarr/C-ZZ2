SRC=Chaine.cpp tests_catch.cpp main_test.cpp Vecteur.cpp
SRC1=exo1.cpp
#SRC=$(wildcard *.cpp)  
EXE=cpp5
EXE1=exo1

CXXFLAGS+=-Wall -Wextra -MMD -g -O2
LDFLAGS= 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

exo1: $(SRC1)
	$(CXX) -o $(EXE1) $(SRC1) $(LDFLAGS)

clean:
	rm -rf build core *.gch $(EXE) $(EXE1)

-include $(DEP)
