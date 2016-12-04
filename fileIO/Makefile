CC = gcc

all: byFile byChar

byFile: readFile.o
	$(CC) readFile.c -o byFile

readFile.o: readFile.c
	$(CC) -c readFile.c

byChar: readByChar.o
	$(CC) readByChar.c -o byChar

readByChar.o: readByChar.c
	$(CC) -c readByChar.c

clean:
	rm *o byFile byChar

