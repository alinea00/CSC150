OBJS = PetersenLab4.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab4 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab4.exe

PetersenLab4.o : PetersenLab4.c
	$(CC) $(CFLAGS) PetersenLab4.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab4

tar:
	tar cvzf PetersenLab4.tar.gz makefile PetersenLab4.c
