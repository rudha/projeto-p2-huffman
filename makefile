OBJS = ./src/main.c ./src/heap.c

DEPS = ./inc/heap.h

CC = gcc

COMPILER_FLAGS = -Wpedantic -Wall

OBJ_NAME = huffman

all : $(OBJS)
	$(CC) $(OBJS) $(DEPS) $(COMPILER_FLAGS) -o $(OBJ_NAME)
