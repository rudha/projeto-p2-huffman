OBJS = ./src/*.c

DEPS = ./inc/*.h

CC = gcc

COMPILER_FLAGS = -Wpedantic -Wall

OBJ_NAME = huffman

all :
	$(CC) $(COMPILER_FLAGS) $(OBJS) $(DEPS) -o $(OBJ_NAME)

clean :
	rm huffman
