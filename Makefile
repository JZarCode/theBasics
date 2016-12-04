CC = gcc

all: cmdL

cmdL: cmdL.o
	$(CC) cmdL.c -o cmdL

cmdL.o: cmdL.c
	$(CC) -c cmdl.c

run:
	./cmdL

clean:
	rm *o cmdL
