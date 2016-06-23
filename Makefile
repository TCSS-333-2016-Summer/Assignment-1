#compiler
CC=gcc
#linker
LD=gcc
#include file directory
CFLAGS=-I.

#linker rule
testSort: main.o insertionSort.o
#	gcc -o testSort main.o insertionSort.o
	LD -o testSort main.o insertSort.o
	
#compiler rules
main.o: main.c
#gcc -c -I. -o main.o main.c
	CC -c $CFLAGS main.o main.c
	 
insertionSort.o:
sort1.o: 
sort2.o: 

#clean up procedure		
clean:
	rm *.o

