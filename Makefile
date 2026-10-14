# Builds every Day-*/NN.c into bin/Day-*/NN with warnings and sanitizers on.
.RECIPEPREFIX = >
CC     = gcc
CFLAGS = -std=c11 -Wall -Wextra -g -fsanitize=address,undefined

SRCS = $(wildcard Day-*/*.c)
BINS = $(patsubst %.c,bin/%,$(SRCS))

all: $(BINS)

bin/%: %.c
> @mkdir -p $(dir $@)
> $(CC) $(CFLAGS) $< -o $@ -lm

clean:
> rm -rf bin

.PHONY: all clean
