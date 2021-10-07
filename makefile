all: string.o
	gcc -o string string.o

string.o: string.c
	gcc -c string.c

run:
	./string