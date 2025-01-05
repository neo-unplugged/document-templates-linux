CC = gcc
CFLAGS = -Wall -g

all: program

program: source.o
    $(CC) $(CFLAGS) -o program source.o

source.o: source.c
    $(CC) $(CFLAGS) -c source.c

clean:
    rm -f *.o program

