CC = gcc
CXX = g++
CFLAGS = -Wall -g
CXXFLAGS = -Wall -g

# Targets
all: c_program cpp_program

c_program: quicksort_c.o
	$(CC) $(CFLAGS) -o c_program quicksort_c.o

cpp_program: quicksort_cpp.o
	$(CXX) $(CXXFLAGS) -o cpp_program quicksort_cpp.o

quicksort_c.o: quicksort.c
	$(CC) $(CFLAGS) -c quicksort.c

quicksort_cpp.o: quicksort.cpp
	$(CXX) $(CXXFLAGS) -c quicksort.cpp

# Clean up object files and executables
clean:
	rm -f *.o c_program cpp_program
