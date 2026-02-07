CC=g++
CFLAGS=-Wall -Werror -std=c++11 -I.
#DEPS = x.h
#OBJ = x.o y.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: exception1 rectangle exception2 bad_alloc

exception1: exception1.cpp
	$(CC) -o $@ $^ $(CFLAGS)

exception2: exception2.cpp
	$(CC) -o $@ $^ $(CFLAGS)

bad_alloc: bad_alloc.cpp
	$(CC) -o $@ $^ $(CFLAGS)

rectangle: rectangle.o rect_example.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean zip

clean:
	rm -f *.o bad_alloc rectangle exception1 exception2 *.zip

zip: clean
	zip exceptions.zip *.cpp *.h Makefile
