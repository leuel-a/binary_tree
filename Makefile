CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

build: main.c binary_tree.h binary_tree.c traversal.c helpers.c
	$(CC) -o main $(CFLAGS) main.c binary_tree.c traversal.c helpers.c

run:
	./main

betty: main.c binary_tree.h binary_tree.c traversal.c helpers.c
	betty main.c binary_tree.h binary_tree.c traversal.c helpers.c
