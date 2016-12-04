CC = gcc

all: person

person: struct.o
	$(CC) struct.c -o person

struct.o: struct.c
	$(CC) -c struct.c

clean:
	rm *o person