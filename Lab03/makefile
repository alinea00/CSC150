OBJS = PetersenLab3.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab3 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab3.exe

PetersenLab3.o : PetersenLab3.c
	$(CC) $(CFLAGS) PetersenLab3.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab3

tar:
	tar cvzf PetersenLab3.tar.gz makefile PetersenLab3.c
