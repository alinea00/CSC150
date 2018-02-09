OBJS = PetersenLab5-Largest.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab5-Largest : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab5-Largest.exe

PetersenLab5-Largest.o : PetersenLab5-Largest.c
	$(CC) $(CFLAGS) PetersenLab5-Largest.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab5-Largest

tar:
	tar cvzf PetersenLab5-Largest.tar.gz makefile PetersenLab5-Largest.c
