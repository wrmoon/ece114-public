CC=g++
CFLAGS=-Wall -Werror -std=c++11 -I.
#DEPS = functions.h
#OBJ = curdle.o functions.o

#%.o: %.cpp $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

this: this.cpp
	$(CC) -o $@ $^ $(CFLAGS)

this2: this2.cpp
	$(CC) -o $@ $^ $(CFLAGS)

this3: this3.cpp
	$(CC) -o $@ $^ $(CFLAGS)

this4: this4.cpp
	$(CC) -o $@ $^ $(CFLAGS)

this5: this5.cpp
	$(CC) -o $@ $^ $(CFLAGS)

this6: this6.cpp
	$(CC) -o $@ $^ $(CFLAGS)

stock20: stock20.cpp stock20client.cpp
	$(CC) -o $@ $^ $(CFLAGS)

collections: stock20.cpp collections.cpp
	$(CC) -o $@ $^ $(CFLAGS)

self_collection: self_collection.cpp
	$(CC) -o $@ $^ $(CFLAGS)

static_box: static_box.cpp
	$(CC) -o $@ $^ $(CFLAGS)

static: static.cpp
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean zip

clean:
	rm -f *.o this this2 this3 this4 this5 this6 stock20 collections static_box static *.zip

zip: clean
	zip deck21.zip *.cpp *.h Makefile
