# BOOST_LIB shall be an environment varible witth
# boost installation path
VPATH = src tests include

STD = -std=c++17
FLAGS = -g -Wall $(STD) -I include -I $(BOOST_LIB)
CC = g++ $(FLAGS)

all: main.cpp table.o
	$(CC) $^ -o $@

test: tests.cpp table.o
	$(CC) $^ -o tests/tests
	cd tests && ./tests
#	cd -

table.o: table.cpp table.h
	$(CC) -c $<

clean:
	rm table*;  rm test*

