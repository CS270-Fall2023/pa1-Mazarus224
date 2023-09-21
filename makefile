CC = gcc
FLAGS = -Wall -g
OFLAGS = -Wall -g -c

PA1: main.o PA1.o
	$(CC) $(FLAGS) $< PA1.o -o $@

PA1.o: PA1.c PA1.h
	$(CC) $(OFLAGS) $<

main.o: main.c PA1.h
	$(CC) $(OFLAGS) $<  

clean:
	rm *.o PA1 

all:
	$(CC) $(FLAGS) PA1.h PA1.c main.c -o PA1