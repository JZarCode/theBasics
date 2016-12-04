CC = gcc

all: read

read: readFile.o
	$(CC) readFile.c -o read

readFile.o: readFile.c
	$(CC) -c readFile.c

run:
	./read testing.txt

clean:
	rm *o read

