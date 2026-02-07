CC=g++
CFLAGS=-Wall -Werror -std=c++11 -I.
#DEPS = x.h
#OBJ = x.o y.o

all: file_io1 file_io2 binary_io

file_io1: file_io1.cpp
	$(CC) -o $@ $^ $(CFLAGS)

file_io2: file_io2.cpp
	$(CC) -o $@ $^ $(CFLAGS)

binary_io: binary_io.cpp
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean zip

clean:
	rm -f *.o binary_io file_io1 file_io2 example.txt *.zip

zip: clean
	zip fileio.zip *.cpp *.h Makefile
