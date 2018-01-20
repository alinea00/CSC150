OBJS = PetersenLab2.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab2 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab2.exe

PetersenLab2.o : PetersenLab2.c
	$(CC) $(CFLAGS) PetersenLab2.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab2

tar:
	tar cvzf PetersenLab2.tar.gz makefile PetersenLab2.c
