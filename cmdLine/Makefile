CC = gcc

all: args flags addArgs

args: args.o
	$(CC) args.c -o args

args.o: args.c
	$(CC) -c args.c

flags: flags.o
	$(CC) flags.c -o flags

flags.o: flags.c
	$(CC) -c flags.c

addArgs: intArgs.o
	$(CC) intArgs.c -o addArgs

intArgs.o: intArgs.c
	$(CC) -c intArgs.c

clean:
	rm *o args flags addArgs
