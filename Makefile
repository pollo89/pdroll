CC=gcc
CFLAGS=-I.
DEPS = pdroller.h
OBJ = main.o pdroller.o
EXENAME = pdroller

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXENAME)

.PHONY : clean
clean:
	rm -f *.o  *~ core

