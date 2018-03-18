OBJS = PetersenLab8.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab8 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab8.exe

PetersenLab8.o : PetersenLab8.c
	$(CC) $(CFLAGS) PetersenLab8.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab8

tar:
	tar cvzf PetersenLab8.tar.gz makefile PetersenLab8.c
