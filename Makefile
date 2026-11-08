CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: main

output: main.c
	@$(CC) $(CFLAGS) main.c -o main

test: main
	@./main
	@rm -f main

clean:
	@rm -f main

.PHONY: all test clean