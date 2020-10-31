CC=gcc
CFLAGS= -Werror -Wall -g
TARGET=pumpkin

pumpkin: pumpkin.c
	$(CC) $(CFLAGS) $^ -o $@

pumpkintest:
	./pumpkin haaalloooo

clean:
	rm -f *.o
	rm -f pumpkin
	rm -f hallow