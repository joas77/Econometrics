VPATH = src include

STD = -std=c++17
FLAGS = -Wall $(STD) -I include 
CC = g++ $(FLAGS)


test: test.cpp table.o
	$(CC) $^ -o $@

table.o: table.cpp table.h
	$(CC) -c $<

clean:
	rm table*;  rm test*

