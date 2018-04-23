OBJS = PetersenLab12.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab12 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab12.exe

PetersenLab12.o : PetersenLab12.c
	$(CC) $(CFLAGS) PetersenLab12.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab12

tar:
	tar cvzf PetersenLab12.tar.gz makefile PetersenLab12.c
