CC=g++
CFLAGS=-g -Wall -Werror -std=c++11 -I.
#CFLAGS=-Wall -Werror -fno-elide-constructors -std=c++11 -I.
#DEPS = functions.h
#OBJ = curdle.o functions.o

#%.o: %.cpp $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

course4: course4.cpp student04.cpp
	$(CC) -o $@ $^ $(CFLAGS)

course3: course3.cpp student03.cpp
	$(CC) -o $@ $^ $(CFLAGS)

course2: course2.cpp student02.cpp
	$(CC) -o $@ $^ $(CFLAGS) -fno-elide-constructors

course1: course1.cpp student01.cpp
	$(CC) -o $@ $^ $(CFLAGS)

course0: course0.cpp student00.cpp
	$(CC) -o $@ $^ $(CFLAGS)

mil: mil.cpp
	$(CC) -o $@ $^ $(CFLAGS)

mil2: mil2.cpp
	$(CC) -o $@ $^ $(CFLAGS)

mil3_point: mil3_point.cpp
	$(CC) -o $@ $^ $(CFLAGS)


.PHONY: clean zip

clean:
	rm -f *.o course0 course1 course2 const_mf_example const_mf_example3 mil mil2 

zip:
	zip deck20.zip *.cpp *.h Makefile

