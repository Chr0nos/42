CC=gcc
#my flags
#CFLAGS=-W -Wall -ansi -pedantic -O2 -ggdb -pipe

#42 flags
CFLAGS=-Wall -Wextra -Werror -O2 -pipe -ggdb
LDFLAGS=
EXEC=colle

all: $(EXEC)

colle: ft_putchar.o colle-00.o main.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
