OBJS = PetersenLab10-Graphs.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab10-Graphs : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab10-Graphs.exe

PetersenLab10-Graphs.o : PetersenLab10-Graphs.c
	$(CC) $(CFLAGS) PetersenLab10-Graphs.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab10-Graphs

tar:
	tar cvzf PetersenLab10-Graphs.tar.gz makefile PetersenLab10-Graphs.c
