CC = gcc

all: args flags

args: args.o
	$(CC) args.c -o args

args.o: args.c
	$(CC) -c args.c

flags: flags.o
	$(CC) flags.c -o flags

flags.o: flags.c
	$(CC) -c flags.c

clean:
	rm *o args flags
