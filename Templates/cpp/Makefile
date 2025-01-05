CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

all: program

program: Source.o
    $(CXX) $(CXXFLAGS) -o program Source.o

Source.o: Source.cpp
    $(CXX) $(CXXFLAGS) -c Source.cpp

clean:
    rm -f *.o program

