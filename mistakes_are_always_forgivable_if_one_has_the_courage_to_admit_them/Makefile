# Makefile for calculator
CC=gcc
CFLAGS=-WALL -pedantic -Werror -Wextra
SOURCES=main.c get_op_func.c op_functions.c
OBJECTS=main.o get_op_func.o op_functions.o

all: 2-calculator

2-calculator: ./main.o ./get_op_func.o ./op_functions.o
	ar -rc 2-calculator ./main.o ./get_op_func.o ./op_functions.o

	$(OBJECTS): $(SOURCES)

	clean:
		rm -f $(OBJECTS)

	re:	$(OBJECTS)
