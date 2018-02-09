OBJS = PetersenLab5-Multiples.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab5-Multiples : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab5-Multiples.exe

PetersenLab5-Multiples.o : PetersenLab5-Multiples.c
	$(CC) $(CFLAGS) PetersenLab5-Multiples.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab5-Multiples

tar:
	tar cvzf PetersenLab5-Multiples.tar.gz makefile PetersenLab5-Multiples.c
