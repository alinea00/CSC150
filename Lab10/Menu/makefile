OBJS = PetersenLab10-Menu.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PetersenLab10-Menu : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PetersenLab10-Menu.exe

PetersenLab10-Menu.o : PetersenLab10-Menu.c
	$(CC) $(CFLAGS) PetersenLab10-Menu.c

clean:
	\rm *.o *.exe *.tar.gz

run:
	.\PetersenLab10-Menu

tar:
	tar cvzf PetersenLab10-Menu.tar.gz makefile PetersenLab10-Menu.c
