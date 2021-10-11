CC=gcc
CFLAGS=-g -Wall
OBJFLAGS=-g -Wall -c

targets=student prelab6 prog1 prog2

all: $(targets)

student: student.c student.h
	$(CC) $(OBJFLAGS) $@.c

prelab6: prelab6.c student.o
	$(CC) $(CFLAGS) $@.c student.o -o $@

prog1: prog1.c student.o prelab6.h
	$(CC) $(CFLAGS) $@.c student.o -o $@

prog2: prog2.c
	$(CC) $(CFLAGS) $@.c -o $@

clean:
	 rm *.o $(targets)