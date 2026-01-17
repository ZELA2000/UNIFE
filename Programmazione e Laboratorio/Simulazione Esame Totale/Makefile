calorie: main.o funzioni.o
	gcc -g -o calorie main.o funzioni.o

funzioni.o: funzioni.c funzioni.h
	gcc -g -c funzioni.c

main.o: main.c funzioni.h
	gcc -g -c main.c