OBJS = PetersenLab11.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab11 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab11.exe

PetersenLab11.o : PetersenLab11.c
	$(CC) $(CFLAGS) PetersenLab11.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab11

tar:
	tar cvzf PetersenLab11.tar.gz makefile PetersenLab11.c
