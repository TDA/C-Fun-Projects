CFLAGS=-Wall -g
gcc:
	gcc-4.9 ${CFLAGS} $(1).c -o $(1).out
	./$(1).out

clean:
	rm -rf $(1).out*