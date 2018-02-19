OBJS = PetersenLab6.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab6 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab6.exe

PetersenLab6.o : PetersenLab6.c
	$(CC) $(CFLAGS) PetersenLab6.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab6

tar:
	tar cvzf PetersenLab6.tar.gz makefile PetersenLab6.c
