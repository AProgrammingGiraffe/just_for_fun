CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: output

output: main.c
	@$(CC) $(CFLAGS) main.c -o output

test: output
	@./output
	@rm -f output

clean:
	@rm -f output

.PHONY: all test clean