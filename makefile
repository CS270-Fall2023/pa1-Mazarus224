PA1: main.o PA1.o
	gcc PA1.o main.o -o PA1

PA1.o: PA1.c PA1.h
	gcc -c PA1.c PA1.h

main.o: main.c PA1.h
	gcc -c main.c PA1.h 