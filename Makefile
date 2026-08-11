<<<<<<< HEAD
prog2: prog2.c
	gcc prog2.c -o prog2prog2: prog2.c
	gcc prog2.c -o prog2CC = gcc
CFLAGS = -Wall -g

prog1: prog1.c
	$(CC) $(CFLAGS) -o prog1 prog1.c

clean:
	rm -f prog1

=======
all:
	gcc src/main.c -o bin/main

run:
	./bin/main

clean:
	rm -f bin/main
>>>>>>> 13dade7a543eb17c2a325da6ce77462bd1cea003
