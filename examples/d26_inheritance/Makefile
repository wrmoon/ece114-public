CC=g++
CFLAGS=-Wall -Werror -std=c++11 -I.

all: polygon example1 polygon2

example1: example1.cpp
	$(CC) -o $@ $^ $(CFLAGS)

polygon: polygon.cpp
	$(CC) -o $@ $^ $(CFLAGS)

polygon2: polygon2.cpp
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean zip

clean:
	rm -f *.o polygon polygon2 example1 *.zip

zip: clean
	zip inheritance.zip *.cpp *.h Makefile
