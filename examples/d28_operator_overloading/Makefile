CC=g++
CFLAGS=-Wall -Werror -g -std=c++11 -I.

all: deep_copy op_overload

deep_copy: deep_copy.cpp
	$(CC) -o $@ $^ $(CFLAGS)

op_overload: op_overload.cpp
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean zip

clean:
	rm -f *.o deep_copy op_overload  *.zip

zip: clean
	zip overloading.zip *.cpp *.h Makefile
