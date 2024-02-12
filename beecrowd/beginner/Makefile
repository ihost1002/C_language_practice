cc = gcc
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
.PHONY: all
all: $(OBJS)
%.o: %.c
	$(cc) -o $@ $< -g -Wall -lm

.PHONY: clean
clean:
	$(RM) *.o
