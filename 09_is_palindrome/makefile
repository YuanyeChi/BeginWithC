SHELL = /bin/sh

SOURCE = *.c
OBJS =  sum.o test1.o
CFLAG = -Wall -g -lm
CC = gcc

%.o: %.c
	$(CC) $(CFLAGS)  -o $@ %<

test :$(SOURCE)
	$(CC) $(CFLAGS)  -o $@ $^

clean:
	rm *.o
	rm test1


