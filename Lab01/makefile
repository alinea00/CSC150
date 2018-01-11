OBJS = PetersenLab1.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab1 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab1.exe

PetersenLab1.o : PetersenLab1.c
	$(CC) $(CFLAGS) PetersenLab1.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab1

tar:
	tar cvzf PetersenLab1.tar.gz makefile PetersenLab1.c
