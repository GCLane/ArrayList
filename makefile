CC=g++
CFLAGS=-std=c++11

all: ArrayListImple.o ArrayList.o
		$(CC) $(CFLAGS) ArrayListImple.o ArrayList.o -o out

ArrayListImple.o:ArrayListImple.cpp
		$(CC) $(CFlAGS) -c ArrayListImple.cpp

ArrayList.o:ArrayList.cpp
		$(CC) $(CFLAGS) -c ArrayList.cpp
