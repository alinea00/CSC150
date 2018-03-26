OBJS = PetersenLab9.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab9 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab9.exe

PetersenLab9.o : PetersenLab9.c
	$(CC) $(CFLAGS) PetersenLab9.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab9

tar:
	tar cvzf PetersenLab9.tar.gz makefile PetersenLab9.c
