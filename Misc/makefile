OBJS = hello.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

hello : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o hello.exe

hello.o : hello.c
	$(CC) $(CFLAGS) hello.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\hello

tar:
	tar cvzf hello.tar.gz makefile hello.c
