all:
	$(CC) -c -g xor.c
	$(CC) -c -g example.c
	$(CC) example.o xor.o -o example
clean:
	rm xor.o example.o
