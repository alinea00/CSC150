OBJS = PetersenLab7.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab7 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab7.exe

PetersenLab7.o : PetersenLab7.c
	$(CC) $(CFLAGS) PetersenLab7.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab7

tar:
	tar cvzf PetersenLab7.tar.gz makefile PetersenLab7.c
